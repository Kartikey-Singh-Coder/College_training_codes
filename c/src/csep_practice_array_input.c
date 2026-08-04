#include <stdio.h>
#include <stdlib.h>
int* array_input(const int arraySize) {
    int *array = malloc(arraySize * sizeof(int));
    if (array == NULL) {
        printf("memory allocation failure");
        return NULL;
    }
    for (int i = 0; i < arraySize; i++) {
        printf("enter input for array at %d index :-",i);
        scanf("%d",&array[i]);
    }
    return array;
}