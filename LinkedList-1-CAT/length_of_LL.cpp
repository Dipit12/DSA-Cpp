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


int length(Node *head){
    if(head == NULL){
        cout << "LinkedList is empty" << endl;
    }
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
     Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    cout << length(head);
}