#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int nextIndex;
    int capacity;

public:
    Stack() {
        capacity = 5;
        arr = new int[capacity]; // Fix 1: Correct array initialization
        nextIndex = 0;
    }

    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity]; // Fix 1: Correct array initialization
        nextIndex = 0;
    }

    void pop() {
        if (nextIndex == 0) {
            cout << "Stack is empty" << endl;
        } else {
            nextIndex--;
        }
    }

    void push(int data) {
        if (nextIndex == capacity) {
            cout << "Stack overflow" << endl;
        } else {
            arr[nextIndex] = data;
            nextIndex++; // Fix 2: Increment nextIndex after adding the data
        }
    }

    int peek() {
        if (nextIndex == 0) {
            cout << "Stack is empty" << endl;
            return -1; // Fix 4: Return -1 if stack is empty
        } else {
            cout << "The topmost element is " << arr[nextIndex - 1] << endl; // Fix 3: Use nextIndex - 1
            return arr[nextIndex - 1];
        }
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    bool isFull() {
        return nextIndex == capacity;
    }
};

int main() {
    Stack *s = new Stack();
    s->push(1);
    s->push(2);
    s->push(3);
    s->peek();
    s->push(4);
    s->push(5);
    s->pop();
    cout << "Is stack empty? " << (s->isEmpty() ? "Yes" : "No") << endl; // Fix 5: Print the result of isEmpty()
    
    delete s; // Free allocated memory
    return 0;
}
