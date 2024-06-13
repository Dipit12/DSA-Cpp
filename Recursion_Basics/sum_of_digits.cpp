#include <iostream>
using namespace std;

int sum_of_digits(int n){
    if(n == 0){
        return 0;
    }
    // recursive function

    int small_ans = sum_of_digits(n/10);

    // calculation part
    int last_digit = n%10;
    return small_ans + last_digit;
}

int main(){
    cout << sum_of_digits(12345);
}