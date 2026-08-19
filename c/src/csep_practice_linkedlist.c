#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node ;
void create_linkedList() {
    struct node *head,*temp,*newnode;
    head = NULL;
    int choice = 1;
    while (choice == 1) {
        newnode = (node *)malloc(sizeof(node));
        printf("enter data of in the node");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue");
        scanf("%d",&choice);
    }
    temp = head;
    int count = 0 ;
    while (temp != NULL) {
        printf("data of node %d->%d \n",count,temp->data);
        temp = temp->next;
        count ++;
    }
}
void insert_linkedList_head(node **head) {
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("enter data of the node");
    scanf("%d",&newnode->data);
    newnode->next = *head;
    *head = newnode;
}
void insert_linkedList_tail(struct node **head) {
    node *newnode;
    node *temp;

    newnode = (node *)malloc(sizeof(node));
    printf("enter data of the node");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}
int main() {
    int choice = 0;
    do {
        printf("");
    }while (choice == 0);
}