// Autor: Elias Niebergall
// Datum: 12.12.'25
// Wuerfeln

#define MAX_DICE_ROLLS 10000
#define DIVISOR 2
#define WIDTH 140

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
        int verteilung[WIDTH] = {0};
        int maximum_verteilung = 0;
                
        int random_number = 0;
        int wuerfe = 0;
        int six = 0;

        int min = 0;
        int max = 0;
        int average = 0;

        srand(time(NULL));


        for (int i = 0; i < MAX_DICE_ROLLS; i++) {
                random_number = 0;
                wuerfe = 0;
                six = 0;
                while (six  != 2) {
                        wuerfe += 1;
                        random_number = rand()%6 + 1;
                        if (random_number == 6) {
                                six++;
                        } else {
                                six = 0;
                        }
                }

                if (min > wuerfe || min == 0) {
                        min = wuerfe;
                }
                if (max < wuerfe) {
                        max = wuerfe;
                }
                average += wuerfe;

                int i = (wuerfe / DIVISOR < WIDTH) ? ((int)(wuerfe / DIVISOR)) : WIDTH-1;
                verteilung[i]++;
                if (verteilung[i] > maximum_verteilung){
                        maximum_verteilung = verteilung[i];
                }
        }

        average /= MAX_DICE_ROLLS;

        printf("Mindestwuerfe: \t%i\nHöchstwuerfe: \t%i\nDurchschnittswuerfe: %i\t\n", min, max, average);

        int schrittweite = maximum_verteilung / 10;

        // Ausgabe der Verteilung
        for (int y = 10; y > 0; y--){
                printf("%6d | ", y * schrittweite);
                for (int x = 0; x < WIDTH; x++){
                        if (verteilung[x] - (y-1) * schrittweite > schrittweite){
                                printf("▓");
                                continue;
                        }
                        if (verteilung[x] - (y-1) * schrittweite < 0){
                                printf(" ");
                                continue;
                        }
                        printf("▒");
                }
                printf("\n");
        }
}