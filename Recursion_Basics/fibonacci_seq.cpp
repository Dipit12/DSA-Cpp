#include <iostream>
using namespace std;

int fib(int n) {
    // base class
    if(n==0) {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    // induction hypothesis
    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);

    // induction
    return smallOutput1+smallOutput2;
}

int main() {
    int n;
    cout << "Enter the number " << endl;
    cin>>n;

    int ans = fib(n);
    cout << "Fibonacci number on " << n <<"index is " << ans << endl;

}