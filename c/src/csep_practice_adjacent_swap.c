#include <stdio.h>
void adjacent_swap(int *array,const int sizeArray) {
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
    int array[] = {2,5,6,9,8,14,25,50,98,21};
    int size = sizeof(array) / sizeof(array[0]);
    adjacent_swap(array,size);
}