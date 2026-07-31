#include <stdio.h>
#include <stdlib.h>
int adjacent_swap(int *array,int sizeArray) {
    int temp = 0;
    for (int i = 0; i <sizeArray-1 ; i+=2) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
    printf("Adjacent_swap \n");
    for (int i = 0; i <sizeArray; i++) {
        printf("%d ", array[i]);
    }
}
int main() {
    int array[] = {2,3,2,8,9};
    adjacent_swap(array,5);
}