#include <iostream>
using namespace std;

int main() {
    // for example we create a char array of size 5, then we can only store 4 characters since 1 space is reserved for null character
    char input[4];
    cout << "try entering a 4 charcater string" << endl; // the program may break or may not break
    // this is the limitation of the cin function
    // another limitation of cin is that it stops taking input after it encounters a sapce or a tab
    cin >> input;
    cout << input << endl;

    // to resolve the limitations of cin, we use a inbuilt function called cin.getline()
    // cin.getline(string_name,len)
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // to clear the buffer
    char name[100];
    cout << "Enter your name" << endl;
    cin.getline(name,100);
    cout << "Your name is " << name<< endl;
    return 0;
}