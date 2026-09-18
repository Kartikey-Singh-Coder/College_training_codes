#include "LINEAR_QUEUE.hpp"
#include <iostream>

queue::queue(int n) {
    size = n;
}

bool queue::enqueue(int data) {

    if (rear == size - 1) {
        std::cout << "enqueue error : overflow" << std::endl;
        return false;
    }

    v.push_back(data);
    rear++;

    return true;
}

bool queue::dequeue() {

    if (rear < front) {
        std::cout << "dequeue error : underflow" << std::endl;
        return false;
    }

    front++;

    return true;
}

void queue::display() {

    for (int i = front; i <= rear; i++) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;
}