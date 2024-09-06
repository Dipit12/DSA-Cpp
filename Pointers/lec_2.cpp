#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout << "Address of arr[0] is " << &arr[0] << endl;
    cout << "Address of arr is " << arr << endl; // both would give the same result, address of first element of the array represents the address of the whole array
    arr ={1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr;
    cout << *ptr << endl;
}