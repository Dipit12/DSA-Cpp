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

int length(Node *head){
    if(head == NULL){
        return 0;
    }
    int small_len = length(head->next);

    return small_len+1;
}
Node *remove_kth_node_from_end(Node *head, int k){
    Node *one = head;
    Node *two = head;

    while(k--){
        two = two->next;
    }
    if(two == NULL){
        return one->next;
    }
    while(two->next != NULL){
        one = one->next;
        two = two->next;

        // deleting the kth node
        one->next = one->next->next;

    }
    return head;
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

    // removing the kth node from end
    // kth node from end  = (n-k+1)th node from start
   remove_kth_node_from_end(head,2);
   print_LL(head);
}