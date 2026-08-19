#include <stdio.h>
#include <stdlib.h>
void spiralizer(const int* array,const int arraySize,const int cols) {
    int top = 0;
    int bottom = arraySize / cols - 1;
    int left = 0;
    int right = cols - 1;
    while (top <= bottom) {
        printf("%d-->", array[left]);
        top++;
    }
}