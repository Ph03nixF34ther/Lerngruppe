
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {


        // Eingabe überprüfen && Variablen angeben
        //---------------------------------------------------------------------------//

        // Eingabesyntax überprüfen
        if (argc != 2) {
                printf("fehlerhafte eingabesyntax\n");
                exit(EXIT_FAILURE);
        }

        // Variablen anlagen und auslesen
        double value = atof(argv[1]);
        double target_square_value = value;

        double error = 0;

        // Eingabesemantik überprüfen
        if (value <= 0) {
                printf("fehlerhafte eingabesemantik\n");
                exit(EXIT_FAILURE);
        }


        // Schleife zur aproximation der Wurzel
        //---------------------------------------------------------------------------//

        do {
                // Fehleraproximation
                error = value * value - target_square_value;

                // Reevaluation des Ergebnisses
                value = (value + target_square_value / (value)) / 2;

        } while (fabs(error) > 1e-10);
        
        printf("%g\n", value);
}