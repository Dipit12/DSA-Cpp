#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    void print() {
        cout << num << "/" << den << endl;
    }
    Fraction add(Fraction f1, Fraction f2) {
        int num_frac = (f1.num * f2.den) + (f2.num * f1.den);
        int den_frac = f1.den * f2.den;
        Fraction result(num_frac, den_frac);
        return result;
    }
    Fraction(int num, int den) {
        this->num = num;
        this->den = den;

        if (den == 0) {
            cout << "Denominator cannot be zero" << endl;
        }
        else if (num > den) {
            cout << "invalid fraction" << endl;
        }
        else {
            print();
        }
    }
};

int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);
    Fraction result = f1.add(f1, f2);
    result.print();
    return 0;
}