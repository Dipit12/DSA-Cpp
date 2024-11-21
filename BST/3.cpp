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

Node *solve(int in[], int pre[], int &preOrderIndex, int inStart, int inEnd, int n){
    if(preOrderIndex >= n || inStart > inEnd){
        return nullptr;
    }
    int element = pre[preOrderIndex++];
    Node *root = new Node(element);
    int pos = findElement(in , element, n);

    // recursive calls
    root->left = solve(in,pre,preOrderIndex, inStart, pos-1,n);
    root->right = solve(in, pre, preOrderIndex, pos+1, inEnd, n);
    return root;
}

Node *buildTreeFromPreorder(int in[], int pre[], int n){
    int preOrderIndex = 0;
    Node *ans = solve(in,pre, preOrderIndex, inStart, inEnd, n);
    return ans;
}

void inOrder(Node *root){
    if(root == nullptr){
        return ;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    int in[] = {3, 1, 4, 0, 5, 2};
    int pre[] = {0, 1, 3, 4, 2, 5};
    int n = 6;

    Node *root = buildTreeFromPreorder(pre, in, n);
    cout << "Inorder traversal" << endl;

    inOrder(root);
}