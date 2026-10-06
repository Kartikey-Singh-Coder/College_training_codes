#include <iostream>
#include<RECURSION.hpp>
int main() {
    std::vector<int> v{1,3,3};
    std::vector<std::vector<int>> result;
    generateSubsetsandPrint(v,{},0,result);
    for(int i=0;i<result.size();i++) {
        for(int j=0;j<result[i].size();j++) {
            std::cout<<result[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}