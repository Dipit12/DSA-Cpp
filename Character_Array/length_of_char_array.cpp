#include <iostream>
using namespace std;

int length(char input[]) {

    int length = 0;
    for(int i=0; input[i]!='\0';i++) {
        length++;
    }
    return length;
}
int main() {
    char name[100];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is" << name << endl;
    cout << length(name) << endl;
}