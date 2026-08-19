#include <stdio.h>

long long integerSqrt(long long x) {
    long long low = 0;
    long long high = x;
    long long answer = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid <= x / mid) {
            answer = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return answer;
}
int main() {
    long long x;
    scanf("%lld", &x);
    printf("%lld\n", integerSqrt(x));
    return 0;
}