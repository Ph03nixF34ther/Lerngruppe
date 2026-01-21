// AUTOR: Elias Niebergall
// DATUM: 16.1.2026

#define CODE_LAENGE 5
#define K 5

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>


int richtige = 0;
int halb_richtige = 0;

int min(int a, int b) {return ((a < b) ? a : b);}

int existiert_code(char *code_anfang) {
        return *code_anfang != '\0';
}

/**
 * @brief Gibt aus, wie viele Ziffern zwischen beiden Codes übereinstimmen
 * 
 * @param code1 
 * @param code2 
 * @return int 
 */
int berechne_anzahl_der_korrekten_ziffern (const char *code1, const char *code2) {
        int richtige_ziffern_ermittelt = 0;

        for (int i = 0; i < CODE_LAENGE; i++) {
                if (code1[i] == code2[i]) richtige_ziffern_ermittelt ++;
        }

        return richtige_ziffern_ermittelt;
}

/**
 * @brief Gibt aus, wie viele Ziffern in beiden codes vorkommen
 * 
 * @param code1 
 * @param code2 
 * @return int 
 */
int berechne_anzahl_der_halb_korrekten_ziffern (const char *code1, const char *code2) {
        int zahl_in_correct[K] = {0};
        int zahl_in_test[K] = {0};
        int halbrichtig_ermittelt = 0;

        for (int i = 0; i < K; i++) {
                zahl_in_correct[i] = 0;
                zahl_in_test[i] = 0;
        }

        for (int i = 0; i < CODE_LAENGE; i++) {
                zahl_in_correct [code1[i] - '1']++;
                zahl_in_test    [code2   [i] - '1']++;
        }

        for (int i = 0; i < K; i++) {
                halbrichtig_ermittelt += min(zahl_in_correct[i], zahl_in_test[i]);
        }
        return halbrichtig_ermittelt;
}

/**
 *  @brief Prüft richtige und halb richtige zwischen code1 und code2 nach Spielstandard und vergleicht diesen mit den gegebenen richtig und halb-richtig Werten.
 * @brief Gibt zurück, ob diese Kombinationen übereinstimmen
 * 
 * @param code1 
 * @param code2 
 * @param halb_richtig 
 * @param richtig 
 * @return sind_angegebenen_codes_kompatibel_mit_gegebenen_anzahlen 
 */
int sind_angegebenen_codes_kompatibel_mit_gegebenen_anzahlen (const char *code1, const char *code2, int halb_richtig, int richtig) {
        int richtig_ermittelt = berechne_anzahl_der_korrekten_ziffern (code1, code2);

        // Ist die Anzahl der korrekten Ziffern inkompatibel muss nicht weiter gesucht werden
        // -> das Ergebnis ist falsch!
        if (richtig_ermittelt != richtig) return 0;

        int halbrichtig_ermittelt = berechne_anzahl_der_halb_korrekten_ziffern(code1, code2);
        return (halbrichtig_ermittelt == halb_richtig);
}

/**
 * @brief Gib den gegebenen Code aus und frage den Nutzer nach einer Bewertung. Speichere diese Bewertung in globalen Variablen
 * 
 * @param code_anfang 
 */
void frage_nach_bewertung (char *code_anfang) {

        printf("Eingabe: \n");
                for (char *i = code_anfang; i < (code_anfang + CODE_LAENGE); i++) {
                        printf(" %c", *i);
        }

        char input1[10];
        char input2[10];


        // Frage nach Korrekten und inkorrekten Werten
        printf("\nAnzahl der vollständig korrekten Ziffern:              ");
        fgets(input1, sizeof(input1), stdin);
        printf(  "Anzahl der falsch platzierten, aber korrekten Ziffern: ");
        fgets(input2, sizeof(input2), stdin);
        
        // Transferiere den Input
        richtige = atoi(input1);
        halb_richtige = atoi(input2);
}

/**
 * @brief Sucht nach dem ersten existierenden Code. Gibt den Pointer auf diesen Code zurück
 * 
 * @param code_liste_anfang 
 * @param code_liste_ende 
 * @return char* 
 */
char *finde_existierenden_code_aus_code_liste (char *code_liste_anfang, char *code_liste_ende) {
        // Wähle den Pointer i so, dass er auf den ersten noch ezistierenden Code (von unten) zeigt
        char *pointer_auf_gewaehlten_code = code_liste_anfang;

        for (char       *pointer_auf_code_anfang = code_liste_anfang; 
                        pointer_auf_code_anfang < code_liste_ende; 
                        pointer_auf_code_anfang += CODE_LAENGE) {
        
                // Ist der Code nicht existent beginnt er mit '\n'
                if (existiert_code(pointer_auf_code_anfang)) {
                        // Wurde ein 
                        pointer_auf_gewaehlten_code = pointer_auf_code_anfang;
                        break;
                }
        }

        return pointer_auf_gewaehlten_code;
}


int main (int argc, char *argv[]) {
        int kombinationen_aus_n_und_k = pow(K, CODE_LAENGE);
        int geloest = 0;
        char code_liste_anfang[kombinationen_aus_n_und_k * CODE_LAENGE];
        char *code_liste_ende = code_liste_anfang + CODE_LAENGE * kombinationen_aus_n_und_k;
        char *pointer_auf_gewaehlten_code = code_liste_anfang;

        int versuche = 0;

        
        int kombinationswert = 0;
        for (int i = 0; i < kombinationen_aus_n_und_k; i++) {
                kombinationswert = i;
                for (int c = 0; c < CODE_LAENGE; c++) {
                        code_liste_anfang[i * CODE_LAENGE + c] = (char)('1' + kombinationswert % K);
                        kombinationswert /= K;
                }
        }
        
        while (!geloest) {

                versuche++;

                pointer_auf_gewaehlten_code = finde_existierenden_code_aus_code_liste(code_liste_anfang, code_liste_ende);

                // Ist kein Code mehr vorhanden: Beende
                // -> Passiert nur im Fehlerfall
                if (*pointer_auf_gewaehlten_code == '\0') break;

                frage_nach_bewertung(pointer_auf_gewaehlten_code);
                
                // Sieh, ob der Code gelöst wurde
                if (richtige == CODE_LAENGE) {
                        geloest = 1;
                        break;
                }
                
                // Beginne mit der Auswertung
                for (char       *pointer_auf_code_anfang = code_liste_anfang; 
                                pointer_auf_code_anfang < code_liste_ende;
                                pointer_auf_code_anfang+= CODE_LAENGE) {

                        if (    (existiert_code(pointer_auf_code_anfang)) && 
                                (pointer_auf_code_anfang != pointer_auf_gewaehlten_code)) {

                                // Stimmt die Auswertung der strs nicht mit der gegebenen Auswertung über ein
                                // wird der Anfang des Codes ersetzt und der Code damit ungültig
                                if (!sind_angegebenen_codes_kompatibel_mit_gegebenen_anzahlen
                                        (pointer_auf_code_anfang, pointer_auf_gewaehlten_code, halb_richtige, richtige)) {
                                        *pointer_auf_code_anfang = '\0';
                                }
                        }
                }

                *pointer_auf_gewaehlten_code = '\0';
        }

        // Ausgabe am Ende des Programms
        if (geloest) {
                printf("Ich habe den Code geknackt!\nDafuer habe ich %i Versuche gebraucht", versuche);
                return 0;
        } else {
                // Dieser Fall tritt nur ein, sollte es einen Fehler geben
                printf("Ich bin an deinem Code gescheitert. :(");
                return 1;
        }
}