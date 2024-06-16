#include <iostream>
using namespace std;

void print_rec(char arr[]) {
    if(arr[0] == '\0') {
        return;
    }

    cout << arr[0];
    print_rec(arr+1);
}

void print_reverse(char arr[]) {
    if(arr[0] == '\0') {
        return;
    }
    print_reverse(arr+1);
    cout << arr[0];

}

int main() {
    char arr[] = "abc";
    print_rec(arr);
    cout << endl;
    print_reverse(arr);
}