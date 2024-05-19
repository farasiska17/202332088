#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myqueue;

    // Enqueue elements onto the queue
    myqueue.push(14);
    myqueue.push(21);
    myqueue.push(30);

    // Display the size of the queue
    cout << "Size of the queue: " << myqueue.size() << endl;

    // Dequeue elements from the queue
    while (!myqueue.empty()) {
        cout << "Dequeued element: " << myqueue.front() << endl;
        myqueue.pop();
    }

    return 0;
}
