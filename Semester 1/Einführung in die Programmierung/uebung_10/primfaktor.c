// Autor: Elias Niebergall
// Datum: 12.12.'25
// Ermittelt die Primfaktorzerlegung einer gegebenen Zahl

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
        if (argc != 2){
                printf("fehlerhafte eingabesyntax. eingabe erfordert mindestens 2 element des typen int\n");
                exit(EXIT_FAILURE);
        }
        
        int number = abs(atoi(argv[1]));
        int faktor = 2;
        int haeufigkeit_faktor = 0;

        printf("Primfaktorzerlegung: 1");

        if (number == 1 || number == 0) {
                printf("%i\n", number);
        }

        while (number != 1) {
                if (number % faktor == 0) {
                        haeufigkeit_faktor++;
                        number /= faktor;
                } else {
                        if (haeufigkeit_faktor > 0) {
                                printf(((haeufigkeit_faktor == 1) ? " * %i": " * %i^%i"), faktor, haeufigkeit_faktor);
                                haeufigkeit_faktor = 0;
                        }
                        faktor++;
                }
        }
        printf(" * %i^%i", faktor, haeufigkeit_faktor);
        printf("\n");
}