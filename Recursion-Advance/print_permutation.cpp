#include <iostream>
using namespace std;

void permutation(char arr[], int i) {
    // base case
    if(arr[0] == '\0') {
        cout << arr << endl;
        return;
    }
    for(int j =0; arr[j] != '\0'; j++) {
        swap(arr[i],arr[j]);
        permutation(arr,i+1);
        swap(arr[i],arr[j]);
    }
}

int main() {
    char arr[] = "ABC";
    permutation(arr,0);
}