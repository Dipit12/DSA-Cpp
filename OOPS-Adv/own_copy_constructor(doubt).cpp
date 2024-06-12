#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int age;

public:
    char *name;

    Student(Student s) {
        this-> age = s.age;
      //  this->name = s.name;,//shallow copy, code for inbuilt copy constructor
        this->name = new char[strlen(name)+1];
        strcpy(this->name, s.name);

    }
    Student(int age, char *name) {
        this->age = age;
        //this -> name = name; // shallow copy
        this -> name = new char[strlen(name)+1];
        strcpy(this->name,name); // deep copy
    }
    void display() {
        cout << name << " " << age << endl;
    }
};

int main(){
char name[] = "abcd";
Student s1(20,name);
s1.display();

Student s2(s1);
s2.name[0] = 'x';
s1.display();
s2.display();
}