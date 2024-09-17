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
void print(Node *head){
    while(head != NULL){
        cout << head-> data << " ";
        head = head->next;
    }

}

Node* insert_at_ith_node(Node *head , int index, int data){
    if(index<0 || index > length(head)){
        cout << "Invalid index" << endl;
        return head;
    }
    else if(index == 0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    else{
        Node *n = new Node(data);
        for(int i = 0; i<index-1;i++){
            head = head->next;
        }
        n->next = head->next;
        head->next = n;
        return head;
    }
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

}