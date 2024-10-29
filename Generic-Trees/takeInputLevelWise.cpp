// Iterative method to take the input
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class treeNode{
public:
    int data;
    vector<int *> children;

    treeNode(int data){
        this->data = data;
    }    
};
void printTree2(treeNode *root){
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


treeNode *takeInputLevel(){
    int rootData;
    cout << "Enter the root data" << endl;
    cin>>rootData;

    treeNode *root = new treeNode(rootData);
    queue<treeNode *> q;
    q.push(root);
    while(!q.empty()){
        treeNode *f = q.front();
        q.pop();

        cout <<  "Enter number of children of " << f->data << endl;
        int n;
        cin>>n;

        for(int i = 0; i<n;i++){
            int childData;
            cout << "Enter " << i << "th child of " << f->data << endl;
            cin>>childData;

            treeNode<int> *child = new treeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

