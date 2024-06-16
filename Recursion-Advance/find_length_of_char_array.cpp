#include <iostream>
using namespace std;

int length(char arr[]) {
    if(arr[0] == '\0') {
        return 0;
    }
    // recusrive function
   int small_length =   length(arr+1);
    return 1+small_length;
}

int main() {
    char arr[] = "abcd";

    int l= length(arr);
    cout << l << endl;
}