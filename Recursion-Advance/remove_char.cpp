#include <iostream>
using namespace std;

// if input is abcdabef, and if we want to remove a, print bcdef

void remove(char arr[]) {
    // base case

    if(arr[0] == '\0') {
        return;
    }
    if(arr[0] != 'a') {
        remove(arr+1);
    }
    else {
        for(int i=0;arr[i] != '\0'; i++) {
            arr[i] = arr[i+1];
        }
        remove(arr);
    }
}
int main() {
    char arr[] = "abcdabef";
    remove(arr);
    cout << arr << endl;
}