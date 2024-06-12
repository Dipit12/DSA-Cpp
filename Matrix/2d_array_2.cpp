#include <iostream>
using namespace std;

int main() {
    // declaration and initialization of array
    int arr [2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++) {
        for(int k=0; k<3; k++) {
            cout << arr[i][k] << ' ';
        }
        cout << endl;
    }
    // in a 2D array giving no of rows is optional while giving number of columns is compulsary
    int arr2 [][4] = {{1,2},{3,5,6,8},{3,21,1}};
    // blank spots would be filled with a zero
    for(int x=0;x<3;x++) {
        for(int y=0;y<4;y++) {
            cout << arr2[x][y] << ' ';
        }
        cout << endl;
    }
}