#include <iostream>
using namespace std;

bool check_palindrome(int arr[], int s, int e) {
    // base case
    if( s >  e) {
        return true ; // empty arrays are palindrome
    }

    if(arr[s]==arr[e]) {
      return  check_palindrome(arr,s+1,e-1);
    }
    else {
        return false;
    }
}
int main() {
    int arr[] = {1,2,1,};
    cout << check_palindrome(arr,0,2);

}