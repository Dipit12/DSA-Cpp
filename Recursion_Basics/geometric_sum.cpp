// if k=3 ----> print 1+1/2+1/4+1/8
#include <iostream>
using namespace std;

double gsum(int k) {
    if(k==0) {
        return 1;
    }

    // recursive function
    double smallAns = gsum(k-1);

    // calculation
    double  final_ans = smallAns + double(1/(pow(2,k)));
    return final_ans;
}

int main() {
    cout << gsum(3);
}
