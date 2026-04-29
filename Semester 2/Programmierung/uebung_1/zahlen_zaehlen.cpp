
#include <iostream>
#include <cstdlib>

const int MAX_DIFFERENT_NUMBERS = 64;

struct number_propability {
        int number;
        int propability;
};

struct numbers {
        number_propability list[MAX_DIFFERENT_NUMBERS];
        int number_of_different_numbers;
};

number_propability *suche(numbers &haystack, int needle) {
        for (int i = 0; i < haystack.number_of_different_numbers; i++) {
                if (haystack.list[i].number == needle) {
                        return &(haystack.list[i]);
                }
        }
        return NULL;
}

void drucke (numbers &liste) {
        for (int i = 0; i < liste.number_of_different_numbers; i++) {
                std::cout << liste.list[i].number << "\t Kam vor: " << liste.list[i].propability << std::endl;
        }
}

int main (int argc, char *argv[]) {
        numbers *number_list = (numbers*)malloc(sizeof(numbers));
        number_list->number_of_different_numbers = 0;

        for (int i = 1; i < argc; i++) {
                int new_element = atoi(argv[i]);
                number_propability *target = suche(*number_list, new_element);
                if (!target) {
                        number_propability *new_container = &number_list->list[number_list->number_of_different_numbers];
                        new_container->number = new_element;
                        new_container->propability = 1;
                        number_list->number_of_different_numbers++;
                } else {
                        target->propability++;
                }
        }

        drucke (*number_list);
}