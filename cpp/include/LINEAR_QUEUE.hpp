#pragma once
#include <vector>
class queue {
private:
    std::vector<int> v;
    int front = 0;
    int rear = -1;
    int size;
public:
    queue(int n);
    bool enqueue(int data);
    bool dequeue();
    void display();
};