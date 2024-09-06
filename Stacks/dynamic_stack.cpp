// problem with stack is the size constraint
// thus we can create an dynamic array

#include <iostream>
using namespace std;

class Stack{
   int nextIndex;
   int *arr;
   int capacity;

   public:
        Stack(){
            capacity = 4;
            nextIndex = 0;
            arr = new int[capacity];
        } 

        Stack(int cap){
            capacity = cap;
            nextIndex = 0;
            arr = new int[capacity];
        }

        void push(int element){
            if(nextIndex == capacity){
                int *newArr = new int[2 * capacity];
                for(int i=0;i<capacity;i++){
                    newArr[i] = arr[i];
                }
                delete []arr;
                arr = newArr;
                capacity *= 2;
            }
            arr[nextIndex] = element;
            nextIndex++;
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
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    cout << s1.top() << endl; // would print 70, since size of stack got doubled and capacity is 8
}