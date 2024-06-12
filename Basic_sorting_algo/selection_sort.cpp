#include <iostream>
using namespace std;

void selection_sort(int a[], int n) {

    for(int i=0; i<=n-2;i++) {
        int smallest = i;
        for(int j= i+1; j<=n-1;j++) {
            if(a[j]< a[smallest]) {
                smallest = j;
            }
        }
        if(a[i] > smallest) {
            swap(a[i],a[smallest]);
        }
    }
}

int main() {
    int n;
    int arr[n];
    cout << "Enter the size of the array" << endl;
    cin>>n;
    // take in the array
    cout << "Enter the array elements" << endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // sort the array
    selection_sort(arr,n);

    // print the sorted array
    for(int i=0; i<n;i++) {
        cout << arr[i] << " ";
    }
}