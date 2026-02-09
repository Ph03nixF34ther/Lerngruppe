// AUTOR: ELIAS NIEBERGALL
// DATUM: 2.2.2026

# define MAX_LINES 265
# define LINE_SIZE 265

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char *line_pointer_array [MAX_LINES] = {};
char short_line [LINE_SIZE] = {};

int string_compare_for_qsort(const void *element_a, const void *element_b) {
        const char **p_a = (const char **)element_a;
        const char **p_b = (const char **)element_b;
        return strcmp(*p_a, *p_b);
}

int main (int argc, char *argv[]) {
        char *pointer_on_new_line;
        int position_in_line_pointer_array = 0;

        // Open Inputfile
        FILE *input = (argc >= 2) ? fopen(argv[1], "r") : stdin;
        if (input == NULL) {
                fprintf(stderr, 
                        "%s ran into an error trying to open file: %s (%s)", 
                        argv[0], 
                        (argc >= 2) ? argv[1] : "stdin",
                        strerror(errno));
                exit(EXIT_FAILURE);
        }

        // Open Outputfile
        FILE *output = (argc >= 3) ? fopen(argv[2], "w") : stdout;
        if (input == NULL) {
                fprintf(stderr, 
                        "%s ran into an error trying to open file: %s (%s)", 
                        argv[0], 
                        (argc >= 3) ? argv[2] : "stdout",
                        strerror(errno));
                exit(EXIT_FAILURE);
        }

        do {
                
                if (fgets(short_line, LINE_SIZE, input) == NULL) break;

                pointer_on_new_line = strdup(short_line);

                line_pointer_array[position_in_line_pointer_array] = pointer_on_new_line;

                position_in_line_pointer_array++;
        } while (pointer_on_new_line);
        
        qsort(line_pointer_array, position_in_line_pointer_array, sizeof(pointer_on_new_line), string_compare_for_qsort);

        for (char **pointer_on_pointer_on_line = line_pointer_array; *pointer_on_pointer_on_line != NULL; pointer_on_pointer_on_line++) {
                fprintf(output, "%s", *pointer_on_pointer_on_line);
        }

        exit(EXIT_SUCCESS);
}