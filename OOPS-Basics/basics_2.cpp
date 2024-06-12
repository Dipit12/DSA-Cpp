/*
There are 3 types of access modifiers in C++:
1. Public
2. Private - by default
3. Protected
Under the public access modifier, we can access the data members and member functions of the class from
anywhere in the program.

Under the Private access modifier, we can access the data members and member functions of the class only from
the class itself.

Under the protected access modifier, we can access the data members and member functions of the class only from
the class itself and its derived classes.
 */
#include <iostream>
#include <cstring>
#include "student.cpp" // used to include the another cpp file in our program
using namespace std;

int main() {
    Student s1; // creation of objects statically
    s1.age = 13;
    s1.roll_no = 1;

    // creating objects dynamically
    Student *s2 = new Student;
    s2->age = 80;
    s2->roll_no = 3;
    strcpy((*s2).name,"Dipit");

    cout << "Age is " << s2->age << endl;
    cout << "Roll number is " << s2->roll_no << endl;
    cout << "The name is " << (*s2).name << endl;
}