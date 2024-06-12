#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    void add(Complex c2) {
        int final_real = real + c2.real;
        int final_img = img + c2.img;
        cout << "Real part is " << final_real << endl;
        cout << "Imaginary part is " << final_img << endl;
    }
    void multiply(Complex c2) {
        int final_real = (real * c2.real) - (img * c2.img);
        int final_img = (real * c2.img) + (img*c2.real);
        cout << "Real part is " << final_real << endl;
        cout << "Imaginary part is " << final_img << endl;
    }
};

int main() {
    Complex c1(2,3);
    Complex c2(3,4);
    int choice;
    cout << "Enter your choice 1 for add and 2 to multiply" << endl;
    cin>> choice;
    if(choice == 1) {
        c1.add(c2);
    }
    else if(choice == 2) {
        c1.multiply(c2);
    }
    else {
        cout << "Invalid choice" << endl;
    }
}