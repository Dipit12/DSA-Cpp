#include <iostream>
#include <vector>

using namespace std;

class treeNode{
public:
    int data;
    vector<treeNode *> children;

    // constructor
    treeNode(int data){
        this->data = data;
    }    
};
void printNode(treeNode *root){
    cout << root->data << endl;
    for(int i = 0; i< root->children.size();i++){
        printNode(root->children[i]);
    }
}
int main(){
    treeNode *n1 = new treeNode(1);
    treeNode *n2 = new treeNode(2);
    treeNode *n3 = new treeNode(3);

    n1->children.push_back(n2);
    n1->children.push_back(n3);

    printNode(n1);
    return 0;
}