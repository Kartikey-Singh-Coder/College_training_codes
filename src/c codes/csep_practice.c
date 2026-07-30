#include <math.h>
#include <stdbool.h>
#include <stdio.h>
//
// Created by ALPHA BASE on 24-Jul-26.
//
int armstrong_check(int num) {
    if (num == 0) return 0;
    if (num<9) {
        return 1;
    }
    int digit = 0;
    int count = 0;
    int temp = num;
    int temp2 = num;
    int arm_sum = 0;
    while(temp != 0) {
        count++;
        temp /=10;
    }
    while (temp2 != 0) {
        digit = temp2%10;
        arm_sum += pow(digit,count);
        temp2 /= 10;
    }
    bool ans = arm_sum == num;
    return ans;
}
int main() {
    int user_in = 0;
    printf("enter a number here to check armstrong :-");
    scanf("%d",&user_in);
    int answer = armstrong_check(user_in);
    printf("is it armstrong? - %d",answer);
}