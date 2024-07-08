// unlike arrays, in a LL, data is stored in random allocation of memory

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

int main(){
    // creating objects statically 
    Node n1(1);
    Node n2(2);
    Node n3(3);
    n1.next=&n2;
    n2.next=&n3;

    cout << n1.data << " " << n2.data << " " << n3.data << endl;
}