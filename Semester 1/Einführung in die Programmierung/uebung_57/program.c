// AUTOR: ELIAS NIEBERGALL
// DATUM: 28.1.2026

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <limits.h>

char PATH[PATH_MAX];

int main (int argc, char *argv[]){
        if (argc == 1) {
                strcpy (PATH, ".");
        } else {
                strcpy (PATH, argv[1]);
        }

        DIR *directory = opendir(PATH);

        // Fehlerbehandlung Fall: couldn't open directory
        if (directory == NULL) {
                fprintf(stderr, "%s ran into an issue opening the directory: %s", argv[0], strerror(errno));
                exit(EXIT_FAILURE);
        }

        struct dirent *file_ref;
        struct stat file_metadata;

        char file_name[PATH_MAX];
        char *pointer_on_position_in_file_name;
        strcpy(file_name, PATH);
        strcat(file_name, "/");
        pointer_on_position_in_file_name = strchr(file_name, '\0');

        time_t opened_last;

        int problem_while_reading_file_metadata;

        while ((file_ref = readdir(directory)) != NULL)
         {
                // Write filename behind PATH
                strcpy(pointer_on_position_in_file_name, file_ref->d_name);

                problem_while_reading_file_metadata = stat(file_name, &file_metadata);

                if (problem_while_reading_file_metadata) {
                        fprintf(stderr, 
                                "%s ran into an issue reading information of file in the directory %s: %s",
                                argv[0], 
                                file_name,
                                strerror(errno));
                        exit(EXIT_FAILURE);
                }

                opened_last = file_metadata.st_mtime;
                
                printf("%c %i\t%s\t%s",
                        (S_ISREG(file_metadata.st_mode)) ? 'f' : ((S_ISDIR(file_metadata.st_mode)) ? 'd' : '?'),
                        file_metadata.st_size,
                        file_ref->d_name,
                        ctime(&opened_last)
                );
        }
        
        exit(EXIT_SUCCESS);
}