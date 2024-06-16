#include <iostream>
using namespace std;

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

void printSteps(int n, char s, char d, char h) {
    if(n==0) {
        return ;
    }
    printSteps(n-1,s,h,d);
    cout << "Moving disk " << n << "from " << s << "to " << d << endl;
    printSteps(n-1,h,d,s);
}

int main() {
    int n;
    cin>>n;
    cout << num_steps(n);
    printSteps(n,'a','c','b');
}