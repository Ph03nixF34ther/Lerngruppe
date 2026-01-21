#include <stdlib.h>
#include <stdio.h>

double potenz(int a, int b) {

        if (b == 0)     return (a != 0) ? 1 : 0;

        if (b < 0)      return 1 / potenz(a, -b);
        
        if (b % 2 == 0) return potenz(a * a, b/2);

        if (b % 2 == 1) return potenz(a, b-1) * a;

        return 0;
}

int main (int argc, char** argv) {
        if (argc != 3) return 1;

        printf("%f", potenz(atoi(argv[1]), atoi(argv[2])));

        return 0;
}