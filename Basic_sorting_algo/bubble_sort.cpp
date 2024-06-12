#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
    // getting the array ready
    cout << "Enter the value of n " << endl;
    cin >> n;
    cout << "Enter the values of array" << endl;
    for(int i =0; i<n;i++) {
        cin >> arr[i];
    }

    // bubble sort(ascending order)
    for(int i=0;i<n;i++) {
        for(int j = i+1;j<n;j++) {
            if(arr[i] > arr[j]) { // for descending order arr[i] < arr[j]
                swap(arr[i],arr[j]);
            }
        }
    }

    // printing out the sorted array
    for(int k = 0; k<n;k++) {
        cout << arr[k] << " ";
    }
}