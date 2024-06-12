// to include the inbuilt sort function, we need to include he algorithm header
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4,3,5,6,1};
    sort(arr,arr+5);

    // printing the sorted array
    for(int i=0;i<5;i++) {
        cout << arr[i] << " ";
    }
}