#include <stdio.h>
#include <stdlib.h>

typedef struct listenelement {
        int value;
        struct listenelement *next;
} listenelement;



int main (int argc, char *argv[]) {

        listenelement *head = NULL;

        for (int i = argc-1; i > 0; i--) {
                listenelement *new_list_element = (listenelement*)malloc(sizeof(listenelement));
                new_list_element->value = argv[i];
                new_list_element->next = head;
                head = new_list_element;
        }

        listenelement *copy_head; 
        for (listenelement *aktuell = head; aktuell != NULL; aktuell = aktuell->next) {
                listenelement *new_list_element = (listenelement*)malloc(sizeof(listenelement));
                new_list_element->value = aktuell->value;
                new_list_element->next = copy_head;
                copy_head = new_list_element;
        }

        return 0;
}