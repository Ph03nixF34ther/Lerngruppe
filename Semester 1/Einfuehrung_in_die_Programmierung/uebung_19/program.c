#include <stdlib.h>
#include <stdio.h>

int kombinationen(int n, int k) {
        if (n == k) return 1;
        if (k <0) return 0;

        if (k > n) return 0;


        return kombinationen(n-1, k) + kombinationen(n-1, k-1);
}

int main (int argc, char** argv) {
        if (argc != 2) return 1;

        for (int n = 0; n <= atoi(argv[1]); n++) {
                for (int k = 0; k <= n; k++) {
                        printf("%i ", kombinationen(n, k));
                }
                printf("\n");
        }

        return 0;
}