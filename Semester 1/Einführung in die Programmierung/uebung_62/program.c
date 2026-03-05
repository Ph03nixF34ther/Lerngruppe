// AUTOR: ELIAS NIEBERGALL
// DATUM: 4.2.2026

#include <stdlib.h>
#include <stdio.h>
#define SELECTION_SIZE 17

typedef struct object object;

struct object {
        char name[32];
        double size;
        double value;
        int is_in_current_selection;
        int is_in_best_selection;
};

object selection[] = {
{"Apfel", 10 ,5},
{"Müsliriegel", 2.5, 25},
{"Goldring", 0.5, 1666},
{"Schleppdepp", 70 ,499.99},
{"Paß", 0.5, 60},
{"Geldbörse", 5, 123.27},
{"Kamera", 49.5, 459.99},
{"Brille", 13 ,260.50},
{"Saft", 30 ,30},
{"Pullover", 12 ,20},
{"Regenmantel", 3.5, 40},
{"Messer", 10 ,50},
{"Taschentuch", .1 ,.5},
{"Klopapier", 0.5, 5},
{"Banane", 5, 10},
{"Karte", 1.5, 20},
{"Sonnencreme", 7.5, 40},

};

double record_size = 0;
double MAX_SIZE = 50;


double record_value = 0;
double next_value = 0;

int position = 0;

int pack_backpack(object *current_object, double current_size, double current_value) {
        if (current_size + current_object->size <= MAX_SIZE) {

                current_object->is_in_current_selection = 1;
                
                if (current_value + current_object->value > record_value) {
                        record_value = current_value + current_object->value;
                        for (object *i = selection; i < selection + SELECTION_SIZE; i++){
                                i->is_in_best_selection = (i->is_in_current_selection);
                        }
                }

                for (object *i = current_object+1; i < selection + SELECTION_SIZE; i++){
                        pack_backpack(i, current_size + current_object->size, current_value + current_object->value);
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
        printf("\n");
}