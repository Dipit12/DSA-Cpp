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

int convert(char arr[], int n) {
    // base case
    if(arr[0] == '\0') {
        return 0;
    }
    // recursive function
    int smallAns = convert(arr,n-1);
    int final_ans = smallAns*10 + arr[n-1] - '0';
    return final_ans;
}
int main() {
        char str[] = "12345";
        int n = length(str);
        int a = convert(str,n);
        cout << n;
    }