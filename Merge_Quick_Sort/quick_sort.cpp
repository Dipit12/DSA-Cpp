#include <iostream>
using namespace std;

// quick sort also, like merge sort is based on recursion and it's as fast as merge sort
int partition(int arr[], int s, int e) {
    int i=s;
    int pivot = arr[e];
    for(int j=s;j<=e-1;j++) {
        if(arr[j]<pivot) {
            swap(arr[i],arr[j]);
            i++;

        }
    }
    swap(arr[i],arr[e]);
    return i;
}

void quick_sort(int arr[], int s, int e) {
    // base case
    if(s>=e) {
        return;
    }
    int p = partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);
}

int main() {
    int arr[] = {1,2,4,3,1};
    quick_sort(arr,0,4);

    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
}