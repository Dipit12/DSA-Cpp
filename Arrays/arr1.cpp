/*
An array is a collection of data items stored at contiguous memory locations.
The idea is to store multiple items of the same type together.
This makes it easier to calculate the position of each element by simply adding an offset to a base value,
 i.e., the memory location of the first element of the array (generally denoted by the name of the array).
 */
#include <iostream>
using namespace std;

int main(){
    int arr[5]; // declaration of an array
    arr[0] = 1;
    arr[1] = 2;
    arr[2] =3;
    arr[3] = 4;
    arr[4] = 5;

    cout << "First element in the array is" << arr[0] << endl;

    int arr1[5] = {11,22,33,44,55}; // declaration and initialization of an array
    for(int i=0;i<5;i++){
        cout << arr1[i] << ' '<< endl;
    }

    int arr2[10] = {1,2,3,4}; // here the array can store 10 elements but we have intialized only 4 values, so the other 6 values would be filled with 0
    for(int j=0;j<10;j++){
        cout << arr2[j] << endl;
    }

    int arr3[5];
    for(int k=0; k<5;k++){
        arr3[k] = k*k;
        cout << arr3[k] << endl;
    }
    // cannot create an array without specifying a size ie arr[] is not possible
    int a;
    cout << sizeof(a) << endl;  // would print 4 since an integer takes 4 bytes
    int d[10];
    cout << sizeof(d) << endl; // would print 40

    // trick question
    int g[10] = {1,2,3}; // what would be the size of the array 12 or 40
    cout << sizeof(g) << endl; // would obviously print 40
}