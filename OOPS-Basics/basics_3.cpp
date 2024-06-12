#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    int roll_no;

private:
    char name[100];
    int age;
public:
    void set_name(char name[100]) {
        strcpy(this->name,name);
    }
    void get_name() {
        cout << name << endl;
    }

    int set_age(int age) {
        this->age = age;
    }
    void get_age() {
        cout << age << endl;
    }
};

int main() {
    Student s1;
    s1.set_name("Dipit");
    s1.get_name();

    s1.set_age(14);
    s1.get_age();

    Student *s2 = new Student;
    (*s2).set_age(13);
    (*s2).set_name("Shuchita");
    (*s2).get_name();
    (*s2).get_age();
}