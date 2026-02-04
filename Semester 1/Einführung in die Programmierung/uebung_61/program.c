// AUTOR: ELIAS NIEBERGALL
// DATUM: 4.2.2026

#include <stdlib.h>
#include <stdio.h>

typedef struct dyn_list_knot {
        struct dyn_list_knot *next;
        int value;
} dyn_list_knot;

dyn_list_knot *head;
dyn_list_knot *tail;

dyn_list_knot *find_knot_before_min_list_knot(dyn_list_knot *head);
void exchange_list_knots(dyn_list_knot *ptr_on_list_knot_before_knot_a, dyn_list_knot *ptr_on_list_knot_before_knot_b);
void print_dynamic_list (dyn_list_knot *head);

dyn_list_knot *sort_dynamic_list(dyn_list_knot *head) {
        if (!head) {
                return NULL;
        }

        dyn_list_knot *new_head = NULL;
        dyn_list_knot *knot_before_smallest_knot_int_rest_list;

        // Find the start knot
        knot_before_smallest_knot_int_rest_list = find_knot_before_min_list_knot(head);
        if (!knot_before_smallest_knot_int_rest_list){
                new_head = head;
        } else {
                new_head = knot_before_smallest_knot_int_rest_list->next;
                knot_before_smallest_knot_int_rest_list->next = knot_before_smallest_knot_int_rest_list->next->next;
                new_head->next = head;
        }

        for (dyn_list_knot *current_knot = head; current_knot->next->next;current_knot = current_knot->next) {
                print_dynamic_list(new_head);
                knot_before_smallest_knot_int_rest_list = find_knot_before_min_list_knot(current_knot);
                if (knot_before_smallest_knot_int_rest_list) {
                        exchange_list_knots(knot_before_smallest_knot_int_rest_list, current_knot);
                }
                current_knot = current_knot->next;
        }
        return new_head;
}

dyn_list_knot *find_knot_before_min_list_knot(dyn_list_knot *head) {
        if (!head) {
                return NULL;
        }

        dyn_list_knot *current_position = head;
        dyn_list_knot *max_value_knot = NULL;

        while (current_position->next) {
                max_value_knot = (max_value_knot->value < current_position->next->value) ? current_position->next : max_value_knot;
        }

        return max_value_knot;
}

void exchange_list_knots(dyn_list_knot *ptr_on_list_knot_before_knot_a, dyn_list_knot *ptr_on_list_knot_before_knot_b) {
        dyn_list_knot *ptr_on_list_knot_a = ptr_on_list_knot_before_knot_a->next;
        dyn_list_knot *ptr_on_list_knot_b = ptr_on_list_knot_before_knot_b->next;
        dyn_list_knot *ptr_on_list_knot_after_a = ptr_on_list_knot_a->next;
        dyn_list_knot *ptr_on_list_knot_after_b = ptr_on_list_knot_b->next;

        ptr_on_list_knot_a->next = ptr_on_list_knot_after_b;
        ptr_on_list_knot_b->next = ptr_on_list_knot_after_a;
        ptr_on_list_knot_before_knot_a->next = ptr_on_list_knot_b;
        ptr_on_list_knot_before_knot_b->next = ptr_on_list_knot_a;
}

void add_knot(int value) {
        dyn_list_knot *new_knot = malloc(sizeof(dyn_list_knot));
        new_knot->next = NULL;
        new_knot->value = value;
        if (!head) {
                head = new_knot;
                tail = new_knot;
        } else {
                tail->next = new_knot;
                tail = new_knot;
        }
}

void print_dynamic_list (dyn_list_knot *head) {
        for (dyn_list_knot *current = head; current; current = current->next) {
                printf("%i ", current->value);
        }
        printf("\n");
}

int main(int argc, const char *argv[]) {
        for (int i = 1; i < argc; i++) {
                add_knot(atoi(argv[i]));
        }
        print_dynamic_list(head);
        sort_dynamic_list(head);
        print_dynamic_list(head);
        return 1;
}