#include <iostream>
using namespace std;

class Student {
public:
    int marks;
    char name[100];

    void getMarks() {
        cout << "Your marks are " << marks << endl;
    }

    void getName() {
        cout << "Your name is " << marks << endl;
    }

    Student(int marks, char name[100]) {
        this->marks = marks;
        strcpy(this->name,name);
        getMarks();
        getName();
    }
};

int main() {
    Student s1(100,"Dipit");
    Student s2(90,"Tithi");
    s2 = s1; // assignment operator
    s2.getMarks();
    s2.getName();
}