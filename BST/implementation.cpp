#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
   
   Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
   }
}
void inorder(Node *root){
    // base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root){
    // base case
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root == NULL){
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<< endl;
}
Node *minValue(Node *root){
    Node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node *maxValue(Node *root){
    Node *temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
Node * insertIntoBST(Node *root, int data){
    // base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    else if(data > root->data){
        // insert in right part
        root->right = insertIntoBST(root->right, data);
    }else{
        // insert in left part
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node *root){
    int data;
    cin >> data;
    while(data != -1){
        insertIntoBST(root, data);
        cin >> data;
    }
}
bool isPresent(Node *root, int key){
    // base- cases
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    
    if(root->data > key){
        return isPresent(root->left, key);
    }else{
        return isPresent(root->right, key);
    }
}
int main(){
    Node *root = NULL;
    cout << "Enter data to create BST" << endl;
    takeInput(root);
    return 0;

    // printing postorder
    postorder(root);
    // printing preorder
    preorder(root);
    // printing inorder
    inorder(root);
}