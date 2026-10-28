#include <iostream>
#include<TREE.hpp>
#include<vector>
int main() {
    auto* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);
    std::vector<int> answer;
    LeftView(root,0,answer);
    for ( const int i : answer ){
        std::cout<< i << " ";
    }
    std::cout<< std::endl;
    std::vector<int> answer2;
    RightView(root,0,answer2);
    for ( const int i : answer2 ) {
        std::cout<< i << " ";
    }
    delete root;
}