// AUTHOR: ELIAS NIEBERGALL
// DATUM: 10.02.2026

#include "sdlinterf.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define NUMBER_OF_NODES 300
#define CIRCLE_SIZE 5
#define R_CIRC 0
#define G_CIRC 255
#define B_CIRC 0

typedef struct node Node;

struct node {
        Node *reference;
        int x;
        int y;

};

Node *find_original_reference (Node *node) {
        Node *last_node = node;
        while (node->reference != NULL)
        {
                last_node = node;
                node = node->reference;
                if (node->reference) last_node->reference = node->reference;
        }
        return node;
}

bool are_nodes_connected (Node *node_a, Node *node_b) {
        return (find_original_reference(node_a) == find_original_reference(node_b));
}

double pythagorean_distance (Node *node_a, Node *node_b) {
        return (sqrt((node_a->x - node_b->x) * (node_a->x - node_b->x) + (node_a->y - node_b->y) * (node_a->y - node_b->y)));
}

Node *find_node_with_minimal_connection_to_node (Node *node, int number_of_nodes_in_list) {
        double min_distance = SDL_X_SIZE + SDL_Y_SIZE;
        Node *best_node_found = NULL;
        for (Node *current_node = node+1; current_node < node + number_of_nodes_in_list; current_node++) {
                if (are_nodes_connected(node, current_node) && pythagorean_distance(node, current_node) < min_distance) {
                        best_node_found = current_node;
                        min_distance = pythagorean_distance(node, current_node);
                }
        }
        return best_node_found;
}

int main (int argc, char *argv[]) {

        Node *node_collection[NUMBER_OF_NODES] = {};
        Node *node_connections[NUMBER_OF_NODES*2 - 2] = {};

        int number_of_connections_made = 0;
        
        sdlInit();
        sdlSetBlack();

        // Generate random Nodes
        for (int i = 0; i < NUMBER_OF_NODES; i++){
                Node *new_node = malloc(sizeof(Node));
                new_node->x = rand() % SDL_X_SIZE;
                new_node->y = rand() % SDL_Y_SIZE;
                new_node->reference = NULL;

                node_collection[i] = new_node;
                sdlDrawCirc(new_node->x, new_node->y, CIRCLE_SIZE, CIRCLE_SIZE, R_CIRC, G_CIRC, B_CIRC);
        } 


        while (number_of_connections_made <= NUMBER_OF_NODES -1) {
                Node *target_node = NULL;
                Node *best_node = NULL;
                Node *best_target_node = NULL;

                double best_distance = SDL_X_SIZE + SDL_Y_SIZE;

                for (int i = 0; i < NUMBER_OF_NODES; i++) {

                        target_node = find_node_with_minimal_connection_to_node(node_collection[i], NUMBER_OF_NODES-i);

                        if (target_node != NULL && best_distance > pythagorean_distance(node_collection[i], target_node)) {
                                best_distance = pythagorean_distance(node_collection[i], target_node);
                                best_target_node = target_node;
                                best_node = node_collection[i];
                        }
                }
                
                Node *reference_node = find_original_reference(best_node);
                Node *reference_target_node = find_original_reference(best_target_node);

                reference_target_node->reference = reference_node;

                node_connections[number_of_connections_made * 2]     = best_node;
                node_connections[number_of_connections_made * 2 + 1] = best_target_node;

                sdlDrawLine(best_node->x, best_node->y, best_target_node->x, best_target_node->y, 255, 0, 0);
                sdlUpdate();
        }
}