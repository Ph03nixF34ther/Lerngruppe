// AUTOR: ELIAS NIEBERGALL
// DATUM: 29.1.2026

#include "sdlinterf.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int max(int a, int b) {return (a < b) ? b : a;}
int min(int a, int b) {return (a > b) ? b : a;}
 
struct punkt {
        double x;
        double y;
        int r;
        int g;
        int b;
};

struct anzeigepunkt {
        int x;
        int y;
};

typedef struct koeff koeff;
typedef struct farbinfo farbinfo;


struct koeff {
        double value;
        double min_value;
        double max_value;
        double step;
};

struct farbinfo {
        int fac_red;
        int fac_green;
        int fac_blue;
        int bias_red;
        int bias_green;
        int bias_blue;
};

#include "./ifs-daten-header/kristall-2.h"

struct punkt array_generierter_punkte[ANZAHL];

int find_random_equation_number () {

        int random_number = rand() % 100;

        for (int index_of_equation_propability = 0; index_of_equation_propability < GL_ANZ; index_of_equation_propability++) {

                if (prozent[index_of_equation_propability] > random_number) {
                        return index_of_equation_propability;
                }
        }
        return GL_ANZ - 1;
}

void calculate_point_with_equation_number (int equation_number, int index) {
        array_generierter_punkte[index].x = 
                array_generierter_punkte[index-1].x * c[equation_number][0].value + 
                array_generierter_punkte[index-1].y * c[equation_number][1].value + 
                c[equation_number][2].value;

        array_generierter_punkte[index].y = 
                array_generierter_punkte[index-1].x * c[equation_number][3].value + 
                array_generierter_punkte[index-1].y * c[equation_number][4].value + 
                c[equation_number][5].value;
}

void recalculate_maximum (struct punkt *maximum, struct punkt *neuer_punkt) {
        if (maximum->x < neuer_punkt->x) {
                maximum->x = neuer_punkt->x;
        }
        if (maximum->y < neuer_punkt->y) {
                maximum->y = neuer_punkt->y;
        }
}

void recalculate_minimum (struct punkt *minimum, struct punkt *neuer_punkt) {
        if (minimum->x > neuer_punkt->x) {
                minimum->x = neuer_punkt->x;
        }
        if (minimum->y > neuer_punkt->y) {
                minimum->y = neuer_punkt->y;
        }
}

struct anzeigepunkt calculate_pixel (struct punkt punkt_zum_anzeigen, struct punkt minimum, struct punkt maximum) {
        int x = max(0, min(((punkt_zum_anzeigen.x - minimum.x) / (maximum.x - minimum.x)) * (SDL_X_SIZE - 1), SDL_X_SIZE-1));
        int y = max(0, min((1 - ((punkt_zum_anzeigen.y - minimum.y) / (maximum.y - minimum.y))) * (SDL_Y_SIZE - 1), SDL_Y_SIZE-1));

        struct anzeigepunkt result = {x,y};
        return result;
};

void calculate_new_color_value (struct punkt *zu_aendernder_punkt, farbinfo aenderungen) {
        zu_aendernder_punkt->r = max(0, min (255, (((zu_aendernder_punkt-1)->r * (aenderungen.fac_red))/100 + aenderungen.bias_red)));
        zu_aendernder_punkt->g = max(0, min (255, (((zu_aendernder_punkt-1)->g * (aenderungen.fac_green))/100 + aenderungen.bias_green)));
        zu_aendernder_punkt->b = max(0, min (255, (((zu_aendernder_punkt-1)->b * (aenderungen.fac_blue))/100 + aenderungen.bias_blue)));
}

int main (int argc, char *argv[]) {
        srand(time(NULL));

        sdlInit();

        while (1) {
                struct punkt maximum = {-10e300, -10e300};
                struct punkt minimum = {10e300, 10e300};
                
                array_generierter_punkte[0].x = 0;
                array_generierter_punkte[0].y = 0;
                array_generierter_punkte[0].r = ROT;
                array_generierter_punkte[0].g = GRUEN;
                array_generierter_punkte[0].b = BLAU;

                
                int number_of_equation = 0;

                for (int index_of_point = 1; index_of_point < ANZAHL; index_of_point++) {
                        number_of_equation = find_random_equation_number();

                        calculate_point_with_equation_number(number_of_equation, index_of_point);
                        calculate_new_color_value(array_generierter_punkte + index_of_point, farbe[number_of_equation]);

                        if (index_of_point > ERSTER) {
                                recalculate_maximum(&maximum, &array_generierter_punkte[index_of_point]);
                                recalculate_minimum(&minimum, &array_generierter_punkte[index_of_point]);
                        }
                }

                sdlSetBlack();

                struct anzeigepunkt anzeige;
                for (int i = ERSTER; i < ANZAHL; i++) {

                        anzeige = calculate_pixel(array_generierter_punkte[i], minimum, maximum);

                        sdlDrawPoint(anzeige.x, anzeige.y, 
                                array_generierter_punkte[i].r, 
                                array_generierter_punkte[i].g, 
                                array_generierter_punkte[i].b);
                }

                sdlUpdate();

                for (int i = 0; i < GL_ANZ; i++) {
                        for (int j = 0; j < 6; j++) {
                                c[i][j].value += c[i][j].step;
                                if (c[i][j].value  > c[i][j].max_value || c[i][j].value  < c[i][j].min_value) {
                                        c[i][j].step *= -1;
                                }
                        }
                }
        }

        sdlMilliSleep(10000);

        sdlExit();
}