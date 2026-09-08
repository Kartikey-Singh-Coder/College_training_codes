#include<iostream>
using namespace std;
typedef struct node {
    int data;
    node *next;
}node;
node* createnode() {
    node* newnode = new node;
    int data = 0;
    printf("enter data for this node : ");
    cin >> data;
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}
node* createlist(int nodelimit,node* head) {
    for (int i = 0; i < nodelimit; i++) {
        node* newnode = createnode();
        if (head == nullptr) {
            head = newnode;
        }
        else {
            node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }

    }
    return head;
}
void displaylist(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main() {
    node* head = nullptr;
    int nodes = 0;
    cout<< "enter number of linked list nodes: "<<endl;
    cin>> nodes;
    head = createlist(nodes,head);
    displaylist(head);
}