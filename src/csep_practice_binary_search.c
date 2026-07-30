#include <stdio.h>
#include <stdlib.h>
int bin_search(int *array,int target,int low, int high) {
    int mid = low +(high - low)/2;
    if (low >high) return -1;
    if (array[mid] == target) return mid;
    else  if (array[mid]>target) {
        return bin_search(array,target,low,mid-1);
    }
    else return bin_search(array,target,mid+1,high);
}