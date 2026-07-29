//
// Created by ALPHA BASE on 24-Jul-26.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int factorial(int n) {
    if(n==0) return 1;
    return n*factorial(n-1);
}
int strongnum_checker(int num) {
    int digit = 0;
    int temp = num;
    int strong_sum = 0;
    while(num != 0) {
        digit = num % 10;
        num = num / 10;
        strong_sum += factorial(digit);
    }
    bool answer  = strong_sum == temp;
    return answer;
}
int main() {
    int user_in = 0;
    printf("enter a number to check if strong : ");
    scanf("%d",&user_in);
    int answer = strongnum_checker(user_in);
    printf("is the number strong? - %d ",answer);
}