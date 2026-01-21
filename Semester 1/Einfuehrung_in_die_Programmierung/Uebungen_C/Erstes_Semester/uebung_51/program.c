// AUTOR: Elias Niebergall
// DATUM: 16.1.2026

#define N 5
#define K 5

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>

int min(int a, int b) {return (a < b) ? a : b;}

int correct_keys (const char *correct, const char *test, int halb_richtig, int richtig) {
        int richtig_ermittelt = 0;

        for (int i = 0; i < N; i++) {
                if (correct[i] == test[i]) richtig_ermittelt ++;
        }

        if (!(richtig_ermittelt == richtig)) return 0;

        int zahl_in_correct[K] = {0};
        int zahl_in_test[K] = {0};
        int halb_richtig_ermittelt = 0;

        for (int i = 0; i < N; i++) {
                if (correct[i] != test[i]) {
                        zahl_in_correct [correct[i] - '1']++;
                        zahl_in_test    [test   [i] - '1']++;
                }
        }

        for (int i = 0; i < K; i++) {
                halb_richtig_ermittelt += min(zahl_in_correct[i], zahl_in_test[i]);
        }
        return (halb_richtig_ermittelt == halb_richtig);
}

int main (int argc, char *argv[]) {
        int kombinationen_aus_n_und_k = pow(K, N);
        int geloest = 0;
        char Moeglichkeiten[kombinationen_aus_n_und_k * N];
        char *gewaehlt = Moeglichkeiten;
        char input1[10];
        char input2[10];
        int richtige = 0;
        int halb_richtige = 0;

        int kombinationswert = 0;
        for (int i = 0; i < kombinationen_aus_n_und_k; i++) {
                kombinationswert = i;
                for (int c = 0; c < N; c++) {
                        Moeglichkeiten[i * N + c] = (char)('1' + kombinationswert % K);
                        kombinationswert /= K;
                }
        }

        while (!geloest) {
                for (char *i = Moeglichkeiten; i < Moeglichkeiten + N * kombinationen_aus_n_und_k; i+= N) {
                        if (*i != '\0') {
                                gewaehlt = i;
                                break;
                        }
                }
                if (*gewaehlt == '\0') break;

                printf("Eingabe: \n");
                for (char *i = gewaehlt; i < (gewaehlt + N); i++) {
                        printf(" %c", *i);
                }
                printf("\nCorrect values: ");
                fgets(input1, sizeof(input1), stdin);
                printf("Half-correct values: ");
                fgets(input2, sizeof(input2), stdin);

                richtige = atoi(input1);
                halb_richtige = atoi(input2);

                if (richtige == N) {
                        geloest = 1;
                        break;
                }
                
                for (int i = 0; i < kombinationen_aus_n_und_k; i++) {
                        if ((Moeglichkeiten[i * N] != '\0') && (Moeglichkeiten + i * N != gewaehlt)) {
                                if (!correct_keys(gewaehlt, Moeglichkeiten + i * N, halb_richtige, richtige)) {
                                        Moeglichkeiten[i * N] = '\0';
                                }
                        }
                }
                *gewaehlt = '\0';
        }
}