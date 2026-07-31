//
// Created by ALPHA BASE on 29-Jul-26.
//
#include <stdbool.h>
#include<stdio.h>
#include <stdlib.h>
bool sort_check(int* array,int sizeArray) {
    int direction = -1;             // unknown direction yet
    for(int i=0;i<sizeArray-1;i++) {

        if(array[i] == array[i+1]) {
            continue;
        }
        bool current =array[i] > array[i+1];
        if (direction == -1) {
            direction = current;  // sets value to 1 for ascending and 0 for descending
        }
        else if (direction != current) {
            printf("Array is unsorted\n");
            return false;
        }
    }
    printf("Array is sorted\n");
    return true;
}
void inputArray(int* array,int sizeArray) {
    for (int i = 0; i<sizeArray; i++) {
        printf("Enter the number at %d: ", i);
        scanf("%d",&array[i]);
    }
}
int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    inputArray(array,size);
    sort_check(array,size);
    return 0;
}