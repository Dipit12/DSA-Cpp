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
Node *deleteFromBST(Node *root, int data){
    // base-case
    if(root == nullptr){
        return root;
    }
    if(root->data == data){
        // 0 child case
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        // 1 child
            // left child
            if(root->left != nullptr && root->right == nullptr){
               Node *temp = root->left;
               delete root;
               return temp;
            }
            // right child
            if(root->left == nullptr && root->right != nullptr){
               Node *temp = root->right;
               delete root;
               return temp;
            }
        // 2 child case
            if(root->left != nullptr && root->right != nullptr){
                int min = minValue(root->right)->data;
                root->data = min;
                root->right  = deleteFromBST(root->right, min);
                return root;
            }
    else if(root->data > data){
        root->left = deleteFromBST(root->left, data);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, data);
        return root;
    }}
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