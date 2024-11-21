// Write a program in C++ to insert nodes in a tree and then print the preorder, postorder and inorder traversals

#include <iostream>
using namespace std;

class Node{
public:     
    int data;
    Node *left;
    Node*right;
    
    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }
};

Node *insertNodeInBST(Node *root, int value){
    // base case
    if(root == NULL){
        root = new Node(value);
        return root;
    }
    if(root->data > value){
        root->left = insertNodeInBST(root->left, value);
    }else{
        root->right = insertNodeInBST(root->right,value);
    }
    return root;
}

void preorder(Node *root){
    if(root == nullptr){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void inorder(Node *root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node *root = nullptr;
    int n;
    cout << "Enter the number of nodes you want to enter" << endl;
    cin>>n;
    for(int i = 0; i<n;i++){
        int value;
        cout << "Enter the node" << endl;
        cin>>value;
        root = insertNodeInBST(root,value);
    }
    int choice;
    cout << "Enter 1 for inorder, 2 for postorder, 3 for preorder" << endl;
    cin>>choice;
    switch(choice){
        case 1:
            inorder(root);
            break;
        case 2: 
            postorder(root);
            break;
        case 3:
            preorder(root);
            break;
        default:
            cout << "Invalid choice entered" << endl;
    }
}