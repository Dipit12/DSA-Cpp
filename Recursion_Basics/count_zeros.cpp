#include <iostream>
using namespace std;

int count_zeros(int n) {
    if(n==0) {
        return 0;
    }
    // recursive function
    int small_ans = count_zeros(n/10);

    // calculation
    int last_digit = n%10;
    if(last_digit==0) {
        return small_ans+1;
    }
    else {
        return small_ans;
    }
}
int main() {
    cout << count_zeros(103045);
}