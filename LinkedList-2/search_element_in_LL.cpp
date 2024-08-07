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
bool find_element(Node *head,int data){
    while(head != NULL){
        if(head->data == data){
            return true;
        }
        head = head->next;
    }
    return false;

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
    cout << find_element(head,4);
}