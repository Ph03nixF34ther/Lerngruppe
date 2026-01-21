// AUTOR: ELIAS NIEBERGALL
// DATUM: 18.12.'25

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* MergeSort (int* list, int SIZE_OF_LIST) {

        if (SIZE_OF_LIST == 1 || SIZE_OF_LIST == 0) {
                return list;
        }

        int SIZE_OF_LIST_A = SIZE_OF_LIST / 2 + SIZE_OF_LIST %2;
        int SIZE_OF_LIST_B = SIZE_OF_LIST / 2;

        int unsorted_list_a [SIZE_OF_LIST_A];
        int unsorted_list_b [SIZE_OF_LIST_B];

        for (int i = 0; i < SIZE_OF_LIST_A; i++) {
                unsorted_list_a[i] = list[i];
        }

        for (int i = 0; i < SIZE_OF_LIST_B; i++) {
                unsorted_list_b[i] = list[i + SIZE_OF_LIST_A];
        }

        int* sorted_list_a = MergeSort(unsorted_list_a, SIZE_OF_LIST_A);
        int* sorted_list_b = MergeSort(unsorted_list_b, SIZE_OF_LIST_B);

        int pointer_a = 0;
        int pointer_b = 0;

        for (int i = 0; i < SIZE_OF_LIST; i++) {
                if (pointer_a >= SIZE_OF_LIST_A) {
                        list[i] = sorted_list_b[pointer_b];
                        pointer_b++;
                        continue;
                }
                if (pointer_b >= SIZE_OF_LIST_B) {
                        list[i] = sorted_list_a[pointer_a];
                        pointer_a++;
                        continue;
                }

                if (sorted_list_a[pointer_a] > sorted_list_b[pointer_b]) {
                        list[i] = sorted_list_b[pointer_b];
                        pointer_b++;
                } else {
                        list[i] = sorted_list_a[pointer_a];
                        pointer_a++;
                }
        }

        return list;
}

int random_number_between (int a, int b) {
        if (a >= b) return a;
        return rand() % (b - a + 1) + a;
}

int main() {
        int list[6] = { }; 

        srand(time(NULL));

        int unsorted_list[6];
        int i = 0;
        int random_number = 0;
        int new_random_number = 1;

        while (i < 6) {
                new_random_number = 1;
                random_number = random_number_between(1, 49);
                for (int j = 0; j<i; j++) {
                        if (unsorted_list[j] == random_number) {
                                new_random_number = 0;
                                break;
                        }
                }

                if (new_random_number) {
                        unsorted_list[i] = random_number;
                        i++;
                } 
        }

        int* sorted_list = MergeSort(unsorted_list, 6);

        for (int i = 0; i < 6; i++) {
                printf("%d ", sorted_list[i]);
        }
        printf("\n");
}