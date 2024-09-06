#include <iostream>
using namespace std;
template <typename T, typename V>
// class Pair{
    
//     T x;
//     T y;
//     public:
//         void setX(T x){
//             this->x =x;
//         }
//         T getX(){
//             return x;
//         }

//         void setY(T y){
//             this->y =y;
//         }
//         T getY(){
//             return y;
//         }
// };

class Pair2{
    T a;
    V b;
    public:
         void setA(T a){
            this->a =a;
        }
        T getA(){
            return a;
        }

        void setB(V b){
            this->b =b;
        }
        V getB(){
            return b;
        }
};

int main(){
    // Pair<int> p1;
    // p1.setX(10);
    // cout << p1.getX() << endl;
    // p1.setY(20);
    // cout << p1.getY() << endl; 

    // Pair<char> p2;
    // p2.setX('a');
    // cout << p2.getX() << endl;
    // p2.setY('b');
    // cout << p2.getY() << endl;

    // Pair<double> p3;
    // p3.setX(1.23);
    // p3.setY(2.12);
    // cout << getX() << " " << getY() << endl;

    Pair2<int, double> p1;
    p1.setA(1);
    p1.setB(1.342);

    cout << p1.getA() << " " << p1.getB() << endl;

    // creating an triplet using the pair class
    Pair2<Pair2<int,int>,int> p;
    p.setB(10);
    p.setA(Pair2<int,int>(20,30));
    cout << p.getB() << " " << p.getA().getA() << " " << p.getA().getB() << endl;
}