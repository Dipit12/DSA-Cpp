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

Node* insert_node_at_ith_pos(Node *head, int i, int data){
    if(i<0){
        cout << "Invalid index" << endl;
        return head;
    }
    else if(i==0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    else{
        for(int j=0; j<i-1;j++){
            Node *n = new Node(data);
            n->next = head->next;
            head->next =n;
        }
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
    insert_node_at_ith_pos(head,2,60);
    cout << print_linked_list(head);
}