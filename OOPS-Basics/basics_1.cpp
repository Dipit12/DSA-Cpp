/*
OOPS is an programming paradigm where we try to model real world entities using code.
Before OOPS we had Procedural Programming
Class is a blueprint used for creating objects
Class is a user-defined data type
Object is an entity that has properties and behaviour.
Object is an instance of a class
*/
#include <iostream>
using namespace std;

class Product {
public:
    int id;
    int weight;
    char name[50];
};

class Student {
public:
    int roll_no;
    char name[50];
};
int main() {

    Product p1;
    p1.id = 3;
    p1.weight = 80;
    cout << "Enter the name of the product" << endl;
    cin>>p1.name;

    // printing out details
    cout << "Id is" << p1.id << endl;
    cout << "weight of the product is" << p1.weight << endl;
    cout << "Name of the object is " << p1.name << endl;

    Student s1;
    cout << s1.roll_no << endl; // would return us garbage values
    cout << s1.name << endl;
}