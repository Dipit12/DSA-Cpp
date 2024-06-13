// to calculate x^n
#include <iostream>
#include <cmath>
using namespace std;
int power(int x, int n) {
   // base class
   if(n==0) {
      return 1;
   }
   else if(n==1) {
      return x;
   }
   // induction-hypothesis
   int smallOutput = power(x,n-1);
   // induction
   return x*smallOutput;
}

int main() {
   cout << power(3,4);
}