// deallocates memory of an object
// would have same name as class name with ~
// no return type, no input arguments
// called whenever an object is deleted
// there can be many constructors but only 1 destructor

#include <iostream>
using namespace std;

class Student{
public:
    int marks;

    Student(){
        cout << "Constructor is called " << endl;
    }

    ~Student() {
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Student *s1 = new Student;
    delete s1; // delete can only be called when object is dynamic

}