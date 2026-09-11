#include <iostream>
#include<LINKED_LIST.h>
int main() {
    node* head = nullptr;
    head = createlist(head);
    displaylist(head);
    std::cout<<isPalindrome(head,isODDlength(head)) << std::endl;
    return 0;
}