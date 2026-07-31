#include <math.h>
#include <stdbool.h>
#include <stdio.h>
//
// Created by ALPHA BASE on 24-Jul-26.
//
int spy_checker(int num){
    int digit = 0 , digit_mult = 1,digit_sum = 0;
    while(num>0){
        digit = num % 10;
        num = num / 10;
        digit_mult = digit_mult*digit;
        digit_sum += digit;
    }
    bool answer = digit_sum == digit_mult;
    return answer;
}
int main() {
    int user_in;
    printf("enter a number here to check armstrong :-");
    scanf("%d",&user_in);
    int answer = spy_checker(user_in);
    printf("is the number spy ? -  %d",answer);

}