// menu driven program for traversal for BST

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }    
};

Node *insertNode(Node *root, int value){
    if(root == nullptr){
        root = new Node(value);
        return root;
    }

    if(root->data > value){
        root->left = insertNode(root->left, value);
    }else{
        root->right = insertNode(root->right,value);
    }

    return root;
}

void inOrder(Node *root){
    if(root == nullptr){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root){
    if(root == nullptr){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    
    preOrder(root->right);
}

void postOrder(Node *root){
    if(root == nullptr){
        return;
    }
    postOrder(root->left);
    
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    cout << "Enter the number of nodes" << endl;
    int n;
    cin >> n;

    Node *root = nullptr;
    for(int i = 0; i<n;i++){
        int value;
        cout << "Enter the value of node" << endl;
        cin >> value;
        root = insertNode(root, value);
    }

    int choice;
    cout << "Enter 1 for inOrder, 2 for preOrder, 3 for postOrder" << endl;
    cin >> choice;
    switch(choice){
        case 1:
            inOrder(root);
            break;
        case 2:
            preOrder(root);
            break;
        case 3:
            postOrder(root);
            break;
        default:
            cout << "Invalid choice entered" << endl;
    }
    return 0;
}