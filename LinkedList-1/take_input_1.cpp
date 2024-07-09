#include <iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// LinkedList class to manage the nodes
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function to append a new node to the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the elements of the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int numElements, element;

    cout << "Enter the number of elements: ";
    cin >> numElements;

    for (int i = 0; i < numElements; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        list.append(element);
    }

    cout << "Elements in the linked list: ";
    list.display();

    return 0;
}
