#include <iostream>
#include <vector>
using namespace std;

void print_position(int arr[], int n, int x, int i){
    // base class
    if(i==n){
        return;
    }
    if(arr[i] == x){
        cout << i << " ";
    }

    //recursive func
    print_position(arr,n,x,i+1);
}

void store_position(int arr[], int n, int x, int i, vector<int> &ans) {
    if(i==n){
        return;
    }
    if(arr[i] == x){
        ans.push_back(i);
    }
    store_position(arr,n,x,i+1,ans);
}

int main() {
    int arr[] = {5,5,6,5,6,7};
    vector<int> v;
    store_position(arr,sizeof(arr)/4,5,0,v);

    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
}