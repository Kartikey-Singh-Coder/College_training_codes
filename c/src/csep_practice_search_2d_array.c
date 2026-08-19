#include<stdio.h>
#include <stdbool.h>
int matrix_array_searcher(const int *arr,const int arrSize,const int target) {
    int low = 0;
    int high = arrSize-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        int midRow = arr[mid];
    }
}