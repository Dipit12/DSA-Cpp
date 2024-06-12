#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // strlen function - to find length of the string
    char str1[100];
    cout << "Enter a string" << endl;
    cin.getline(str1,100);
    int len = strlen(str1);
    cout << "Length of the string is " << len << endl;
    // strcmp - to compare 2 strings, would take in 2 strings
    char str2[100];
    cout << "Enter the 2nd string" << endl;
    cin.getline(str2,100);
    if(strcmp(str1,str2)==0) {
        cout << "Both are same" << endl;
    }
    else {
        cout << "Different strings" << endl;
    }

    //strcpy - strcpy(b,a) - would copy content of a to b
    char str3[100];
    strcpy(str3,str1);
    cout << "The third string is " << str3 << endl;

    // strncpy(b,a,n) - would copy n characters of a to b
    char str4[100];
    strncpy(str4,str2,3);
    cout << "String 4 is " << str4 << endl;

    //strcat - would take 2 strings as input, would concatenate contennt of string 2 to 1
    char str5[10] = "dipit";
    char str6[10] ="madan";
    strcat(str5,str6);
    cout << str5 << endl;
}