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

void print_LL(Node *head){
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

Node* delete_ith_node(Node *head, int i){
    if(i<0){
        cout << "Invalid Index" << endl;
        return head;
    }
    else if(i==0){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    else{
        for(int j=0; j<i-1;j++){
            head = head->next;
        }
        head->next->next;
    }
}

int main(){
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    // linking the nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    delete_ith_node(head,2);
    print_LL(head);
}