//
// Created by ALPHA BASE on 24-Jul-26.
//
#include<stdio.h>
#include<math.h>
int happy_num(int num) {
    int digit = 0;
    int digit_squared_sum = 0;
    while(num != 0) {
        digit = num % 10;
        num = num / 10;
        digit_squared_sum += digit * digit;
    }
    if (digit_squared_sum == 1) {
        printf("is the number happy? -  %d",1);
        return 1;
    }
    else if (digit_squared_sum > 9) {
        return happy_num(digit_squared_sum);
    }
    else if (digit_squared_sum <=9 && digit_squared_sum > 1) {
        printf("single digit reached but not 1 => not happy number");
        return 0;
    }
}
int main() {
    int user_in = 0;
    printf("enter a number to check if happy  : ");
    scanf("%d",&user_in);
    int answer = happy_num(user_in);

}