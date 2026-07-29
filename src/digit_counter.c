//
// Created by ALPHA BASE on 22-Jul-26.
//
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
int main(){
    int a = 1000;
    int digit =0;
    int count = 0;
    int arm_sum = 0;
    for (int i = 1; i <= a; i++) {
        int temp = i;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        temp = i;
        while (temp!=0) {
            digit = temp%10;
            arm_sum += pow(digit,count);
            temp /= 10;
        }
        if (arm_sum == i) {
            printf("%d is armstrong \n",i);
        }
    }
    return 0;
}