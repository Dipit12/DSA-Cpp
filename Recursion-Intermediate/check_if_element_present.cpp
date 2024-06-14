#include <iostream>
using namespace std;

bool element_present(int arr[], int n, int x) {

    // base case
    if(n==0) {
        return false;
    }
    if(arr[0] == x) {
        return true;
    }

    // recurive function
    return element_present(arr+1,n-1,x);

int main() {
    int arr[5] = {1,2,3,4,5};
    if(element_present(arr,5,3)) {
        cout << "found" << endl;
    }
    else {
        cout << "not found" << endl;
    }
    return 0;
}