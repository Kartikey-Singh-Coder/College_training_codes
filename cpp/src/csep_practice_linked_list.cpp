#include<iostream>
using namespace std;
typedef struct node {
    int data;
    node *next;
}snode;
static node* createnode() {
    node* newnode = new node;
    int data = 0;
    printf("enter data for this node : ");
    cin >> data;
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}
static node* createlist(int nodelimit,node* head) {
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
static void displaylist(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
static node* middle(node* head) {
    node* slow = head;
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void static printnode(const node* node) {
    cout <<endl<< "null->" << node->data << "<-null" << endl;
    cout << endl;
}
bool static L_Search(node* head) {
    int data = 0;
    cout << "enter element : " << endl;
    cin>>data;
    node* temp = head;
    while (temp != nullptr) {
        if (temp->data == data) {
            cout <<"entry found"<<endl;
            return true;
        }
        temp= temp->next;
    }
    return false;
}
static node* LL_Reversal(node*& head) {
    node* temp = head;
    node* prev = nullptr;
    while (temp != nullptr) {
        node* current = temp;
        temp = temp->next;
        current->next = prev;
        prev = current;
    }
    return prev;
}
void delete_at_pos(node* &head) {
    node* temp = head;
    node* current = head;
    cout<<  "enter the position of element you want to delete"<<endl;
    int pos = 0;
    cin >> pos;
    if (pos == 0) {
        head = head->next;
        delete current;
        return;
    }
    while (pos > 2 && temp != nullptr) {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }
    current = temp->next;
    temp->next = current->next;
    delete current;
}
void insert_at_pos(node*& head) {
    int pos;
    cout << "enter the position of element" << endl;
    cin >> pos;
    int data = 0;
    cout << "enter the data" << endl;
    cin >> data;
    node* newnode = new node;
    newnode->data = data;
    if (pos == 0) {
        newnode->next = head;
        head = newnode;
        return;
    }
    int count = pos;
    node* temp = head;
    while (count > 2 && temp != nullptr) {
        temp = temp->next;
        count--;
    }
    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
int main() {
    node* head = nullptr;
    int nodes = 0;
    cout<< "enter number of linked list nodes: "<<endl;
    cin>> nodes;
    head = createlist(nodes,head);            // This part creates the linked list to the head pointer
    displaylist(head);                        // This part displays the complete linked list
    const node* middlenode = middle(head);    // This part finds the middle node
    printnode(middlenode);                    // This part prints the middle node data
    cout<<L_Search(head)<<endl;               // This part linearly searches the list
    head = LL_Reversal(head);             // this part reverses a linked list
    insert_at_pos(head);                  // This part inserts an element at an arbitrary index
    displaylist(head);
    delete_at_pos(head);                  // This part deletes an element at any arbitrary index
    displaylist(head);
    return 0;
}