//
// Created by ALPHA BASE on 29-Jul-26.
//
#include<stdio.h>
#include<stdlib.h>
int max_comparator(int* array , int sizeArray) {
    int max = array[0];
    int max2 = INT_MIN;
    for (int i = 0 ; i<sizeArray; i++) {
        if (array[i] > max) {
            max2 = max;
            max = array[i];
        }
        else if (array[i] > max2 && array[i] < max) {
            max2 = array[i];
        }

    }
    printf("%d highest max and %d is second hghest max",max,max2);
}
int main() {
    int array[6];
    for (int i = 0 ; i<6; i++) {
        printf("Enter the number at %d: ", i);
        scanf("%d",&array[i]);
    }
    max_comparator(array,6);
}