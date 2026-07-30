//
// Created by ALPHA BASE on 25-Jul-26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double fast_power(double base , int power) {
    long long exponent = power;
    if (power < 0) {
        base = 1.0/base;
        exponent *= -1;
    }
    double result = 1;
    while (exponent > 0) {
        if ((exponent & 1) == 1) {
            result *= base;
        }
        base *=base;
        exponent >>=1;
    }
    return result;
}
int main () {
    double result = 1;
    result = fast_power(INT_MAX,INT_MAX);
    printf("%.10f\n", result);
    return 0;
}