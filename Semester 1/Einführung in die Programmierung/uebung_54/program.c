// DATUM: 21.1.2026
// AUTOR: Elias Niebergall

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

char name_of_program_file[83];

char name_of_input_file[83];
char name_of_output_file[83];

FILE *output_file;
FILE *input_file;

char current_line_out_of_input[256];
char *current_position_in_line;

/**
 * @brief Schreibt den gegebenen Textabschnitt in das output_file (globale variable). 
 * @brief entweder, bis der pointer an der Endemarkierung angekommen ist, oder bis der str zuende ist.
 * 
 * @param start_pointer 
 * @param end_pointer 
 * @return pointer_where_function_stopped
 */
const char *write_given_area_to_outputfile(const char *start_pointer, const char *end_pointer) {
        if (output_file == NULL) {
                fprintf(stderr, "Error %s: There is an issue with the given outputfile %s!", name_of_program_file, name_of_output_file);
                exit(EXIT_FAILURE);
        }
        for (const char *pointer_at_print_position = start_pointer; pointer_at_print_position != end_pointer; pointer_at_print_position++) {

                if (*pointer_at_print_position == '\0' || *pointer_at_print_position == EOF) return pointer_at_print_position;

                putc(*pointer_at_print_position, output_file);
        }
        return end_pointer;
}

void check_if_given_input_and_output_file_are_available () {
        int has_failure = 0;
        fprintf("%s\n", strerror(errno));
        if (input_file == NULL) {
                fprintf(stderr, "Error %s: Input file %s is not available.\n", name_of_program_file, name_of_input_file);
                has_failure = 1;
        }
        if (output_file == NULL) {
                fprintf(stderr, "Error %s: Output file %s is not available.\n", name_of_program_file, name_of_output_file);
                has_failure = 1;
        }
        
        if (has_failure) exit(EXIT_FAILURE);
}

int main (int argc, char *argv[]) {
        
        // Prüfe auf korrekten Aufruf
        if (argc < 3 || argc > 5) {
                fprintf(stderr, "%s fehlerhafter Aufruf!\nKorrekte Syntax: %s word replacement [file-in [file-out]]\n", argv[0], argv[0]);
                exit(EXIT_FAILURE);
        }

        strcpy(name_of_program_file, argv[0]);
        
        // Declare the files
        if (argc >= 4) {
                strcpy(name_of_input_file, argv[3]);
                input_file = fopen(name_of_input_file, "r");

        } else {
                strcpy(name_of_input_file, "stdin");
                input_file = stdin;
        }

        if (argc == 5) {
                strcpy(name_of_output_file, argv[4]);
                output_file = fopen(name_of_output_file, "w");
        } else {
                strcpy(name_of_output_file, "stdout");
                output_file = stdout;
        }
        
        check_if_given_input_and_output_file_are_available();

        while (fgets(current_line_out_of_input, 83, input_file) != NULL) {

                current_position_in_line = current_line_out_of_input;
                char *position_of_word = strstr(current_position_in_line, argv[1]);

                while (position_of_word != NULL) {
                        write_given_area_to_outputfile(current_position_in_line, position_of_word);
                        fputs(argv[2], output_file);
                        current_position_in_line = position_of_word + strlen(argv[1]);
                        position_of_word = strstr(current_position_in_line, argv[1]);
                }

                fputs(current_position_in_line, output_file);
        }
}