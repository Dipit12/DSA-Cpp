#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;

    for(int j = l; j<r;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr,i, j)
        }
    }
    swap(arr,i+1,r);
    return (i+1);
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quicSort(arr, pi+1,r);
    }
}

int main(){
    int arr[] = {45,241,31,13,34};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size_arr-1);
    for(int i=0;i<size_arr;i++){
        cout<<arr[i]<<" ";
    }
    return 0;   
}