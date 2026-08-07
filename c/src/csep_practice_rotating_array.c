#include <stdio.h>
#include <stdlib.h>

#include "csep_practice_array_input.c"
int array_rotater(const int *array,const int offset,const int arraySize) {
    if (offset % arraySize == 0 || offset == arraySize) {
        printf("offset results in same array..");
        return 0;
    }
    int rot[arraySize];
    for (int i = 0; i < arraySize; i++) {
        const int newIndex = (i + offset) % arraySize;
            if (array != NULL) {
                rot[newIndex] = array[i];
            }
            else {
                return -1;          // memory allocation failure recatch
            }
    }
    printf("----:rotated array :-_-- \n");
    for (int j = 0; j < arraySize ; j++) {
        printf("%d ", rot[j]);
    }
    return 1;
}
int main() {
    int size = 0;
    printf("enter size of array :- ");
    scanf("%d",&size); // NOLINT(*-err34-c)
    int *array = array_input(size);
    array_rotater(array,5,size);
    free(array);
}