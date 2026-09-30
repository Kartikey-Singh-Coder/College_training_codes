#include <string>
#include <iostream>
#include<LINKED_LIST.hpp>
#include <vector>
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
        std::cout<< "["<< " ";
        std::cout << state << std::endl;
        std::cout<< "]"<< std::endl;
        return;
    }
    binaryString(n,state + "0");
    binaryString(n,state + "1");
}
// subsequences of a string
void subsequenceString(const std::string sample,std::string state,const int position) {
    if (position == sample.size()) {
        std::cout<< "{"<< " ";
        std::cout << state << std::endl;
        std::cout<< "}"<< std::endl;
        return;
    }
    char i = sample[position];
    subsequenceString(sample,state,position + 1);
    subsequenceString(sample,state + i,position + 1);
}
// subsets of a vector
void generateSubsets(const std::vector<int> &sample,std::vector<int> state,const int position) {
    if (position == sample.size()) {
        std::cout<< "["<< " ";
        for (const int i : state) {
            std::cout << i << " ";
        }
        std::cout << "]" << std::endl;
        return;
    }
    const int choice = sample[position];
    generateSubsets(sample,state,position + 1);
    state.push_back(choice);
    generateSubsets(sample,state,position + 1);
}
// subsets of a vector returning
void generateSubsetsandPrint(const std::vector<int> &sample,std::vector<int> state,const int position,std::vector<std::vector<int>>& result) {
    if (position == sample.size()) {
        result.push_back(state);
        return;
    }
    const int choice = sample[position];
    generateSubsetsandPrint(sample,state,position + 1,result);
    state.push_back(choice);
    generateSubsetsandPrint(sample,state,position + 1,result);
}
void subsequenceStringLikeK(const std::string sample,std::string state,const int position,const int k) {
    if (position == sample.size()) {
        if ( state.size() == k ) {
            std::cout<< "{"<< " ";
            std::cout << state << " ";
            std::cout<< "}"<< std::endl;
        }
        return;
    }
    char i = sample[position];
    subsequenceStringLikeK(sample,state,position + 1,k);
    subsequenceStringLikeK(sample,state + i,position + 1,k);
}
void generateSubsetsandPrintLikeK(const std::vector<int> &sample,std::vector<int> state,const int position,std::vector<std::vector<int>>& result,const int k) {
    if (position == sample.size()) {
        if (state.size() == k ) {
            result.push_back(state);
            return;
        }
        return;
    }
    const int choice = sample[position];
    generateSubsetsandPrintLikeK(sample,state,position + 1,result,k);
    state.push_back(choice);
    generateSubsetsandPrintLikeK(sample,state,position + 1,result,k);
}
int vectorSum(std::vector<int> &result) {
    int sum = 0;
    for (int i: result) {
        sum+=i;
    }
    return sum;
}
void subvectorsWithSumK(const std::vector<int> sample,std::vector<int> state,std::vector<std::vector<int>>& result,const int position,const int target) {
    if ( position == sample.size()) {
        if (vectorSum(state) == target) {
            result.push_back(state);
        }
        return;
    }
    const int choice = sample[position];
    subvectorsWithSumK(sample,state,result,position + 1,target);
    state.push_back(choice);
    subvectorsWithSumK(sample,state,result,position + 1,target);
}
