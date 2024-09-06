// Input would be a string
// Only valid strings are -> { } [ ] ( )
// if input is () - output should be true
// if input is ()[]{} - output shoule be true
// if input is (} - output would be false
// {[]} - true
// ([)] - false;

class Solution {
public:
    bool isValid(string a) {
        stack <char> s;
        for(int i=0;i<a.size();i++){
            if(a[i] == '(' || a[i] == '{' || a[i]=='['){
                s.push(a[i]);
            }
            else{
                if(s.empty()){
                    return false;
                
                }
                else if(a[i] == ')'){
                    if(s.top() == '('){
                        s.pop();
                    }
                    else return false;
                }
                else if(a[i] == '}'){
                    if(s.top() == '{'){
                        s.pop();
                    }
                    else return false;
                }
                else if(a[i] == ']'){
                    if(s.top() == '['){
                        s.pop();
                    }
                    else return false;
                }
            }
        }
        if(s.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};