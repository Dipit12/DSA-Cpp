#include <iostream>
using namespace std;

int main(){
    int vertices, edges;
    cout << "Enter the number of vertices and edges" << endl;
    cin >> vertices >> edges;
    int arr[vertices][vertices];
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            arr[i][j] = 0; // setting all the values to 0
    }
    }
    // setting the value to 1
    for(int i = 0; i<edges; i++){
        int u,v;
        cout << "Enter the edge" << endl;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    // printing the adjacency matrix
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            cout << arr[i][j] << " ";
    }
    cout << endl;
    }
}