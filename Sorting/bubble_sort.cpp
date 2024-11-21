// bubble sort code

#include <iostream>
using namespace std;

int main(){
    int arr[] = {45,241,31,13,34};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i< size_arr; i++){
        for(int j = i+1; j < size_arr; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    // printing the sorted array
    for(int i = 0; i<size_arr; i++){
        cout << arr[i] << " ";
    }
}
