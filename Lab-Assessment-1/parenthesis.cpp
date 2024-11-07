#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidParenthesis(string a) {
    stack<char> s;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '(' || a[i] == '{' || a[i] == '[') {
            s.push(a[i]);
        } else {
            if(s.empty()) {
                return false;
            } else if(a[i] == ')') {
                if(s.top() == '(') {
                    s.pop();
                } else {
                    return false;
                }
            } else if(a[i] == '}') {
                if(s.top() == '{') {
                    s.pop();
                } else {
                    return false;
                }
            } else if(a[i] == ']') {
                if(s.top() == '[') {
                    s.pop();
                } else {
                    return false;
                }
            }
        }
    }
    
    // Check if the stack is empty at the end
    return s.empty();
}

int main() {
    cout << isValidParenthesis("[()]{}{[()()]()}") << endl; // Expected output: 1 (true)
    cout << isValidParenthesis("[(])") << endl;              // Expected output: 0 (false)
}
