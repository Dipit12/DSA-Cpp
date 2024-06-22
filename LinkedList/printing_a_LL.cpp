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

void print(Node *head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    // static creation of objects
    // Node n1(1);
    //Node n2(2);

    // n1.next = &n2;
   // cout << n1.data <<" " << n2.data << endl;
    //Node *head = &n1;
    //cout << head->data << endl;

    // creating nodes dynamically
   // Node *n3 = new Node(3);
   // Node *n4 = new Node(4);
   // n3->next = n4;

    // creating a linked list with 5 nodes - statically
    Node n5(1);
    Node *head = &n5;
    Node n6(2);
    Node n7(3);
    Node n8(4);
    Node n9(5);

    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next  = &n8;

    print(head);
}