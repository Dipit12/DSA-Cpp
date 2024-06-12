/*
Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an
element is inserted or deleted, with their storage being handled automatically by the container.
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may
need to be extended. Removing the last element takes only constant time because no
resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // declaring a vector - can be  done both statically and dynamically
    vector <int> v;
    vector <int> *vp = new vector <int>(); // dynamic

    // to insert element in a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // accessing elements of a vector
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;

    // modifying value of elements
    v[0] = 100;
    for(int i=0;i<3;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // cannot assign new values like in array, v[5] = 200; ----> wrong
    // to assing new values use push_back, use [] only to modify the values
    v.push_back(23);
    v.push_back(1234);

    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.at(4) << endl;
    //cout << v.at(6) << endl; // not a valid index

    v.pop_back(); // would remove the last element
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i=0; i<100;i++) {
        cout << "Capacity " << v.capacity() << " ";
        v.push_back(i+1);

    }
    cout << endl;
    vector <int> v1(10,-2); // would create a vector of size 10, with all values -2
    for(int i=0; i<v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    // sorting a vector
    sort(v.begin(),v.end());
    for(int i = 0; i< v.size(); i++) {
        cout << v[i] << " ";
    }
}
