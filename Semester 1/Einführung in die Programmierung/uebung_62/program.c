// AUTOR: ELIAS NIEBERGALL
// DATUM: 4.2.2026

#include <stdlib.h>
#include <stdio.h>
#define SELECTION_SIZE 3

typedef struct object object;

struct object {
        char name[32];
        double size;
        double value;
        int is_in_current_selection;
        int is_in_best_selection;
};

object selection[] = {
        {
                "Fotoapparat",
                2.5,
                35,
                0,
                0
        },
        {
                "Regenmantel",
                1.2,
                1,
                0,
                0
        },
        {
                "Brille",
                0.2,
                1,
                0,
                0
        }
};

double record_size = 0;
double MAX_SIZE = 20;


double record_value = 0;
double next_value = 0;

int position = 0;

int pack_backpack(object *current_object, double current_size, double current_value) {
        if (current_size + current_object->size <= MAX_SIZE) {

                current_object->is_in_current_selection = 1;

                for (object *i = current_object+1; i < selection + SELECTION_SIZE; i++){
                        pack_backpack(i, current_size + current_object->size, current_value + current_object->value);
                }
                
                if (current_value + current_object->value > record_value) {
                        record_value = current_value + current_object->value;
                        for (object *i = selection; i < selection + SELECTION_SIZE; i++){
                                i->is_in_best_selection = (i->is_in_current_selection);
                        }
                }
                current_object->is_in_current_selection = 0;
        }
        return 0;
}

int main (int argc, char *argv[]){

        for (object *i = selection; i < selection + SELECTION_SIZE; i++){
                pack_backpack(i, 0, 0);
        }

        for (object *i = selection; i < selection + SELECTION_SIZE; i++) {
                if (i->is_in_best_selection) printf("%s ", i->name);
        }
}