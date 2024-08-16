#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Inserting elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // Inserting elements at the front
    dq.push_front(5);
    dq.push_front(1);

    // Accessing elements
    std::cout << "Front element: " << dq.front() << std::endl;
    std::cout << "Back element: " << dq.back() << std::endl;

    // Removing elements from the front
    dq.pop_front();

    // Removing elements from the back
    dq.pop_back();

    // Iterating through the deque
    std::cout << "Elements in deque: ";
    for (int elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
