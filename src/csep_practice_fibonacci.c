//
// Created by ALPHA BASE on 24-Jul-26.
//
#include<stdio.h>
#include<stdbool.h>
int fibonacci(int n) {
    int sum = 0;
    int a = 0 ,b = 1;
    printf("%d %d ",a,b);
    for(int i = 2; i <= n; i++) {
        sum =  a + b;
        a = b;
        b = sum;
        printf ("%d ",sum);
    }
}
int main() {
    int user_in;
    printf("enter a number: ");
    scanf("%d",&user_in);
    fibonacci(user_in);
    return 0;
}
