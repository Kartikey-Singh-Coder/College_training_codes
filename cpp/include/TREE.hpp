#pragma once
typedef struct TreeNode {
    TreeNode* left;
    int val;
    TreeNode* right;
    explicit TreeNode(const int x) : left(nullptr), val(x), right(nullptr) {}
    ~TreeNode() {
        delete left;
        delete right;
    }
}TreeNode;
void PreOrderTraversal(TreeNode* root);
void InOrderTraversal(TreeNode* root);
void PostOrderTraversal(TreeNode* root);
void LevelOrderTraversal(TreeNode* root);

