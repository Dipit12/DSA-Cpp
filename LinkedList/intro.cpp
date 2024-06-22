#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

int main() {
    // creating object statically
    Node n1(1);
    Node n2(2);
    // creating a linked list
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;

    Node *head = &n1;
    cout << (*head).data << endl; // would print 1
}