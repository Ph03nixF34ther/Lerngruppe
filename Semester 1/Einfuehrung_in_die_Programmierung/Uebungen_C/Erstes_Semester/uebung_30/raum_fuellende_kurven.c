// AUTOR: ELIAS NIEBERGALL
// DATUM: 17.12.'25

#define WIDTH 800
#define HEIGHT 600

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "sdlinterf.h"

char *rl_hilbert = "+LS-RSR-SL+";
char *lr_hilbert = "-RS+LSL+SR-";
int hilbert_length = 11;

int curve = 0;
int max_depth = 0;
int step_length = 0;

int x = 0;
int y = 0;

int rotation = 2;

void rec_function (int depth, char *command, int command_length) {
        int x_alt = 0;
        int y_alt = 0;

        if (depth <= 0) return;
        for (int i = 0; i < command_length; i++) {
                switch (command[i])
                {
                case 'R':
                        rec_function(depth-1,
                                ((curve == 1) ? rl_hilbert : NULL), 
                                ((curve == 1) ? hilbert_length : 0));
                        break;
                case 'L':
                        rec_function(depth-1, 
                                ((curve == 1) ? lr_hilbert : NULL), 
                                ((curve == 1) ? hilbert_length : 0));
                        break;
                case 'S':
                        x_alt = x;
                        y_alt = y;
                        if (rotation == 1 || rotation == 3) x += ((rotation == 1) ? 1 : -1) * step_length;
                        if (rotation == 2 || rotation == 0) y += ((rotation == 1) ? 1 : -1) * step_length;

                        sdlDrawLine(x_alt, y_alt, x, y, 255, 128, 255);
                        break;

                case '+':
                        rotation = (3 + rotation) % 4;
                        break;
                case '-':
                        rotation = (1 + rotation) % 4;
                        break;
                
                default:
                        break;
                }
        }
}

int main (int argc, char *argv[]) {

        if (argc != 3) {
                printf("Mehr Argumente erforderlich");
                return -1;
        }

        curve = atoi(argv[1]);
        if (curve != 1) {
                printf("Bitte gib eine existierende Kurve als Kurventyp an: \n 1 = Hilbertkurve");
                return -1;
        }

        max_depth = atoi(argv[2]);

        // Berechne schritt = Länge eines Teilstriches
        // Entspricht kürzerer Fenster-Seite pro Rekursionsebene ein mal halbiert 
        int seite = ((SDL_X_SIZE >= SDL_Y_SIZE) ? SDL_Y_SIZE : SDL_X_SIZE) - 1;
        int potenz = pow(2, max_depth);
        step_length = seite / potenz;
        if (step_length == 0) {
                fprintf(stderr, "%s: Rekursionstiefe ist zu hoch!\n", argv[0]);
                exit(EXIT_FAILURE);
        }


        x = (SDL_X_SIZE - seite) / 2;
        y = (SDL_Y_SIZE - seite) / 2;

        rec_function(max_depth, "L", 1);

        srand(time(NULL));
        sdlInit();

        sdlSetBlack();

        sdlUpdate();
        sdlMilliSleep(1500);

        

        exit(EXIT_SUCCESS);
}