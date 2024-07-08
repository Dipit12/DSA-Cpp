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
void count_elements_in_LL(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
        
    }
    cout << count << endl;
}

void print_ith_node(Node *head, int i){
    if(i==0){
        cout << head->data << endl;
    }
    else if(i<0){
        cout << "Invalid index" << endl;
    }
    else{
        for(int j=0; j<i; j++){
        head = head->next;
    }
        cout << head->data << endl;
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

    print_ith_node(head,2);
    
}