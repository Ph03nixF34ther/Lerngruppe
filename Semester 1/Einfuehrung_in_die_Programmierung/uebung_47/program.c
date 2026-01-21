// AUTOR: Elias Niebergall
// DATUM: 16.1.2026

#define MAX_CHARS_WRONG 7
#define MAX_WORD_LENGTH 32
#define NUMBER_OF_DIFFERENT_CHARS 26
#define NUMBER_OF_WORDS_IN_DB 30


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

char *wordlist[NUMBER_OF_WORDS_IN_DB] = {

    "wellensittichfutter",
    "geburtstagskuchen",
    "elefantenruessel",
    "kummerspeck",
    "fremdschaemen",
    "verschlimmbesserung",
    "leuchtturmwaerter",
    "gurtkenglasdeckel",
    "spinnenbeine",
    "roboterfernsteuerung",
    "hausdach",
    "backsteinmauer",
    "maschendrahtzaun",
    "haftpflichtversicherung",
    "streichholzschaechtelchen",

    "schattenboxen",
    "tiktoker",
    "einfaltspinsel",
    "galionsfigur",
    "portemonnaie",
    "quarzuhr",
    "xylophon",
    "dumpfbacke",
    "firlefanz",
    "gestruepp",
    "ziffer",
    "pfahl",
    "eichhörnchen",
    "quietscheentchen",
    "schlittschuh"

};

int chars_wrong = 0;

char secret_word[MAX_WORD_LENGTH] = "";
char known_word[MAX_WORD_LENGTH] = "";
int guessed_chars[NUMBER_OF_DIFFERENT_CHARS] = {};

void print_game_state () {
        system("clear");
        printf("\nSpielstand\n----------\nMaximale Anzahl falsch geratener Buchstaben: %i\nBisher falsch geratene Buchstaben: %i\nDas erratene Wort:  %s\n", 
                MAX_CHARS_WRONG, chars_wrong, known_word);
        for (int i = 0; i < NUMBER_OF_DIFFERENT_CHARS; i++) {
                if (!guessed_chars[i]) printf(" %c", (char)('a' + i));
        }
        printf("\n");
}

void handle_new_char(char input) {
        int input_as_ascii = tolower((int) input);
        if (!isalpha(input_as_ascii)) return;
        if (guessed_chars[input_as_ascii - 'a']) return;

        guessed_chars[input_as_ascii - 'a'] = 1;
        int char_was_in_secret_word = 0;

        for (int i = 0; i < MAX_WORD_LENGTH; i++){
                if (secret_word[i] == (char)input_as_ascii) {
                        char_was_in_secret_word = 1;
                        known_word[i] = secret_word[i];
                }
        }

        if (!char_was_in_secret_word) {
                chars_wrong++;
        }
}

int main () {
        srand(time(NULL));

        // Choose a random word as the secret word
        strcpy(secret_word, wordlist[rand() % NUMBER_OF_WORDS_IN_DB]);

        // Prepare the nonsecret word
        int char_index = 0;
        while (secret_word[char_index] != '\0') {
                known_word[char_index] = '_';
                char_index++;
        }
        known_word[char_index] = '\0';

        // Clear the guessed_char
        for (int i = 0; i < NUMBER_OF_DIFFERENT_CHARS; i++) {
                guessed_chars[i] = 0;
        }

        printf("%s %s %i %i", secret_word, known_word, chars_wrong < MAX_CHARS_WRONG, strcmp(secret_word, known_word));

        char guessed_char = ' ';
        while (chars_wrong < MAX_CHARS_WRONG && strcmp(secret_word, known_word)) {
                print_game_state();

                printf("Errate einen Buchstaben oder das ganze Wort: ");
                guessed_char = getchar();

                handle_new_char(guessed_char);
        }
        printf("\n");
        system("clear");

        if (chars_wrong >= MAX_CHARS_WRONG) {
                printf("\nDu hast verloren :(\n");
        } else {
                printf("\nDu hast gewonnen :)\n");
        }
}