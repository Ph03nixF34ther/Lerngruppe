#include <stdlib.h>
#include <stdio.h>

void print_rec(int number) {
        if (number >= 10) print_rec(number/10);
        printf("%i", number%10);
}

int main (int argc, char** argv) {
        if (argc != 2) return 1;

        print_rec(atoi(argv[1]));

        return 0;
}