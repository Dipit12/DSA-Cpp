#include <iostream>
using namespace std;

template <typename T>

class Stack{
    T *arr;
    int nextIndex;
    int capacity;

    public:
        Stack(){
            capacity = 4;
            arr = new T[capacity];
            nextIndex = 0;

        }

        Stack(int cap){
            capacity = cap;
            arr = new T[capacity];
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

        void push(T element){
            if(nextIndex == capacity){
                T *newArr = new T[2 * capacity];
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
        void pop(){
            if(nextIndex ==0){
                cout << "Stack is empty" << endl;
            }
            nextIndex--;
        }

        T top(){
            if(nextIndex == 0){
                cout << "Stack is empty" << endl;
                return 0;
            }
            else{
                return arr[nextIndex-1];
            }
            
        }
};

int main(){
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;

    Stack<double> s2;
    s2.push(1.23);
    s2.push(2.34);
    s2.push(3.45);
    cout << s2.top() << endl;
    s2.pop();
    cout << s2.top() << endl;
}