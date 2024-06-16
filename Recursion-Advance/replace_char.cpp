#include <iostream>
using namespace std;

// abcdab, replace a by x, return xbcdxb

void replace(char arr[]) {
    // base case
    if(arr[0] == 'a') {
        arr[0] = 'x';
    }


    if(arr[0] == '\0') {
        return;
    }

    cout << arr[0];

    replace(arr+1);
}

int main() {
    char arr[] = "abcdab";
    replace(arr);
}