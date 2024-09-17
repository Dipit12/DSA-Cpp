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

void print_ith_node(Node *head , int index){
    if(index > length(head)-1 || index < 0){
        cout << "Invalid index" << endl;
    }
    else if(index == 0){
        cout << head->data << endl;
        
    }
    else{
        Node *temp = head;
        for(int i =0; i<index;i++){
            temp = temp->next;
            
        }
        cout << temp->data << endl;
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

    print_ith_node(head,3);
}