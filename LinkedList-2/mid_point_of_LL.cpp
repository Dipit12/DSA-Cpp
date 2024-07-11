 // ** Leetcode question **

// we will solve this question using the concept of slow and fast ptr
// slow starts at the head, whereas fast starts at the head->next
//slow moves 1 step at a time, ie slow = slow->next
// fast moves 2 step at a time, ie fast = fast->next->next


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* count(Node *head){
    int count =0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    
}

int midPoint(Node *head){
    if(count % 2 ==0){
        Node *slow = head;
        Node *fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next;
        cout << slow->data << endl;
    }

    else{
        Node *slow = head;
        Node *fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data << endl;
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
    cout << midPoint(head);
}