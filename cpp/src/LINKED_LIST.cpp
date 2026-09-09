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
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "null" << std::endl;
}
node* middle(node* head) {
    node* slow = head;
    node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
node* LL_Reversal(node*& head) {
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
        std::cout << "Invalid position" << std::endl;
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}