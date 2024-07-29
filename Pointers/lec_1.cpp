#include <iostream>
using namespace std;

int main(){
    // address operator -> &
    int num = 5;
    cout << "address of num is " << &num << endl;
    int *ptr = &num;
    cout << "address of num is " << ptr << endl;
    cout << "value of num is " << *ptr << endl;

    // num and *ptr point towards the same value
    cout << "Address of the pointer is " << &ptr << endl;
    // int ptr1 = &num; -> would give an error
    // cout << ptr1 << endl;
    cout << "size of num is " << sizeof(num) << endl; // would return 4
    cout << "size of ptr is " << sizeof(ptr) << endl; // would return 8 -> an pointer always takes 8 bytes, irrespective of the data type
    (*ptr)++;
    cout << "value of num is " << num << endl;

    int *q = ptr; // copying a pointer
    cout << ptr << "-----" << q << endl;
    cout << *ptr << "-----" << *q << endl;
    
    // Pointer Arithematic
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl; // would print 3 and then it's value would be 4
    cout << (*t) << endl;
    cout << ++(*t) << endl; // would print 5 directly;
}