// finding out factorial of a number by principle of mathematical induction
#include <iostream>
using namespace std;

int fact(int n) {
    // base class
    if(n==0 || n==1) {
        return 1;
    }
    // induction hypothesis
    int smallAns = fact(n-1);
    // induction
    int ans = n* smallAns;
    cout << "Factorial of " << n << "is" << ans;
}


int main() {
    fact(4);
}