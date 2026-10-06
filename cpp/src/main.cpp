#include <iostream>
#include<TREE.hpp>
int main() {
    std::cout << "enter tree in preorder mode with -1 as a nullptr denotion" << "\n";
    const auto* root = createTree();
    std::cout<< "\n";
    InOrderTraversal(root);
}