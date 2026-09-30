#include <iostream>
#include<RECURSION.hpp>
int main() {
    std::vector<int> v{1,2,3,4,5};
    std::vector<std::vector<int>> result;
    subvectorsWithSumK(v,{},result,0,7);
    for (auto & i : result) {
        for (int j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}