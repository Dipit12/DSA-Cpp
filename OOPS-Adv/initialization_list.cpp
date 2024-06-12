#include <iostream>
using namespace std;

class Student {
public:
    int age;
    const int roll_no;
/*
    Student(int r) {
    //    this->roll_no = roll_no; would given an error since over writing here is not posstible
        // to solve this problem we use iniialization list

    } */

    Student(int r, int a): roll_no(r), age(a) {

    }
};

int main() {
    Student s1(100,10);
 //   s1.roll_no = 100; // once roll_no is created it is assigned a garbage value, since it is a constant its value cannot be chnaged from garbage value to 100


}