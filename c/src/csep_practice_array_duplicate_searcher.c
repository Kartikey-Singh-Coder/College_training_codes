#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct collisionNode{
    int value;
    int frequency;
    struct collisionNode *next;
}collisionNode;
typedef struct {
    bool occupied;
    int value;
    int frequency;
    collisionNode *collisions;
} hashmap;

int duplicate_searcher(const int *array,const int sizeArray) {
    hashmap seen[sizeArray] = {};
    int unique_elements = 0;
    for (int i = 0; i < sizeArray; i++) {
        const int element = array[i];
        const int index = ((element % sizeArray) + sizeArray) % sizeArray;
        if (!seen[index].occupied) {
            seen[index].value = element;
            seen[index].frequency = 1;
            seen[index].occupied = 1;
            unique_elements++;
        }
        else if (seen[index].value == element) {
            seen[index].frequency += 1;
        }
        else {
            collisionNode *current = seen[index].collisions;
            while (current != NULL) {
                if (current->value == element) {
                    current->frequency += 1;
                    break;
                }
                current = current->next;
            }
            if (current == NULL) {
                collisionNode *new_node = malloc(sizeof(collisionNode));
                if (new_node == NULL) {
                    printf("Memory allocation failed for collision node\n");
                    return -1;
                }
            }

        }
    }
}

