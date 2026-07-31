#include<stdio.h>
int more_than_average(int *array,int sizeArray) {
    float average = 0;
    int sum = 0;
    for (int i = 0; i < sizeArray; i++) {
        sum += array[i];
    }
    average = sum / sizeArray;
    printf("%f\n", average);

    for (int i = 0; i < sizeArray; i++) {
        if(array[i] > average) printf("%d ",array[i]);
        else continue;
    }
    return 0;
}
int main() {
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++) {
        printf("enter number:");
        scanf("%d",&array[i]);
    }
    more_than_average(array,size);
}