// Autor: Elias Niebergall
// Datum: 12.12.'25
// Uebung zu Quersummen

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
        if (argc != 2){
                printf("fehlerhafte eingabesyntax. eingabe erfordert 1 element des typen int\n");
                exit(EXIT_FAILURE);
        }

        int number = 0;
        number = abs(atoi(argv[1]));
        int quersumme = 0;

        do {
                while (number > 0){
                        quersumme += number % 10;
                        number = number / 10;
                }
                number = quersumme;
                quersumme = 0;
        } while (number > 9);

        printf("errechnete quersumme: %i\n", number);
}