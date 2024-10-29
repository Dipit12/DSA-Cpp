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

// height of any tree = no. of levels in it
int heightOfaTree(treeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int max = 0;
    for(int i = 0; i<root->children.size();i++){
        int childHeight = heightOfaTree(root->children[i]);
        if(childHeight > max){
            max = childHeight;
        }
    }
    return max+1;
}

int main(){
    treeNode<int> *root = new treeNode<int>(1);
    treeNode<int> *n1 = new treeNode<int>(2);
    treeNode<int> *n2 = new treeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
    cout << heightOfaTree(root) << endl;

    // Free allocated memory
    delete root;
    delete n1;
    delete n2;
}