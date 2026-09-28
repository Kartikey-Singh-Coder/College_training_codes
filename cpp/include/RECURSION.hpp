#pragma once
#include <string>
#include<LINKED_LIST.hpp>
int factorial(int n);
int sumTillN(int n);
void recursiveStringReversal(std::string &s,int start,int end);
int recursiveBinarySearch(int low,int high,const int* array,int target);
void recursiveLinkedListTraversal(node* traveller);
void binaryString(int n,std::string state);
void subsequenceString(const std::string sample,std::string state,const int position);