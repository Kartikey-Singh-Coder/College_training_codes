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
TreeNode* createTree();
void PreOrderTraversal(const TreeNode* root);
void InOrderTraversal(const TreeNode* root);
void PostOrderTraversal(const TreeNode* root);
void LevelOrderTraversal(TreeNode* root);
int TreeHeight(const TreeNode* root);
int CountNodes(const TreeNode* root);
int SumNodes(const TreeNode* root);
int CountLeaves(const TreeNode* root);
int MaxValue(const TreeNode* root);
int MinValue(const TreeNode* root);

