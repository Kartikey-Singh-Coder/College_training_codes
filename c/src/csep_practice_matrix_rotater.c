#include <stdio.h>
#include <stdlib.h>
void static matrix_transpose(int* array,int rows,int cols) {
    for (int i=0;i<rows;i++) {
        for (int j = i + 1; j < cols; j++) {
            int temp = array[i*cols +j];
            array[i*cols +j] = array[j*cols +i];
            array[j * rows +i] = temp;
        }
    }
}
void static arrayreverse(int* array,int length) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left++;
        right--;
    }

}
void static matrix_rotater(int (*arr), int rows, int cols) {
    matrix_transpose(arr,rows,cols);
    for (int i=0;i<rows;i++) {
        arrayreverse(&arr[i*cols],cols);
    }
}
void static display(const int (*arr), int rows, int cols) {
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("%d ",arr[i*cols+j]);
        }
        printf("\n");
    }
}
int main() {
    int rows,cols;
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d %d",&rows,&cols);
    printf("\n");
    int (*arr)[cols]= malloc(rows*sizeof(*arr));
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("enter a number for %d x %d",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n================original==============\n");
    display(*arr,rows,cols);
    matrix_rotater(*arr,rows,cols);
    printf("\n===============after rotation=============\n");
    display(*arr,rows,cols);
    return 0;
}
