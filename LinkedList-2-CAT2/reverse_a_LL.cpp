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

void print_LL(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    print_LL(head);
    // reversing the LL
    Node *curr = head;
    Node *prev = NULL;

    while(curr != NULL){
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }

    print_LL(prev);
}