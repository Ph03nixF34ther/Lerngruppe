// AUTOR: ELIAS NIEBERGALL
// DATUM: 6.2.2026

#include <stdio.h>
#include <stdlib.h>

unsigned rotiere_zahl(unsigned zu_rotierende_zahl) {
        return ((zu_rotierende_zahl & (1 << 31)) >> 31) | (zu_rotierende_zahl << 1);
}

int main (int argc, const char *argv[]) {
        // Ursprüngliche Aufgabe
        for (int i = 1; i < argc; ++i) {
                unsigned rotierende_zahl = atoi(argv[i]);
                for (int j = 0; j < sizeof(rotierende_zahl) * 8; ++j){
                        rotierende_zahl = rotiere_zahl(rotierende_zahl);
                        printf("%i", (rotierende_zahl & 1));

                        if (j%4 == 3) printf(" ");
                }
                printf("\n");
        }
        
        // Ausgabe als Hexzahl
        for (int i = 1; i < argc; ++i) {
                unsigned zahl = atoi(argv[i]);
                for (int j = 0; j < sizeof(zahl) * 2; ++j){
                        int letztes_byte = ((0xf << 28) & zahl) >> 28;
                        printf("%c", ((letztes_byte < 10) ? '0' : ('A' - 10)) + letztes_byte);
                        zahl <<= 4;
                }
                printf("\n");
        }
        
}