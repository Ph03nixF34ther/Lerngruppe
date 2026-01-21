#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strrepeat(char *dest, char c, int cnt) {
        for (char *pt = dest; pt < dest + cnt; pt++) {
                *pt = c;
        }
        return dest + cnt;
}

char *strtrim(char *dest, const char *src) {
        int length_of_srcstring = sizeof(src);
        int str_has_started = 0;
        int space_was_removed = 0;

        while (*src != '\0') {
                if (isspace((int)*src)) {
                        if (!space_was_removed && str_has_started) {
                                *dest = ' ';
                                dest++;
                        }
                        space_was_removed = 1;
                } else {
                        str_has_started = 1;
                        space_was_removed = 0;

                        *dest = *src;
                        dest++;
                }
                src++;
        }
        if (isspace((int)*(dest-1))) {
                *(dest-1) = '\0';
        } else {
                *(dest) = '\0';
        }
        return dest;
}

int main (int argc, char** argv) {
        char dest[100] = "";
        strtrim(dest, argv[1]);
        printf("%s", dest);
        return 0;
}