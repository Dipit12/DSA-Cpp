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

Node  *findMin(Node *root){
    Node *temp = root;
    while(temp->left != nullptr){
        temp = temp->left;
    }
    return temp;
}
Node *insertNode(Node *root, int value){
    if(root == nullptr){
        root = new Node(value);
        return root;
    }

    if(root->data > value){
        root->left = insertNode(root->left,value);
    }else{
        root->right = insertNode(root->right, value);
    }
    return root;
}

bool isPresent(Node *root, int value){
    if(root == nullptr){
        return false;
    }
    if(root->data == value){
        return true;
    }

    if(root->data > value){
        return isPresent(root->left,value);
    }else{
        return isPresent(root->right,value);
    }
}

Node *deleteNode(Node *root, int value){
    if(root == nullptr){
        return root;
    }
    if(root->data == value){
        // 0 child
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left != nullptr && root->right == nullptr){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == nullptr && root->right != nullptr){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left != nullptr && root->right != nullptr){
            int min = findMin(root->right)->data;
            root->data = min;
            root->right  = deleteNode(root->right, min);
            return root;
        }
    }

    else if(root->data > value){
        root->left = deleteNode(root->left, value);
    }else{
        root->right = deleteNode(root->right,value);
    }
}