// AUTOR: ELIAS NIEBERGALL
// DATUM: 26.1.2026

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
        if (argc != 4) {
                fprintf(stderr, "%s: %s day month year", argv[0], argv[0]);
                exit(EXIT_FAILURE);
        } 

        int day_of_the_year     = atoi(argv[1]);
        int month               = atoi(argv[2]);
        int year                = atoi(argv[3]);

        if (day_of_the_year > 0, )

        time_t now = time(NULL);
        struct tm hallo = {
                .tm_mon = atoi(argv[2]) - 1,
                .tm_mday = atoi(argv[1]),
                .tm_year = atoi(argv[3]) - 1900
        };
        return 0;
}