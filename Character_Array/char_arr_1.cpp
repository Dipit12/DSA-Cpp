#include <iostream>
using namespace std;
int main() {
    char name[100];
    cout << "Enter your name" << endl;
    cin>>name;
    cout << "Your name is " << name << endl;
    cout<<"First character of array is " << name[0] << endl;
    cout << name[5] << endl; // to print the null character

    char str[10];
    str[4] = 'A';
    cout << "Enter a string of 3 characters" << endl;
    cin>>str;
    cout << str << endl; // if the input is ABC then the output would be ABC and not ABCA since after C at index 3 there's a null char

    str[3] = 'E';
    cout << str << endl;  // now the output is ABCEA
}