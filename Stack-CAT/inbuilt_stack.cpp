// we need not create a class for Stack everytime we want to create a stack, C++ provides us with inbuit stack
// which we can use, whenever a stack is needed to solve a particular problem, we use the inbuilt stack

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
}