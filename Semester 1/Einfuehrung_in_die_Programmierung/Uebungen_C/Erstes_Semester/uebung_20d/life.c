// AUTOR: ELIAS NIEBERGALL
// DATUM: 17.12.'25

#define WIDTH 800
#define HEIGHT 600

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int this_generation[WIDTH][HEIGHT];
int next_generation[WIDTH][HEIGHT];


#include "sdlinterf.h"

int main (int argc, char *argv[]) {
        srand(time(NULL));
        sdlInit();

        sdlSetBlack();

        int n = atoi(argv[1]);

        for (int x = 0; x < WIDTH; x++) {
                for (int y = 0; y < HEIGHT; y++) {
                        this_generation[x][y] = rand()%2;
                        next_generation[x][y] = 0;
                } 
        }

        int frame = 0;

        while (1) {
                // # ################################################################ # //
                // #                  Naechste Generation generieren                  # //
                // # ################################################################ # //

                sdlSetBlack();

                for (int x = 0; x < WIDTH; x++) {
                        for (int y = 0; y < HEIGHT; y++) {
                                // Calculate the number of relevant living cells around the target cell
                                int living_cells_around = 0;
                                for (int x_mod = -1; x_mod <= 1; x_mod++) {
                                        for (int y_mod = -1; y_mod <= 1; y_mod++) {
                                                if (x_mod == 0 && y_mod == 0) continue;
                                                living_cells_around += (
                                                        (0 <= x + x_mod && x + x_mod < WIDTH) && 
                                                        (0 <= y + y_mod && y + y_mod < HEIGHT)) 
                                                        ? this_generation[x + x_mod][y + y_mod] : 0;
                                        }               
                                }

                                next_generation[x][y] = (((n != 0) ? rand()%n : 1) == 0) ? 1 : 0;

                                if (this_generation[x][y] == 0 && living_cells_around == 3) {
                                        next_generation[x][y] =  1;
                                }

                                if (this_generation[x][y] == 1 && living_cells_around < 4 && 1 < living_cells_around) {
                                        next_generation[x][y] =  1;
                                }
                                
                                if (next_generation[x][y]) {

                                        int t = frame % 768;

                                        int r, g, b;

                                        if (t < 256) {
                                                r = 255 - t;
                                                g = t;
                                                b = 0;
                                        } else if (t < 512) {
                                                r = 0;
                                                g = 511 - t;
                                                b = t - 256;
                                        } else {
                                                r = t - 512;
                                                g = 0;
                                                b = 767 - t;
                                        }
                                        sdlDrawPoint(x, y, 255-r, 255-g, 255-b);
                                }
                        } 
                }

                for (int x = 0; x < WIDTH; x++) {
                        for (int y = 0; y < HEIGHT; y++) {
                                this_generation[x][y] = next_generation[x][y];
                        }
                }

                frame ++;
                sdlUpdate();
                sdlMilliSleep(50);

        }
        

        exit(EXIT_SUCCESS);
}