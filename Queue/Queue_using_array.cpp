#include <iostream>
using namespace std;
template <typename T>
class Queue{
    T *arr;
    T nextIndex;
    T firstIndex;
    T size;

    Queue(int cap){
        arr = new T[cap];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
    }
    Queue(){
        arr = new T[5];
        nextIndex = 0;
        firstIndex = -1;
        size =0;
    }
    // insert element
    void push(T ele){
        arr[nextIndex] = ele;
        nextIndex++;
    }
    // delete element
    void pop(){

    }
    int size(){
        return size;
    }
    bool isEmpty(){
        if(firstIndex == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void front(){
        return arr[firstIndex];
    }
};


int main(){

}