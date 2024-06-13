// recursion refers to when a function calls itself
#include <iostream>
using namespace std;

int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1);

}
int main() {
    int n;
    cin>>n;
    if(n<0) {
        return 0;
    }
    int ans = fact(n);
    cout << "The factorial of " << n<< "is " << ans << endl;
}