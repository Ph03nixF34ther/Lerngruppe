// AUTOR: ELIAS NIEBERGALL
// DATUM: 18.12.'25

#include <stdlib.h>
#include <stdio.h>
#include "sdlinterf.h"

#define WIDTH 800
#define HEIGHT 600

int main (int argc, char *argv[]) {
        sdlInit();

        double bild_mittelpunkt_x = atof((argv[1]));
        double bild_mittelpunkt_y = atof((argv[2]));

        double fixed_parameter_x = atof((argv[3]));
        double fixed_parameter_y = atof((argv[4]));

        int limit = atof(argv[5]);

        int julia_or_mandelbrot = atoi(argv[6]);

        double initial_zoom = atof(argv[7]);
        double factor = atof(argv[8]);
        double end_zoom = atof(argv[9]);


        double z_x = 0;
        double z_y = 0;

        double c_x = 0;
        double c_y = 0;

        double x_pwr = 0;
        double y_pwr = 0;

        for (double zoom = initial_zoom; zoom < end_zoom; zoom *= factor) {
                sdlSetBlack();

                for (int x = 0; x < WIDTH; x++ ) {
                        for (int y = 0; y < HEIGHT; y++ ) {
                                double x_math = bild_mittelpunkt_x + 4 * (x -  WIDTH/2) / (WIDTH * zoom);
                                double y_math = bild_mittelpunkt_y + 4 * (y - HEIGHT/2) / (WIDTH * zoom);

                                if (julia_or_mandelbrot) {      // Case: Mandelbrot
                                        c_x = x_math;
                                        c_y = y_math;

                                        z_x = fixed_parameter_x;
                                        z_y = fixed_parameter_y;
                                } else {                        // Case: Julia
                                        z_x = x_math;
                                        z_y = y_math;

                                        c_x = fixed_parameter_x;
                                        c_y = fixed_parameter_y;
                                }

                                int durchlaeufe = 0;
                                while (z_x*z_x + z_y*z_y < 4 && durchlaeufe < limit) {
                                        durchlaeufe++;

                                        x_pwr = (z_x * z_x) - (z_y * z_y);
                                        y_pwr = 2 * z_x * z_y;

                                        z_x = x_pwr + c_x;
                                        z_y = y_pwr + c_y;
                                }

                                if (durchlaeufe < limit) sdlDrawCyclicPoint(x, y, durchlaeufe);
                        }
                }

                sdlUpdate();
        }

        exit(EXIT_SUCCESS);
}