
// in copy constructor, an object is passed as an argument to the constructor.
// constructor is a special member function with the same name as of the class.
// It is used to initialize the object of a class.
// constructor is invoked automatically when an object of a class is created.
// there is an default constructor, which is invoked when the object is created without any arguments, once we create our
// own constructor, the default constructor becomed void, constructor has no return type
#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    int marks;
    char name[100];

public:
    void getMarks() {
        cout << "Your marks are" << marks << endl;
    }

    void getName() {
        cout << "Name is " << name;
    }

    void setMarks(int marks) {
        this-> marks = marks;
    }

    void setName(char name[100]) {
        strcpy(this-> name, name);
    }

    Student() {
        cout << "Constructor called " << endl;
    }
    Student(int marks, char name[100]) {
        setMarks(marks); getMarks(); setName(name); getName();

    }
};

int main() {
    Student s1(100,"Dipit");
    Student s2(s1); // passing objects as a parameter
    cout << endl;
    s2.getMarks();
    s2.getName();
}