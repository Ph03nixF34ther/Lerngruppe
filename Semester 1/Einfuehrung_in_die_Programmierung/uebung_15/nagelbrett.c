// AUTOR: ELIAS NIEBERGALL
// DATUM: 17.12.'25

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
        if (argc != 3) {
                printf("Nicht die korrekte Anzahl an Eingabeargumenten");
                exit(EXIT_FAILURE);
        }

        int k = abs(atoi(argv[2]));
        int r = abs(atoi(argv[1]));

        int out[r+1];

        for (int i = 0; i < r+1; i++) {
                out[i] = 0;
        }

        for (int i = 0; i < k; i++) {
                int position = 0;
                for (int j = 0; j < r; j++){
                        position += rand() % 2;
                }
                out[position]++;
        }

        for (int i = 0; i < r+1; i++) {
                printf("%d \t", out[i]);
        }

        exit(EXIT_SUCCESS);
}