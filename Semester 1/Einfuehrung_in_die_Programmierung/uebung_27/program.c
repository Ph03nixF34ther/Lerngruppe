#include <stdlib.h>
#include <stdio.h>

void prim_rec(int n, int p) {
        if (n == 1) return;

        int number = 0;
        while (n%p == 0) {
                number++;
                n /= p;
        }

        if (number != 0) {
                printf(" * %i^%i", p, number);
        }

        prim_rec(n, p+1);
}

int main (int argc, char** argv) {
        if (argc != 2) return 1;

        printf("%s = 1", argv[1]);
        prim_rec(atoi(argv[1]), 2);

        return 0;
}