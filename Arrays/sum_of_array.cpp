#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) {
        cout << "Enter the value" << endl;
        cin>>arr[i];
    }
    // sum of array
    int sum =0;
    for(int j=0; j<n;j++) {
        sum += arr[j];
    }
    cout << "Sum is " << sum<< endl;
}