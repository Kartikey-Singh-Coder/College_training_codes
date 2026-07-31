//
// Created by ALPHA BASE on 28-Jul-26.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool arrayshifter(int* array,int targetIndex ,int value, int sizeArray) {
    int temp = 0;
    if (array[sizeArray-1] != 0) {
        return 0;
    }
    for (int i = sizeArray-1; i > targetIndex ; i--) {
        array[i] = array[i-1];
    }
    int temp1 = array[targetIndex];
    array[targetIndex] = value;
    array[targetIndex+1] = temp1;
    return 1;
}
int array_deleter(int* array, int arraySize) {
    int targetIndex = 0;
    printf("Enter the target index: ");
    scanf("%d",&targetIndex);
    if (targetIndex > arraySize) {
        printf("cant delete out of array");
        return -1;
    }
    for (int i = targetIndex;i<arraySize;i++) {
        array[i] = array[i+1];
    }
    return 0;
}
int main() {
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i = 0; i < size; i++) {
        printf("Enter element [%d]: ", i+1);
        scanf("%d",&array[i]);
    }
    int targetIndex = 0;
    int value = 0;
    printf("Enter the value here: ");
    scanf("%d",&value);
    printf("Enter the target index: ");
    scanf("%d",&targetIndex);
    int status = arrayshifter(array,targetIndex,value,size);
    if(status == 0) {
        printf("no place in array to insert....");
        return -1;
    }
    for(int i = 0; i < size; i++) {
        printf(" %d = %d ",i,array[i]);
    }
}