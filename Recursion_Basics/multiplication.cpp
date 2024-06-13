#include <iostream>
using namespace std;

int multiplication(int m , int n) {
    // base class
    if(n==0) {
        return 0;
    }
    // recursive function
    int small_ans = multiplication(m,n-1);
    // calculation
    int final_ans = m+ small_ans;
    return final_ans;
}

int main() {
    cout << multiplication(6,3);
}