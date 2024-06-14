#include <iostream>
using namespace std;
// if array is{5,5,6,5,6} return index 3
int last_index(int arr[], int n, int x, int i){
    // base case
    if(arr[i] == x) {
        return i;
    }
    if(n==0) {
        return -1; // element not found
    }
    return last_index(arr,n-1,x,i-1);
}

int main(){
    int arr[] = {5,5,6,5,6};
    cout << last_index(arr,5,6,4);
}