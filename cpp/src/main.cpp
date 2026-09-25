#include <iostream>
#include <SORTING_ALGORITHM.hpp>
int main() {
    int n;
    std::cout<<"enter the number of elements you want to enter"<<std::endl;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++) {
        std::cout<<"enter the element you want to enter"<<std::endl;
        std::cin >> arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}