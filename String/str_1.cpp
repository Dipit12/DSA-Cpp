#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // creating string statically
    string s = "abc";
    cout << s << endl;

    string s2;
    s2 = "def";
    cout << s2 << endl;

    // creating strings dynamically
    string *sp = new string;
    *sp = "mno";
    cout << sp << endl; // to print the addres
    cout << *sp << endl; // to print the string

    // to create a 2D array of string
    vector <string> v;
    v.push_back(s);
    v.push_back("hello");
    for(int i=0;i<v.size();i++) {
        cout << v[i] << endl;
        sort(v[i].begin(),v[i].end());
        cout << v[i] << endl;
    }
    // taking input from user
    string s3;
    getline(cin,s3); // to take input containing whitespace
    cout << s3 << endl;
    s3 = "abcabc"; // like arrays strings can also be sliced
    cout << s3[0] << endl;
    s3[0] = 'd'; // changing values of a string
    cout << s3[0] << endl;

    string s4 = s + s3; // concatenation of string
    cout << "Concatenated string is " << s4 << endl;

    string s5 = "";
    s5 += s4+s;
    cout << s5 << endl;
    // to find out the size of the string
    cout << s5.size() << endl;
    // substring - to return the string from the given index to the last index
    cout << s5.substr(3) << endl;
    cout << s5.substr(3,4) << endl; // would give u 4 char starting from index 3

    // find function
    cout << s5.find("cab") << endl; // would return the index where cab is present
    cout << s5.find("dbca") << endl;
    // typecasting using to_string()

    int a = 123;
    string s6 = to_string(a);
    cout << s6 << endl;
    s6[0] = '3';
    cout << s6 << endl;

}