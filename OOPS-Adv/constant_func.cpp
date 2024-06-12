#include <iostream>
using namespace std;

class Fraction {
private:
    int num;
    int den;
public:
    Fraction(int num, int den) {
        this->num = num;
        this->den = den;
    }
    void getNum() const{
        cout << num << endl;
    }
    void getDen() const{
        cout << den << endl;
    }

    void setNum(int nums) {
        num = nums;
    }

    void setDen(int dens) {
        den = dens;
    }
    void add(Fraction f2) {
       int final_num = (num * f2.den) + (den + f2.num);
       int final_den = den * f2.den;
        cout << final_num << "/" << final_den << endl;
    }

};

int main() {
    Fraction f1(3,4);
    Fraction f2(5,6);
    f1.add(f2);

    Fraction const f3; // cannot call any function on a constant object, unless func is also marked as const
    f3.getDen();
    f3.getNum();

}