#pragma once
#include <string>
#include<LINKED_LIST.hpp>
#include<vector>
int factorial(int n);
int sumTillN(int n);
void recursiveStringReversal(std::string &s,int start,int end);
int recursiveBinarySearch(int low,int high,const int* array,int target);
void recursiveLinkedListTraversal(node* traveller);
void binaryString(int n,std::string state);
void subsequenceString(std::string sample,std::string state,int position);
void generateSubsets(const std::vector<int>&sample,std::vector<int> state,int position);
void generateSubsetsandPrint(const std::vector<int> &sample,std::vector<int> state,const int position,std::vector<std::vector<int>>& result);
void generateSubsetsandPrintLikeK(const std::vector<int> &sample,std::vector<int> state,const int position,std::vector<std::vector<int>>& result,const int k);
void subsequenceStringLikeK(const std::string sample,std::string state,const int position,const int k);
void subvectorsWithSumK(const std::vector<int> sample,std::vector<int> state,std::vector<std::vector<int>>& result,const int position,const int target);