#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct node {
    int data;
    node *next;
}snode;
node* createnode();
node* createlist(node* head);
void displaylist(node* head);
int isODDlength(node* head);
node* middle(node* head);
void printnode(const node* node);
bool L_Search(node* head);
node* LL_Reversal(node*& head);
void delete_at_pos(node* &head);
void insert_at_pos(node*& head);
node* hasCycleStart(node* head);
node* NthNodefromEnd(node* head, int N);
void mergeList(node*& head1, node*& head2);
node* SortedDuplicateDeleter(node*& head);
bool isPalindrome(node* head,int isOdd);
node* FixedLL_Reversal(node*& head,int left,int right);
 #endif