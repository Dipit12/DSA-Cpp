// printing root elements and it's children recursively

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

void printTree(treeNode<int> *root){
    cout << root->data << endl;
    
    for(int i = 0; i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
// better way to print
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
        printTree(root->children[i]);
    }
}
int main(){
   treeNode<int> * root = new treeNode<int>(1);
   treeNode<int> * n1 = new treeNode<int>(2);
   treeNode<int> * n2 = new treeNode<int>(3);

   root->children.push_back(n1);
   root->children.push_back(n2);

   printTree(root);
   printTree2(root);
   return 0;
}