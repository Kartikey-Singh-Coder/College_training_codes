#include <stdio.h>
#include <stdbool.h>
bool isSortedRotated(const int arr[], const int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}
int main() {
    const int arr[] = {1,2,3,4,5};
    const int n = sizeof(arr) / sizeof(arr[0]);
    if (isSortedRotated(arr, n))
        printf("Yes\n");

    return 0;
}