#include <iostream>
#include<TREE.hpp>
int main() {
    auto* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);
    std::cout << TreeHeight(root)<< "\n";
    std::cout << CountNodes(root)<<"\n";
    std::cout << SumNodes(root) << "\n";
    std::cout << CountLeaves(root) << "\n";
    std::cout << MaxValue(root) << "\n";
    std::cout << MinValue(root) << "\n";
    std::cout << SingleChildNodes(root) << "\n";
    std::cout << TwoChildNodes(root) << "\n";
    delete root;
}