#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    for(int i=0;i<5;i++){
        if(key == arr[i]){
            cout << "Key found at position " << i << endl;
            break;
        }
        else{
            cout << "No key found" << endl;
        }
    }
}
// problem with linear search
/*
it takes n steps for linear search for sorted ans unsorted arrays, thus the time complexity is high, we want time complexity of sorted array to be logn steps
thus we use binary search, since its time complexity is n

*/
