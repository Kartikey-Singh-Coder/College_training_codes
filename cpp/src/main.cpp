#include<RECURSION.hpp>
int main() {
    std::vector<int> v{1,2,3};
    std::vector<int>w;
    generateSubsets(v,w,0);
    return 0;
}