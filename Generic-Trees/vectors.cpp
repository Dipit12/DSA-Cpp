// In C++, vectors are like dynamic arrays

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; // creating vectors using static allocation
    vector<int> *vp = new vector<int>(); // creating vectors using dynamic memory allocation
    v.push_back(10);
    v.push_back(20);
    cout << v[0] << endl;
    cout << v[1] << endl;
    
    // changing values of vectors
    v[0]=100;
    cout << v[0] << endl;
    cout << v.at(0) << endl; // same as using [] but recommended for vectors
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    // iterating through the whole vector
    for(int i =0; i<v.size();i++){
        cout << v.at(i) << " ";
    }

    // deleting an element in a vector - we can simply use pop_back(), deletes the last element of a vector;

    v.pop_back(); v.pop_back();
     for(int i =0; i<v.size();i++){
        cout << v.at(i) << " ";
    }
    cout << "\n";
    // initializing a vector with preset values
    vector<int> v2(10,2); // would create a vector of size 10 with all values set to 2
    for(int i=0;i<v2.size();i++){
        cout << v2.at(i) << " ";
    }
    //sorting a vector
    sort(v.begin(), v.end());
     for(int i =0; i<v.size();i++){
        cout << v.at(i) << " ";
    }

    
    
    
}