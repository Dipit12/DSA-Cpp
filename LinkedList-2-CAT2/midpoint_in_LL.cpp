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
    int count = 0;
    while(head!= NULL){
        count++;
        head = head->next;
    }
    return count;
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
    if( (length(head)) % 2 == 0){
        int middle_index = length(head)/2 + 1;
        for(int i = 0; i<middle_index;i++){
            head = head->next;
        }
        int middle_element = head->data;
        cout << middle_element;
    }
    else{
        int middleIndex = length(head+1)/2;
        for(int i = 0; i<middleIndex;i++){
            head = head->next;
        }
        int middle_element = head->data;
        cout << middle_element;
    }
}