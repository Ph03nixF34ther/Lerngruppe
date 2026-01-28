// AUTOR: ELIAS NIEBERGALL
// DATUM: 28.1.2026

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct fraction
{
        int numerator;
        int denominator;
};


struct fraction add_two_fractions (struct fraction fraction1, struct fraction fraction2) {
        struct fraction fraction_result = {
                fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator,
                fraction1.denominator * fraction2.denominator
        };

        return fraction_result;
}

struct fraction subtract_two_fractions (struct fraction fraction1, struct fraction fraction2) {
        struct fraction fraction_result = {
                fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator,
                fraction1.denominator * fraction2.denominator
        };

        return fraction_result;
}


struct fraction multiply_two_fractions (struct fraction fraction1, struct fraction fraction2) {
        struct fraction fraction_result = {
                fraction1.numerator * fraction2.numerator,
                fraction1.denominator * fraction2.denominator
        };

        return fraction_result;
}
struct fraction divide_two_fractions (struct fraction fraction1, struct fraction fraction2) {
        struct fraction fraction_result = {
                fraction1.numerator * fraction2.denominator,
                fraction1.denominator * fraction2.numerator
        };

        return fraction_result;
}

struct fraction transform_string_to_fraction (const char *string){
        int numerator = atoi(string);
        const char *string_after_backslash = strchr(string, '/');
        int denominator = (string_after_backslash == NULL) ? 1 : atoi(string_after_backslash+1);

        struct fraction return_fraction = {
                numerator,
                denominator
        };
        return return_fraction;
        
}

void print_fraction(struct fraction fraction_to_print) {
        printf (
                "%i / %i\napprox = %f\n",
                fraction_to_print.numerator,
                fraction_to_print.denominator,
                (double)fraction_to_print.numerator / fraction_to_print.denominator
        );
}

int ggT(int a, int b) {
        a = abs(a);
        b = abs(b);

        if (a == 0) {
                return b;
        }
        while (b != 0) {
                if (a > b) {
                        a -= b;
                } else {
                        b -= a;
                }
        }
        return a;
}

struct fraction shorten_fraction (struct fraction fraction_to_shorten){
        int value_to_shorten_with = ggT(fraction_to_shorten.numerator, fraction_to_shorten.denominator);
        struct fraction fraction_result = {
                fraction_to_shorten.numerator / value_to_shorten_with,
                fraction_to_shorten.denominator / value_to_shorten_with
        };

        return fraction_result;
}

int main (int argc, char *argv[]){
        if (argc != 4) {
                fprintf(stderr, "%s falscher Funktionsaufruf: %s z1/n1 (operator) z2/n2\n", argv[0], argv[0]);
                exit(EXIT_FAILURE);
        }

        struct fraction fraction1 = transform_string_to_fraction(argv[1]);
        struct fraction fraction2 = transform_string_to_fraction(argv[3]);

        switch (*argv[2])
        {
        case '+':
                print_fraction(shorten_fraction(add_two_fractions(fraction1, fraction2)));
                break;
        case '-':
                print_fraction(shorten_fraction(subtract_two_fractions(fraction1, fraction2)));
                break;
        case '*':
                print_fraction(shorten_fraction(multiply_two_fractions(fraction1, fraction2)));
                break;
        case '/':
                print_fraction(shorten_fraction(divide_two_fractions(fraction1, fraction2)));
                break;
        
        default:
                fprintf(stderr, "%s: Gib bitte einen gültigen Operator ein (+, -, *, /)", argv[0]);
                exit(EXIT_FAILURE);
        }

        exit(EXIT_SUCCESS);
}