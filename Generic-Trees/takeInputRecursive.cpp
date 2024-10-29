#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class treeNode{
public:
    T data;   
    vector<treeNode <T> *> children;
    treeNode(T data){
        this->data = data;
    } 
};

void printTree2(treeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout << root->data << ": ";
    for(int i = 0; i<root->children.size();i++){
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for(int i = 0; i<root->children.size();i++){
        printTree2(root->children[i]);
    }
}

treeNode<int> *takeInput(){
    int rootData;
    cout << "Enter data" << endl;
    cin>>rootData;

    treeNode<int> *root = new treeNode<int>(rootData);
    // how many children
    int n;
    cout << "Enter the number of children of " << rootData << endl;
    cin>>n;
    for(int i=0; i<n;i++){
       treeNode<int> *child = takeInput();
       root->children.push_back(child);
    }
    return root;
}

int main(){
    treeNode<int> *root = takeInput();
    printTree2(root);
    return 0;
}