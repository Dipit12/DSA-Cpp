#include <iostream>
using namespace std;

int main() {
    int arr[2][3]; // declaration of array
    // here 2 are the number of rows and 3 number of columns
    // for taking in an input
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            cout << "Enter the array element" << endl;
            cin>> arr[i][j];
        }
    }

    //printing the array
    for(int m=0;m<2;m++) {
        for(int n=0;n<3;n++) {
            cout << arr[m][n] << endl;
        }
    }
    cout << endl;
    // printing transpose of a matrix
    for(int j = 0;j<3;j++) {
        for(int k = 0; k<2;k++) {
            cout << arr[k][j] << ' ';
        }
        cout << endl;
    }

    // to print the matrix column wise
    for(int x =0;x<2;x++) {
        for(int y = 0; y<3;y++) {
            cout << arr[y][x] << endl;
        }
        cout << endl;
    }
}