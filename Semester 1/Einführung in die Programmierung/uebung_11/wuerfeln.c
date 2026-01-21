// Autor: Elias Niebergall
// Datum: 12.12.'25
// Wuerfeln

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {

        srand(time(NULL));
        
        int random_number = 0;
        int wuerfe = 0;
        int six = 0;

        while (six  != 2) {
                wuerfe += 1;
                random_number = rand()%6 + 1;
                if (random_number == 6) {
                        six += 1;
                } else {
                        six = 0;
                }
                printf("%i. Wurf war eine: %i\n", wuerfe, random_number);
        }
}