#include <iostream>
using namespace std;
// 3 types of towers, source,helper and destination
// goal is to put all disk at source to the destination, with the help of helper
// no of ways is 2^n-1 - mathematical soln

int num_steps(int n) {
    // base case
    if(n==0) {
        return 0;
    }

    if(n==1) {
        return 1;
    }
    // recursive function
    int smallAns = num_steps(n-1) + num_steps(n-1);
    int final_ans = smallAns +1;
    return final_ans;
}
int main() {
    int n;
    cin>>n;
    cout << num_steps(n);
}