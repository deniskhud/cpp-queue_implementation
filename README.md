# Queue Implementation in C++

This repository contains a simple implementation of a Queue data structure in C++. The Queue is implemented using a linked list, with standard queue operations such as `enqueue`, `dequeue`, `front`, `back`, and `clear`.

## Features

- **Enqueue**: Adds an element to the back of the queue.
- **Dequeue**: Removes an element from the front of the queue.
- **Front**: Retrieves the front element without removing it.
- **Back**: Retrieves the back element without removing it.
- **Size**: Returns the number of elements in the queue.
- **isEmpty**: Checks if the queue is empty.
- **Clear**: Removes all elements from the queue.
- **Print**: Prints all elements in the queue.

## Example Usage

### Creating a Queue:

```cpp
#include "Queue.h"

int main() {
    Queue<int> q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Print queue
    q.print();

    // Dequeue an element
    q.dequeue();
    q.print();

    // Check front and back elements
    cout << "Front element: " << q.frontElement() << endl;
    cout << "Back element: " << q.backElement() << endl;

    // Clear the queue
    q.clear();
    cout << "Queue cleared!" << endl;
    q.print();

    return 0;
}