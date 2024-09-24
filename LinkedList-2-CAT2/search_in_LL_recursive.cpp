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

bool isPresent(Node *head, int target){
    if(head == NULL){
        return false;
    }
    if(head->data == target){
        return true;
    }
     return isPresent(head->next,target);

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

    if(isPresent(head,2)){
        cout << "Present" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

    if(isPresent(head,7)){
        cout << "Present" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
}