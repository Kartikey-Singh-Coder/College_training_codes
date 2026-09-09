#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct node {
    int data;
    node *next;
}snode;
node* createnode();
node* createlist(int nodelimit,node* head);
void displaylist(node* head);
node* middle(node* head);
void printnode(const node* node);
bool L_Search(node* head);
node* LL_Reversal(node*& head);
void delete_at_pos(node* &head);
void insert_at_pos(node*& head);
 #endif