#include <iostream>
using namespace std;

int main() {
    char arr[] = "Hello"; // Input character array
    int start = 0;
    int end = sizeof(arr) / sizeof(char) - 2; // Size of the array - 1 (excluding null terminator)

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << arr << endl;

    return 0;
}