#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /*
     Input: abcd
     Output:
         a
         ab
         abc
         abcd
    */
    char str[100];
    cout << "Enter a string " << endl;
    cin.getline(str,100);
    char str2 = str[0];
    for(int i=0; str[i] != '\0';i++) {
        for(int j=0; j<=i;j++) {
            cout << str[j]<<endl;
        }
        cout << endl;
    }
}