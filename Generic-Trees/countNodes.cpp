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

int countNodes(treeNode<int> *root){
    // Check if root is NULL
    if(root == nullptr) return 0;
    
    int ans = 1;
    for(int i = 0; i < root->children.size(); i++){
        ans += countNodes(root->children[i]);
    }
    return ans;
}

int main(){
    treeNode<int> *root = new treeNode<int>(1);
    treeNode<int> *n1 = new treeNode<int>(2);
    treeNode<int> *n2 = new treeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
    cout << countNodes(root) << endl;

    // Free allocated memory
    delete root;
    delete n1;
    delete n2;
}
