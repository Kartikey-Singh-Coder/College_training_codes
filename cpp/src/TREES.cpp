#include <iostream>
#include <TREE.hpp>
void PreOrderTraversal(const TreeNode* root) {
    if (root == nullptr) return;
    std::cout << root->val << "\n";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void LevelOrderTraversal(const TreeNode* root) {}
void PostOrderTraversal(const TreeNode* root) {
    if (root == nullptr) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    std::cout << root->val << "\n";
}
void InOrderTraversal(const TreeNode* root) {
    if (root == nullptr) return;
    InOrderTraversal(root->left);
    std::cout << root->val << "\n";
    InOrderTraversal(root->right);
}