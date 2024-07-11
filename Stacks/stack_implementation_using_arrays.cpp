#include <iostream>
using namespace std;

class Stack{
   int *arr;
   int nextIndex;
   int capacity;
   public:
        Stack(){
            capacity = 5;
            arr = new int[capacity];
            nextIndex = 0;
        }
        Stack(int cap){
            capacity = cap;
            arr = new int(capacity);
            nextIndex = 0;
        } 

        int size(){
            return nextIndex;
        }
        bool isEmpty(){
            if(nextIndex == 0){
                return true;
            }
            else{
                return false;
            }
        } 

        void push(int element){
            if(nextIndex==capacity){
                cout<<"Stack overflow"<<endl;
                return;
            }
            else{
                arr[nextIndex]=element;
                nextIndex++;
            }
        }

        void pop(){
            if(nextIndex ==0){
                cout << "Stack is empty" << endl;
            }
            nextIndex--;
        }

        int top(){
            if(nextIndex == 0){
                cout << "Stack is empty" << endl;
                return -1;
            }
            else{
                return arr[nextIndex-1];
            }
            
        }
};

int main(){
    Stack s(6);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    // Creating another stack and printing is elements
    Stack s2(10);
    for(int i=0;i<10;i++){
        s2.push(i);
    }
    // printing the stack
    while(s2.isEmpty() == false){
        cout << s2.top()<< endl;
        s2.pop();
    }
}