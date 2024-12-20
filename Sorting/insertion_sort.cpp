#include <iostream>
using namespace std;


void insertion_sort(int a[], int length){
    for(int i = 1; i < length; i++){
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
}

int main(){
    int a[]  = {8,2,7,4,5,1,9,3};
    int length = sizeof(a)/sizeof(a[0]);

    insertion_sort(a, length);

    for(int i = 0; i < length; i++){
        cout << a[i] << " ";
    }
}