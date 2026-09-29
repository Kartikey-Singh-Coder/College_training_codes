#include <iostream>
#include<SORTING_ALGORITHM.hpp>
int main() {
    std::vector<int> v{3,4,2,6,5};
    quicksort(v,0,v.size()-1);
    for(int i=0;i<v.size();i++) {
        std::cout<<v[i]<<" ";
    }
    return 0;
}