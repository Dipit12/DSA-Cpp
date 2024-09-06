#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main(){
    // creating objects statically
    Node n1(1);
    Node n2(2);
    Node n3(3);
    n1.next = &n2;
    n2.next = &n3;
    cout << n1.data << " " << n2.data << " " << n3.data << endl;

    Node *head = &n1;
    cout << head->data << endl;
    // creating objects dynamically

    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    n4->next = n5;
    cout << n4->data << " " << n5->data << endl;
}