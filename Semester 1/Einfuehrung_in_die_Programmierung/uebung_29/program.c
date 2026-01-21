#include <stdlib.h>
#include <stdio.h>

int j = 0;

int kombinationen(int n, int k) {
        j++;

        if (n == k) return 1;
        if (k == 0) return 1;
        if (k < 0) return 0;

        if (k > n) return 0;

        return kombinationen(n-1, k) + kombinationen(n-1, k-1);
}

int main (int argc, char** argv) {
        if (argc != 3) return 1;

        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        

        printf("das ergebnis ist %i. es wurden %i aufrufe gestartet\n", kombinationen(a, b), j);

        return 0;
}