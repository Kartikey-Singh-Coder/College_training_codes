#pragma once
#include<iostream>
#include<LINKED_LIST.h>
node* createnode() {
    node* newnode = new node;
    int data = 0;
    printf("enter data for this node : ");
    std::cin >> data;
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}
node* createlist(node* head) {
    int nodelimit = 0;
    std::cout<< "enter number of nodes to be made"<<std::endl;
    std::cin >> nodelimit;
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
    auto* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "null" << std::endl;
}
int isODDlength(node* head) {                             // returns if a linked list is odd length or even length
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
    }
    return fast != nullptr;
}
node* middle(node* head) {            // leetcode 876
    node* slow = head;
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void mergeList(node*& head1, node*& head2) {

}
void printnode(const node* node) {
    std::cout <<std::endl<< "null->" << node->data << "<-null" << std::endl;
    std::cout <<std::endl;
}
bool L_Search(node* head) {
    int data = 0;
    std::cout << "enter element : " << std::endl;
    std::cin>>data;
    node* temp = head;
    while (temp != nullptr) {
        if (temp->data == data) {
            std::cout <<"entry found"<<std::endl;
            return true;
        }
        temp= temp->next;
    }
    return false;
}
node* LL_Reversal(node*& head) {      //leetcode 206
    auto* temp = head;
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
    auto* temp = head;
    auto* current = head;
    std::cout<<  "enter the position of element you want to delete"<<std::endl;
    int pos = 0;
    std::cin >> pos;
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
        std::cout << "Invalid position" << std::endl;
        return;
    }
    current = temp->next;
    temp->next = current->next;
    delete current;
}
void insert_at_pos(node*& head) {
    int pos;
    std::cout << "enter the position of element" << std::endl;
    std::cin >> pos;
    int data = 0;
    std::cout << "enter the data" << std::endl;
    std::cin >> data;
    auto* newnode = new node;
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
        std::cout << "Invalid position" << std::endl;
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
node* hasCycleStart(node* head) {
    node* slow = head;
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}
bool isPalindrome(node* head,int isOdd) {
    node* mid = middle(head);
    node* temp = head;
    node* temp2 = nullptr;
    while (temp != nullptr && temp != mid) {
        temp = temp->next;
    }
    if (isOdd == 1) {
        temp2 = temp->next;
        temp2= LL_Reversal(temp2);
        temp = head;
    }
    else if (isOdd == 0) {
        temp2 = temp;
        temp = head;
        temp2 = LL_Reversal(temp2);
    }
    while (temp2 != nullptr) {
        if (temp->data != temp2->data) {
            return false;
        }
        temp2 = temp2->next;
        temp = temp->next;
    }
    return true;
}
node* NthNodefromEnd(node* head, int N) {   // related to leetcode 19
    node* slow = head;
    node* fast = head;
    for (int i = 0; i < N; i++) {
        if (fast == nullptr) {
            return nullptr;
        }
        fast = fast->next;
    }
    slow = slow->next;
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
node* SortedDuplicateDeleter(node*& head) {
    node* temp = head;
    node* left = head;
    while (temp != nullptr){
        while(temp != nullptr && temp->data == left->data){
            temp = temp->next;
        }
        left->next = temp;
        left = temp;
    }
    return head;
}