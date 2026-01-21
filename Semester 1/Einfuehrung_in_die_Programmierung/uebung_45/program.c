#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int transform_to_int (char *string) {
        int is_first_char = 1;
        int negativity_factor = 1;
        int z = 0;

        while (*string != '\0') {
                if (is_first_char && *string == '-') {
                        negativity_factor = -1;
                } else if (isdigit((int)*string)) {
                        z *= 10;
                        z += (int)*string - '0';
                } else {
                        printf ("Fehler beim umwandeln des Zeichens '%c'\n", *string);
                        return z;
                }
                is_first_char = 0;
                string ++;
        }
        return negativity_factor * z;
}

int main (int argc, char** argv) {
        char dest[100] = "";
        printf("%i", transform_to_int(argv[1]));
        return 0;
}