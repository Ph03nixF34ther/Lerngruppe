// AUTHOR: ELIAS NIEBERGALL
// DATE: 10.02.2026

#include <stdio.h>
#include <stdlib.h>

typedef unsigned int binary_number;

int small_to_big_endian (binary_number small_endian, int binary_size) {
        binary_number big_endian = 0;

        for (int i = 0; i < binary_size/2; i++) {
                big_endian = big_endian |
                        ((small_endian & (0xff << i*8)) << 8 * (binary_size - 2*i - 1)) |
                        ((small_endian & (0xff << (binary_size - i - 1) * 8)) >> 8 * (binary_size - 2*i - 1));
        }

        return big_endian;
}

int main (int argc, char *argv[]) {
        if (argc != 2) {
                printf("Fehlerhafter Funktionsaufruf: %s [number]", argv[0]);
        }

        binary_number small_endian = atoi(argv[1]);
        binary_number big_endian = small_to_big_endian(small_endian,4);

        printf("Small Endian: %08X\nBig Endian:   %08X\n", small_endian, big_endian);
}