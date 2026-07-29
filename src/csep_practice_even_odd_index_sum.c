//
// Created by ALPHA BASE on 28-Jul-26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array_manipulator(int* array, int arraySize) {
    int sum = 0;
    int product = 1;
    for (int i = 0; i < arraySize; i++) {
        if ((i & 1) == 0) {
            sum += array[i];
        }
        else {
            product *= array[i];
        }
    }
    printf("%d = sum \n%d = product", sum, product);
    return 0;
}
int main() {
    int size = 0;
    printf("enter size of array :- ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("enter element :");
        scanf("%d",&arr[i]);
    }
    array_manipulator(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}