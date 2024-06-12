// static keyword creates an data member that belongs to class
// no need to create an object to access the data member

// syntax to initialize it: datatype class_name :: data_member_name = value;

// no need to create object to call static function
// can access only static members

#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int roll_no;
    static int total_students; // this property belongs to the whole class rather than to a object
    static int getTotalStudents(){
        return total_students;
    }
    Student() {
        total_students++;
    }
};

int Student :: total_students = 0;

int main() {
    Student s1,s2,s3,s4,s5;
    cout << Student :: total_students << endl; // no need to create an object to access totalStudent
    // would print 5, since 5 obj have been created and value of totalStudents is incremented by 1

    cout << Student :: getTotalStudents() << endl;

}