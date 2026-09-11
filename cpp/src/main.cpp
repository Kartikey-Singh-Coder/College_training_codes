
#include<LINKED_LIST.h>
int main() {
    node* head = nullptr;
    head = createlist(head);
    displaylist(head);
    FixedLL_Reversal(head,2,4);
    displaylist(head);
    return 0;
}