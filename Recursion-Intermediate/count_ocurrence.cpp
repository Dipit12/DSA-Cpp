#include <iostream>
using namespace std;

void count(int arr[], int n, int x, int i, int &ans) {
    if(i==n){
        return;
    }
    if(arr[i] == x){
        ans++;
    }

    //recursive func
    count(arr,n,x,i+1,ans);
}

int main() {
    int arr[] = {1,2,2,3,4};
    int ans =0;
    count(arr,5,1,0,ans);

    cout << ans << endl;
}