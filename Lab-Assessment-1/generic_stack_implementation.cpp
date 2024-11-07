// implement a stack for Strings
#include <iostream>
#include <string>
using namespace std;
template <typename T>

class Stack{
    T *arr;
    int nextIndex;
    int capacity;
public:    
    Stack(){
        capacity = 5;
        arr = new T[capacity];
        nextIndex = 0;
    }
    Stack(T data){
        this->data =data;
        arr = new T[capacity];
        nextIndex = 0;
    }
    
    void pop(){
        if(nextIndex == 0){
            cout << "Stack is empty" << endl;
        }else{
            nextIndex--;
        }
    }
    void push(T data){
        if(nextIndex == capacity){
            cout << "Stack overflow condition" << endl;
        }else{
            arr[nextIndex] = data;
            nextIndex++;
        }
    }
    T peek(){
         if(nextIndex == 0){
            cout << "Stack is empty" << endl;
            return T();
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
    
    bool isFull(){
        if(nextIndex == capacity){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack<int> *s1 = new Stack<int>();
    s1->push(1);
    cout << s1->peek();
}