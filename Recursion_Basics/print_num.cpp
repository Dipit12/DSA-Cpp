// if n=5; then print  1 2 3 4 5

#include <iostream>
using namespace std;

int print(int num) {
    // base class
    if(num==1) {
        cout << 1 << endl;
        return 1;
    }

    // recursive case
    print(num-1);

    // finalSolution
    cout << num<< endl;
}

int main() {
    print(5);
}