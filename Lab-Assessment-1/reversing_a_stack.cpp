// Reverse elements of an stack using another stack

#include <iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int capacity;
    int nextIndex;

    Stack(){
        capacity = 5;
        arr = new int[capacity];
        nextIndex = 0;
    }
    
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        nextIndex = 0;
    }
    
    void push(int data){
        if(nextIndex == capacity){
            cout << "Stack overflow" << endl;
        }else{
            arr[nextIndex] = data;
            nextIndex++;
        }
    }
    
    void pop(){
        if(nextIndex == 0){
            cout << "Stack is empty" << endl;
        }else{
            nextIndex--;
        }
    }
    int peek(){
        if(nextIndex == 0){
            cout << "Stack is empty" << endl;
            return 0;
        }else{
            return arr[nextIndex-1];
        }
    }
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Stack *s1 = new Stack();
    Stack *s2 = new Stack();
    int value;
    // taking in the input
    for(int i = 0; i< s1->capacity; i++){
        cout << "Enter the value" << endl;
        cin>>value;
        s1->push(value);
    }
    // // printing the stack
    // while(s1->isEmpty() == false){
    //     cout << s1->peek() << " ";
    //     s1->pop();
    // }
    // reversing the stack using another stack
    while(s1->isEmpty() == false){
        s2->push(s1->peek());
        s1->pop();
    }
    while(s2->isEmpty() == false){
        cout << s2->peek() << " ";
        s2->pop();
    }
    
}