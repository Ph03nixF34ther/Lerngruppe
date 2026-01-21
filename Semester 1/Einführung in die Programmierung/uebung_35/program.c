// AUTOR: ELIAS NIEBERGALL
// DATUM: 14.1.'26

#define WIDTH 600
#define HEIGHT 600
#define TIMES_SHUFFEL 7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "sdlinterf.h"

int total_compares_made = 0;
int total_changes_made  = 0;

int *array[WIDTH] = {};

void initialize_array_randomly () {
        srand(time(NULL));
        int index_1 = 0;
        int index_2 = 0;

        // initializing the array with ascending numbers
        for (int i = 0; i < WIDTH; i++) {
                array[i] = i;
        }

        // make some modifications by shuffeling the array
        for (int t = 0; t < WIDTH * TIMES_SHUFFEL; t++) {
                index_1 = rand() % WIDTH;
                index_2 = rand() % WIDTH;

                *array[index_1] += *array[index_2];
                *array[index_2] = *array[index_1] - *array[index_2];
                *array[index_1] -= *array[index_2];
        }
} 

void draw_array_with_value_as_height() {
        sdlSetBlack();
        
        for (int i = 0; i < WIDTH; i++) {
                sdlDrawPoint(i, *array[i], 0, 255, 0);
        }
}


void bubblesort () {
        int finished_sorting = 0;

        do {
                for (int i = 0; i < )

        } while (!finished_sorting);
}

int main(int argc, char *argv[]) {
        if (argc != 2) {
                printf("Please enter 2 arguments: [filename] [type of algorithm]");
        }

        sdlInit();
}