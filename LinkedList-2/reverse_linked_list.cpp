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

void reverse_linked_list(Node *head){
    for(int i=NULL; i>0; i--){
        cout << head->data << endl;
        head = head->next;
    }
    
}