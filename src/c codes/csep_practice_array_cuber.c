#include <stdio.h>
#include "csep_practice_fast_power.c"
int cube_returner(int *array, int sizeArray){
    int arr[sizeArray];
    for (int i = 0;i <sizeArray;i++){
        arr[i] = fast_power(array[i],3);
    }
    for (int k = 0;k < sizeArray;k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
    for (int j  = 0;j < sizeArray;j++){
        printf("%d ", arr[j]);
    }
    return 0;
}
