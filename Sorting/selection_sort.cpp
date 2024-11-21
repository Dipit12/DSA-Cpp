#include <iostream>
using namespace std;

void selection_sort(int arr[], int length){
    for(int i = 0; i < length-1; i++){
        int min = i;
        for(int j = i+1; j < length; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
int main(){
    int arr[] = {6,5,3,2,1,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, length);

    for(int i = 0; i< length; i++){
        cout << arr[i] << " ";
    }
}