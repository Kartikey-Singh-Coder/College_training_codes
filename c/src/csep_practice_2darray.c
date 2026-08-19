#include <stdio.h>
#include <stdlib.h>
int main() {
    const int cols = 2;
    const int rows = 2;
    int (*arr)[cols] = malloc(rows * sizeof(*arr));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d,%d = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
}