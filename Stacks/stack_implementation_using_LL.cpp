// Implementing Stack using linkedlist

#include <iostream>
using namespace std;
template <typename T>
class Node{
    T data;
    Node<T> *next;
    public:
        Node(T data){
            this->data = data;
            next = NULL;
        }
};

template <typename T>
class Stack{
    Node<T> *head;
    int size;
    public:
        Stack(){
            head = NULL;
            size = 0;
        }
        int getSize(){
            return size;
        }

        bool isEmpty(){
            if(head == NULL){
                return true;
            }
            else{
                return false;
            }
        }
        void push(T element){
            
        }

        void pop(){}


        T top(){}
};

int main(){
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    s1.size();
    s1.isEmpty();
}