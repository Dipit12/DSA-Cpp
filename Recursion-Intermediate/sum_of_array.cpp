#include <iostream>
using namespace std;

int sum_of_array(int arr[], int n) {
    // base case
    if(n==0) {
        return 0;
    }
    // recurive function
    int smallAns = sum_of_array(arr+1,n-1);

    // final ans
    int final_ans = arr[0] + smallAns;
    return final_ans;
}

int main() {
    int arr []= {1,2,3,3,5};
    cout << sum_of_array(arr,5);
}