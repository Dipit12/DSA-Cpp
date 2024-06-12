/*
// constructor is a special member function with the same name as of the class.
It is used to initialize the object of a class.
// constructor is invoked automatically when an object of a class is created.
// there is an default constructor, which is invoked when the object is created without
any arguments, once we create our own
constructor, the default constructor becomed void, constructor has no return type
 */

#include <iostream>
using namespace std;

class Student {
public:
  int age;
  char name[50];
  Student() { // default constructor
      cout << "Hello" << endl; // func would be called whenever a object is called
  }

  Student(int age, char name[50]) { // parametrized constructor
      this -> age = age;
      strcpy(this->name,name);
      cout << "Your age is " << age << endl;
      cout << "Your name is " << name << endl;


  }
};
int main() {
    Student s1; // would print Hello
    Student s2(12,"Dipit");
}