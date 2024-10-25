#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class treeNode{
public:
    T data;
    vector<treeNode<T>*> children;     

    treeNode(T data){
        this->data = data;
    }
};

int main(){
   treeNode<int> * root = new treeNode<int>(1);
   treeNode<int> * n1 = new trteeNode<int>(2);
   treeNode<int> * n2 = new trteeNode<int>(3);

   root->children.push_back(n1);
   root->children.push_back(n2);
}