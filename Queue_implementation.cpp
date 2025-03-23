#include "queue.h"

int main()
{
    Queue<int> q;

    // Test 1: Check if the queue is empty initially
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // Test 2: Enqueue elements into the queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Test 3: Check if the queue is empty after enqueuing elements
    cout << "Is queue empty after enqueuing elements? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // Test 4: Print the contents of the queue
    cout << "Queue contents: ";
    q.print();

    // Test 5: Get the front and back elements
    cout << "Front element: " << q.frontElement() << endl;
    cout << "Back element: " << q.backElement() << endl;

    // Test 6: Dequeue an element from the queue
    q.dequeue();
    cout << "Queue contents after one dequeue: ";
    q.print();

    // Test 7: Print the front and back elements after dequeue
    cout << "Front element after dequeue: " << q.frontElement() << endl;
    cout << "Back element after dequeue: " << q.backElement() << endl;

    // Test 8: Clear the queue
    q.clear();
    cout << "Queue contents after clear: ";
    q.print();

    // Test 9: Check if the queue is empty after clearing
    cout << "Is queue empty after clear? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
    
}

