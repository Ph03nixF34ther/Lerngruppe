// AUTOR: ELIAS NIEBERGALL
// DATUM: 2.2.2026

# define MAX_LINES 265
# define LINE_SIZE 265

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *line_pointer_array [MAX_LINES] = {};

int string_compare_for_qsort(const void *element_a, const void *element_b) {
        if (!element_a) {
                return 0;
        } else if (!element_b) {
                return 1;
        } else {
                
        }
}

int main (int argc, char *argv[]) {
        char *pointer_on_new_line;
        int position_in_line_pointer_array = 0;

        do {
                pointer_on_new_line = malloc(LINE_SIZE);
                fgets(pointer_on_new_line, LINE_SIZE, stdin);

                line_pointer_array[position_in_line_pointer_array] = pointer_on_new_line;
        } while (pointer_on_new_line);
        
        qsort(line_pointer_array, MAX_LINES, sizeof(pointer_on_new_line), string_compare_for_qsort);

        for (char *pointer_on_line = line_pointer_array; pointer_on_line; pointer_on_line++) {
                fprintf(stdout, "%s", pointer_on_line);
        }
}