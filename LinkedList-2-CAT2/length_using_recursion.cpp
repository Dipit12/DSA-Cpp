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
        return 0;
    }
    int small_len = length(head->next);

    return small_len+1;
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

    cout << head->data << " " << n1.data << " " << n2.data << " " << n3.data << " " << n4.data << endl;
    cout << length(head);
}