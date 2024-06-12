#include <iostream>
using namespace std;

int main(){
    int a= 5;
    int b = 10;
    cout << "a is" << a << "and b is" << b << endl;
    int temp;
    // swapping logic
    temp = a;
    a=b;
    b = temp;
    cout << "a is" << a << "and b is" << b << endl;

    // swapping using XOR bitwise operator
    int c = 5;
    int d = 7;
    c  = c^d;
    d = c^d;
    c = c^d;
    cout << "value of c and d is" << c << d<< endl;
    // using the swap function
    swap(a,b);
    cout << "a is" << a << "and b is" << b << endl;
}
