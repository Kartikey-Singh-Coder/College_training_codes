//
// Created by ALPHA BASE on 28-Jul-26.
//
#include <stdio.h>
#include <stdlib.h>
int cubeic_array(int length ,int width ,int height){
    int (*arr)[length][width] = malloc(height * sizeof(*arr));
    for (int i = 0 ; i<length; i++) {
        for (int j = 0; j<width; j++) {
            for (int k = 0; k<height; k++) {
                printf("enter data for %d,%d,%d th element",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
int main() {
    cubeic_array(1,1,1);
    return 0;
}