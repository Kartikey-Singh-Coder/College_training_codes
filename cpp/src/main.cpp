#include <iostream>
#include <LINEAR_QUEUE.hpp>
int main() {
    queue q(5);

    // Enqueue elements
    std::cout << "Enqueuing elements:\n";

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    std::cout << "Queue: ";
    q.display();

    // Test overflow
    std::cout << "\nTrying to enqueue 60:\n";
    q.enqueue(60);

    // Dequeue elements
    std::cout << "\nDequeuing elements:\n";

    q.dequeue();
    q.dequeue();

    std::cout << "Queue: ";
    q.display();

    // Add another element
    std::cout << "\nEnqueuing 60:\n";
    q.enqueue(60);

    std::cout << "Queue: ";
    q.display();

    return 0;
}