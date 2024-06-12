#include <iostream>
#include <cstring>
using namespace std;

class Student {
int age;
char *name;
public:
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
int main() {
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();

    name[3] = 'e';
    Student s2(30,name);
    s2.display();
    return 0;

    s1.display(); // shallow copy- here we copy the address of the array rather than the whole array

}