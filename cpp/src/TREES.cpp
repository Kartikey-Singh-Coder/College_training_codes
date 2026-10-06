#include <iostream>
#include <TREE.hpp>
#include <queue>
#include <limits>
TreeNode* createTree() {
    int val;
    std::cin >> val;
    if (val == -1) return nullptr;
    auto* root = new TreeNode(val);
    root->left = createTree();
    root->right = createTree();
    return root;
}
void PreOrderTraversal(const TreeNode* root) {
    if (root == nullptr) return;
    std::cout << root->val << "\n";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void LevelOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    std::queue<TreeNode*> LevelOrderQueue;
    LevelOrderQueue.push(root);
    while (!LevelOrderQueue.empty()) {
        TreeNode* current = LevelOrderQueue.front();
        LevelOrderQueue.pop();
        std::cout << current->val << "\n";
        if (current->left != nullptr) {
            LevelOrderQueue.push(current->left);
        }
        if (current->right != nullptr) {
            LevelOrderQueue.push(current->right);
        }
    }
}
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
int TreeHeight(const TreeNode* root) {
    if (root == nullptr) return -1;
    const int lh = TreeHeight(root->left);
    const int rh = TreeHeight(root->right);
    return std::max(lh, rh) + 1;
}
int CountNodes(const TreeNode* root) {
    if (root == nullptr) return 0;
    const int left = CountNodes(root->left);
    const int right = CountNodes(root->right);
    return 1 + left + right;
}
int SumNodes(const TreeNode* root) {
    if (root == nullptr) return 0;
    return root->val + SumNodes(root->left) + SumNodes(root->right);
}
int CountLeaves(const TreeNode* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    return CountLeaves(root->left) + CountLeaves(root->right);
}
int MaxValue(const TreeNode* root) {
    if (root == nullptr) return std::numeric_limits<int>::min();
    const int LeftMax = MaxValue(root->left);
    const int RightMax = MaxValue(root->right);
    return std::max(root->val,std::max(LeftMax,RightMax));
}
int MinValue(const TreeNode* root) {
    if (root == nullptr) return std::numeric_limits<int>::max();
    const int LeftMin = MinValue(root->left);
    const int RightMin = MinValue(root->right);
    return std::min(root->val,std::min(LeftMin,RightMin));
}
bool HasTarget(const TreeNode* root ,const int target) {
    if (root == nullptr) return false;
    if (root->val == target) return true;
    const bool left = HasTarget(root->left,target);
    const bool right = HasTarget(root->right,target);
    return left || right;
}
int SingleChildNodes(const TreeNode* root) {
    if (root == nullptr) return 0;
    int current = 0;
    if ((root->left != nullptr && root->right == nullptr) || (root->left == nullptr && root->right != nullptr)){
        current = 1;
    }
    return current + SingleChildNodes(root->left) + SingleChildNodes(root->right);
}
int TwoChildNodes(const TreeNode* root) {
    if (root == nullptr) return 0;
    int current = 0;
    if (root->left != nullptr && root->right != nullptr) {
        current = 1;
    }
    return current + TwoChildNodes(root->left) + TwoChildNodes(root->right);
}
bool SameTree(const TreeNode* rootA, const TreeNode* rootB) {
    if (rootA == nullptr && rootB == nullptr) return true;
    if (rootA == nullptr || rootB == nullptr) return false;
    return ((rootA->val == rootB->val) && SameTree(rootA->left, rootB->left) && SameTree(rootA->right, rootB->right));
}