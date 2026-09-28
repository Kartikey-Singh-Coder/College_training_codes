#include <string>
#include <iostream>
#include<LINKED_LIST.hpp>
//factorial of n
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
//sum till n
int sumTillN(int n) {
    if (n == 0) {
        return 0;
    }
    int sum = 0;
    sum = n + sumTillN(n - 1);
    return sum;
}
// reverse a string using recursion
void recursiveStringReversal(std::string &s,const int start,const int end) {
    if (start >= end) {
        return;
    }
    std::swap(s[start], s[end]);
    recursiveStringReversal(s, start + 1, end - 1);
}
// binary search using recursion
int recursiveBinarySearch(int low,int high,const int* array,const int target) {
    if (high < low) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (array[mid] == target) {
        return mid;
    }
    if (array[mid] > target) {
        return recursiveBinarySearch(low, mid - 1, array, target);
    }
    return recursiveBinarySearch(mid + 1, high, array, target);
}
// linked list traversal using recursion
void recursiveLinkedListTraversal(const node* traveller) {
    if (traveller == nullptr) {
        return;
    }
    std::cout << traveller->data << std::endl;
    recursiveLinkedListTraversal(traveller->next);
}
// binary string of length n
void binaryString(const int n,std::string state) {
    if ( state.size() == n ) {
        std::cout << state << std::endl;
        return;
    }
    binaryString(n,state + "0");
    binaryString(n,state + "1");
}
void subsequenceString(const std::string sample,std::string state,const int position) {
    if (position == sample.size()) {
        std::cout << state << std::endl;
        return;
    }
    char i = sample[position];
    subsequenceString(sample,state,position + 1);
    subsequenceString(sample,state + i,position + 1);
}
