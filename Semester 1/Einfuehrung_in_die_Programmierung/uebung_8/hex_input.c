// Autor: Elias Niebergall
// Datum: 12.12.'25
// Umwandlung von eingegebenen Hexzahlen zu dezimalzahlen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
        if (argc < 2){
                printf("fehlerhafte eingabesyntax. eingabe erfordert mindestens 2 element des typen int\n");
                exit(EXIT_FAILURE);
        }

        for (int i = 1; i < argc; i++){
                int number = 0;
                for (int j = 0; j < strlen(argv[i]); j++){
                        number *= 16;
                        if ('0' <= argv[i][j] && argv[i][j] <= '9') {
                                number += argv[i][j] - '0';
                        } 
                        if ('A' <= argv[i][j] && argv[i][j] <= 'F') {
                                number += argv[i][j] - 'A' + 10;
                        } 
                        if ('a' <= argv[i][j] && argv[i][j] <= 'f') {
                                number += argv[i][j] - 'a' + 10;
                        }
                }
                printf("umgewandelte hexzahl: %i\n", number);
        }
}