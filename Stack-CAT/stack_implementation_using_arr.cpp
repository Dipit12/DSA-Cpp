// Implementing an Stack using Arrays
#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int nextIndex;
    int capacity;
    public:
        Stack(){
            capacity = 4;
            arr = new int[capacity];
            nextIndex = 0;
        }
        Stack(int cap){
            capacity = cap;
            arr = new int[capacity];
            nextIndex = 0;
        }
       // code for size function - return no of elements in stack
       int size(){
        return nextIndex;
       }
       // code for isEmpty function
       bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
       }

        // code for push function
        void push(int val){
            if(nextIndex == capacity){
                cout << "Stack is full" << endl;
                return;
            }
            arr[nextIndex] = val;
            nextIndex++;
        }

        // code for pop function
        void pop(){
            if(nextIndex == 0){
                cout << "Stack is empty" << endl;
                return;
            }
            nextIndex--;

        }
        // code for top function
        int top(){
            if(nextIndex == 0){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return  arr[nextIndex-1];
        }
};
int main(){
    Stack s(10);
    cout << s.size() << endl;;
    cout << s.isEmpty() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
}