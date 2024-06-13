#include <iostream>
using namespace std;
// if input is 4025, print 5 , if input is 125, print 3
/* - solving the ques using while loop
int count_digits(int num) {
    int count = 0;
    while(num>=1) {
        num = num / 10;
        count++;
    }
    cout << count << endl;
}
int main() {
    count_digits(45645);
}
*/

int count(int n) {
    // base class
    if(n==0) {
        return 0;
    }
    // recursive case
    int smallAns = count(n/10);

    // calculation
    return smallAns+1;
}
int main() {
    cout << count(4532) << endl;
}