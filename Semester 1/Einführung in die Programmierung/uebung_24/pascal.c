// AUTOR: ELIAS NIEBERGALL
// DATUM: 19.12.'25

#include <stdio.h>
#include <stdlib.h>

int binomialcoefficient (int options, int draws) {
        int produkt_a = 1;
        int produkt_b = 1;

        for (int i = 1; i <= draws; i++) {
                produkt_a *= (options-i+1);
                produkt_b *= i;
        }

        return produkt_a / produkt_b;
}

void print_layer_in_pascal_triangle(int layer_index) {
        for (int i = 0; i <= layer_index; i++) {
                printf("%d ", binomialcoefficient(layer_index, (i < layer_index/2) ? i : layer_index - i));
        }
        printf("\n");
}

int main (int argc, char *argv[]) {

        // Kontrolle, ob es eine falsche Eingabe gab
        if (argc != 2) {
                fprintf(stderr, "Please enter the size of the triangle; ./program [size]");
                exit(EXIT_FAILURE);
        }

        int number_of_layers = atoi(argv[1]);

        if (number_of_layers < 1) {
                fprintf(stderr, "Please enter a size, that is an int bigger than 1");
                exit(EXIT_FAILURE);
        }

        for (int i = 0; i < number_of_layers; i++) {
                print_layer_in_pascal_triangle(i);
        }

        return 0;
}