
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

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp->next;
    }

}

Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL; // LL is empty
    Node *tail = NULL; // LL is empty
    while(data != -1){
        // creating LL
        Node *newNode = new Node(data);
        cin>>data;
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}
int main(){
    Node* head = takeInput();
    print(head);
}