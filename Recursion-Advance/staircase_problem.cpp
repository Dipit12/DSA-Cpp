#include <iostream>
using namespace std;

// no of wys to reach step N from 0, you can take a jump of 1,2,3
// if N=3; {1,1,1},{1,2},{2,1},{3} - 4 ways
// f(n) = f(n-3) + f(n-2) + f(n-1) - to remember

int count_steps(int n) {
    // base case
    if(n==0 || n==1) {
        return 1;
    }
    if(n==2) {
        return 2;
    }
    // recursive function
    return count_steps(n-1) + count_steps(n-2) + count_steps(n-3);
}

int main() {
    int n;
    cin>>n;
    cout << count_steps(n) << endl;
}