// Autor: Elias Niebergall
// Datum: 12.12.'25
// Ermitteln des minima und maxima der eingegebenen Zahlen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
        if (argc < 1){
                printf("fehlerhafte eingabesyntax. eingabe erfordert mindestens 2 element des typen int\n");
                exit(EXIT_FAILURE);
        }
        int min = atoi(argv[1]);
        int max = atoi(argv[1]);
        
        for (int i = 1; i < argc; i++) {
                if (min > atoi(argv[i])){
                        min = atoi(argv[i]);
                }
                if (max < atoi(argv[i])){
                        max = atoi(argv[i]);
                }
        }

        printf("kleinste zahl: %i \ngroesste zahl: %i\n", min, max);
}