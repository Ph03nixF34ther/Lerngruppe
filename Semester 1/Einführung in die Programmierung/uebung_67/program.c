#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

uint hexdigit(uint z, uint n) {
        int k = 7;

        while ((((z & (0xf << k * 4)) >> k * 4)) == 0) {
                k--;
        }

        if ((int)(k - n + 1) <= 0) return -1;
        return ((z & (0xf << (k - n + 1) * 4)) >> (k - n + 1) * 4);
}

int main (int argc, char *argv[]) {
        uint z = atoi(argv[1]);
        uint n = atoi(argv[2]);

        printf("%08X\n%08X\nErgebnis: %i\n", z, hexdigit(z, n), hexdigit(z, n));
}