#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin>>n;
    int arr[n];
    int max_value = arr[0];
    // array of size n to take input
    for(int i=0;i<n;i++) {
        cout << "Enter the value" << endl;
        cin >> arr[i];
    }
    for(int i=1; i<n;i++) {
        if(arr[i]>max_value) {
            max_value = arr[i];
        }
    }
    cout << "Greatest element in the array is" << max_value << endl;

}