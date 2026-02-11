// AUTHOR: ELIAS NIEBERGALL
// DATUM: 10.02.2026

#define MAX_LINE_LENGTH 256

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct line_listelement line_listelement;

struct line_listelement {
        char line_content[MAX_LINE_LENGTH];
        int line_number;
        char *filename;
        struct line_listelement *next_element;
};

char this_filename[83];

void report_error_reading_file (char *filename) {
        fprintf(stderr, 
                "%s ran into an issue trying to open file %s (%s)",
                this_filename,
                filename,
                strerror(errno)
        );

        exit (EXIT_FAILURE);
}

void report_error_creating_malloc_space () {
        fprintf(stderr, 
                "%s ran into an issue creating space (%s)",
                this_filename,
                strerror(errno)
        );

        exit (EXIT_FAILURE);
}

line_listelement *heads[MAX_LINE_LENGTH] = {};
line_listelement *tails[MAX_LINE_LENGTH] = {};

line_listelement *create_line_listelement (char *line_content, char *file_name, int line_number) {
        line_listelement *pt_on_new_line_listelement = malloc(sizeof(line_listelement));

        if (!pt_on_new_line_listelement) report_error_creating_malloc_space();

        pt_on_new_line_listelement->filename = file_name;
        pt_on_new_line_listelement->line_number = line_number;
        strcpy(pt_on_new_line_listelement->line_content, line_content);
        pt_on_new_line_listelement->next_element = NULL;

        return pt_on_new_line_listelement;
}

void attach_line_listelement_to_correct_list (line_listelement *element) {
        int line_length = strlen(element->line_content);

        if (tails[line_length] != NULL) {
                tails[line_length]->next_element = element;
                tails[line_length] = element;
        } else {
                heads[line_length] = element;
                tails[line_length] = element;
        }
}

int main (int argc, char *argv[]){

        strcpy(this_filename, argv[0]);

        FILE *current_input_file;
        char current_line[MAX_LINE_LENGTH];

        char *current_file_name;
        int line_number = 0;

        for (int file_index = 1; file_index < argc; file_index++) {

                line_number = 0;

                current_file_name = argv[file_index];
                current_input_file = fopen(current_file_name, "r");

                // ERROR MANAGEMENT
                if (!current_input_file) report_error_reading_file(current_file_name);


                // READ FILE
                while (fgets(current_line, MAX_LINE_LENGTH, current_input_file)) {
                        line_number++;
                        line_listelement *pt_on_new_line_element = create_line_listelement(current_line, current_file_name, line_number);
                        attach_line_listelement_to_correct_list(pt_on_new_line_element);
                }
        }

        for (int position_in_heads_list = 0; position_in_heads_list < MAX_LINE_LENGTH; position_in_heads_list++) {
                for (
                        line_listelement *element = heads[position_in_heads_list]; 
                        element; 
                        element = element->next_element
                ) {
                        printf(
                                "%10s (%4i): %140s",
                                element->filename,
                                element->line_number,
                                element->line_content
                        );
                }
        }

        exit (EXIT_SUCCESS);
}
