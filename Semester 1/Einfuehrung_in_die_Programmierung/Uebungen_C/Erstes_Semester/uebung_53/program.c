// DATUM: 21.1.2026
// AUTOR: Elias Niebergall

#define MAX_KLAMMERTIEFE 32

#include <stdio.h>
#include <stdlib.h>

int klammer_stack[MAX_KLAMMERTIEFE];
int klammer_tiefe_position = -1;
int line = 1;

int is_open_bracket (char c) {
        switch (c)
        {
        case '(': return 1;
        case '[': return 2;
        case '{': return 3;
        default: return 0;
        }
}

int is_close_bracket (char c) {
        switch (c)
        {
        case ')': return 1;
        case ']': return 2;
        case '}': return 3;
        default: return 0;
        }
}

char char_from_bracket_no (int bracket_no) {
        switch (bracket_no)
        {
        case 1: return ')';
        case 2: return ']';
        case 3: return '}';
        default: return' ';
        }
}

void print_success () {
        printf("Das File ist korrekt geklammert!\n");
}
void print_failure (char fehler, char intended) {
        printf("Das File ist inkorrekt geklammert.\nFehlerhafte '%c' in Zeile %i. '%c' erwartet.\n", fehler, line, intended);
}


int main (int argc, char *argv[]) {
        
        // Prüfe auf korrekten Aufruf
        if (argc != 2) {
                fprintf(stderr, "%s fehlerhafter Aufruf: %s filename\n", argv[0], argv[0]);
                exit(EXIT_FAILURE);
        }
        
        // Öffne die Datei
        FILE *file = fopen(argv[1], "r");
        
        // Prüfe, ob die Datei existiert
        if (file == NULL) {
                fprintf(stderr, "%s: File konnte nicht gelesen werde\n", argv[0]);
                exit(EXIT_FAILURE);
        }
        
        char character_from_file = fgetc(file);

        while (character_from_file != EOF)
        {
                if (is_open_bracket(character_from_file)) {
                        klammer_tiefe_position ++;

                        // Errorhandling, if stack is not deep enough
                        if (klammer_tiefe_position >= MAX_KLAMMERTIEFE) {
                                fprintf(stderr, "%s: Maximale Klammertiefe erreicht! Auswertung nicht möglich\n", argv[1]);
                                exit(EXIT_FAILURE);
                        }

                        klammer_stack[klammer_tiefe_position] = is_open_bracket(character_from_file);

                } else if (is_close_bracket(character_from_file)) {
                        // ist die Position der Klammern bei -1 würde ein Stackzugriff zu einem Fehler führen
                        if (    klammer_tiefe_position < 0){
                                printf("In Zeile %i wurden Klammern geschlossen, welche nie anfingen.\n", line);
                                exit(EXIT_SUCCESS);
                        }
                        if (klammer_stack[klammer_tiefe_position] != is_close_bracket(character_from_file)) {
                                print_failure(character_from_file, char_from_bracket_no(klammer_stack[klammer_tiefe_position]));
                                exit(EXIT_SUCCESS);
                        } else {
                                klammer_tiefe_position--;
                        }
                } else if (character_from_file == '\n') {
                        line++;
                }
                character_from_file = fgetc(file);
        }
        
        if (klammer_tiefe_position == -1){
                print_success();
                exit(EXIT_SUCCESS);
        } else {
                printf("Am Ende des Files wurde(n) %i Klammern nicht geschlossen!", klammer_tiefe_position+1);
                exit(EXIT_SUCCESS);
        }

}