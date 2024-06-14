#include <iostream>
using namespace std;
// if array is {5,5,6,5,6}, then we need to print, index 2 and 4, to represent 6
void print_position(int arr[], int n, int x, int i){
    // base class
    if(i==n){
        return;
    }
    if(arr[i] == x){
         cout << i << " ";
    }

    //recursive func
    print_position(arr,n,x,i+1);
}

int main(){
    int arr[] = {5,5,6,5,6};
    print_position(arr,5,6,0);
}