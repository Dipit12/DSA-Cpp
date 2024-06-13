#include <iostream>
using namespace std;

bool array_sorted(int arr[], int n) {
    // base case
    if(n==0 || n==1) {
        return true;
    }
    if(arr[0]>arr[1]) return false;

    // recursive function
    bool isSmallerSorted = array_sorted(arr+1,n-1);
    return isSmallerSorted;
}

int main() {
    int arr[] = {1,2,3,4,5};
    if(array_sorted(arr,5)) {
        cout << "Sorted" << endl;
    }
    else {
        cout << "Not sorted" << endl;
    }
}