#include <iostream>
using namespace std;
// if the array is {1,2,3,3,4} and we have to find 3 them return index 2 rather than 2 ans 3

int first_index(int arr[], int n, int x) {
    // base case
    if(n==0) {
        return -1; // indicates element is not present
    }
    if(arr[0] == x) {
        return 0; // to indicate element is present
    }
    return first_index(arr+1,n-1,x);
}

int main() {
    int arr[] = {1,2,3,4,5};
    cout << first_index(arr,5,40);
}