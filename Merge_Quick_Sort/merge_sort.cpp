// very fast sorting technique that follows the idea of recursion

#include <iostream>
#include <algorithm>
using namespace std;

void merge_arrays(int x[], int y[], int arr[], int s, int e) {
    int mid = (s+e)/2;
    int i=s;
    int j = mid+1;
    int k = s;
    while(i<=mid && j<=e) {
        if(x[i] < y[j]) {
            arr[k] = x[i];
            i++;
            k++;
        }
        else {
            arr[k] = y[j];
            j++;
            k++;
        }
    }
    while(i<=mid) {
        arr[k] = x[i];
        k++;
        i++;
    }
    while(j<=e) {
        arr[k] = y[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[], int s ,int e) {
    // if length = 0, then s>e ; and length =1, then s=e
    // base case
    if(s>=e) {
        return;
    }
    int mid  = (s+e)/2;
    int x[100];
    int y[100];

    for(int i=0; i<=mid;i++) {
        x[i] = arr[i];
    }

    for(int j=mid+1;j<=e;j++) {
        y[j] = arr[j];
    }
    merge_sort(x,s,mid);
    merge_sort(y,mid+1,e);

    merge_arrays(x,y,arr,s,e);
}

int main() {
    int arr[] = {5,7,4,1,2};
    merge_sort(arr,0,4);

    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
}