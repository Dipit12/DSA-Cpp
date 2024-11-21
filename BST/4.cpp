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

int findElement(int in[], int element, int n){
    for(int i = 0; i<n;i++){
        if(in[i] == element){
            return i;
        }
    }
    return -1;
}
Node *solve(int in[], int post[], int &postOrderIndex, int inStart, int inEnd, int n){
    if(postOrderIndex < 0 || inStart > inEnd){
        return nullptr;
    }

    int element = post[postOrderIndex--];
    Node *root = new Node(element);
    int pos = findElement(in , element, n);

    // recursive calls
    root->right = solve(in, post, postOrderIndex, pos+1, inEnd, n);
    root->left  = solve(in,post, postOrderIndex, inStart, pos-1, n);
    return root;
}

Node *buildTreeFromPostorder(int in[], int post[], int n){
    int postOrderIndex = n-1;
    Node *ans = solve(in, post, postOrderIndex, 0, n-1,n);
    return ans;
}

void inOrder(Node *root){
    if(root == nullptr){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    int in[] = {3, 1, 4, 0, 5, 2};
    int post[] = {3, 4, 1, 5, 2, 0}; // Postorder traversal
    int n = 6;

    // Build the tree from postorder and inorder
    Node *root = buildTreeFromPostorder(in, post, n);

    // Print the inorder traversal
    cout << "Inorder traversal of the constructed tree: ";
    inOrder(root);
    cout << endl;
}