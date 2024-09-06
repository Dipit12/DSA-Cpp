#include <iostream>
using namespace std;

class Queue {
    int *arr, capacity, frontIndex, rearIndex;
    
public:
    Queue(int cap = 1000) {
        capacity = cap;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int data) {
        if (rearIndex == capacity) {
            cout << "Queue overflow" << endl;
            return;
        } else {
            arr[rearIndex] = data;
            rearIndex++;
        }
    }

    void dequeue() {
        if (frontIndex == rearIndex) {
            cout << "Queue is empty" << endl;
            return;
        } else {
            frontIndex++;
        }
    }

    int front() {
        if (frontIndex == rearIndex) {
            cout << "Queue is empty" << endl;
            return -1; // Return an invalid value if the queue is empty
        } else {
            return arr[frontIndex];
        }
    }

    bool isEmpty() {
        return frontIndex == rearIndex;
    }

    int size() {
        return rearIndex - frontIndex;
    }
};

int main() {
    Queue c1;
    c1.enqueue(1);
    c1.enqueue(2);
    c1.enqueue(3);
    
    cout << c1.front() << endl;  // Output: 1
    c1.dequeue();
    cout << c1.front() << endl;  // Output: 2
    
    cout << "Queue size: " << c1.size() << endl;  // Output: 2
    cout << "Is queue empty: " << (c1.isEmpty() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}
