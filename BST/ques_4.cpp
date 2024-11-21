#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Function to find the position of an element in the traversal array
int findPosition(int arr[], int element, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// Recursive function to construct the tree
Node* solve(int in[], int post[], int &postOrderIndex, int inStart, int inEnd, int n) {
    // Base condition
    if (postOrderIndex < 0 || inStart > inEnd) {
        return nullptr;
    }

    // Pick the current element from the postorder array
    int element = post[postOrderIndex--];
    Node *root = new Node(element);

    // Find the position of the current element in the inorder array
    int pos = findPosition(in, element, n);

    // Recursive calls to build right and left subtrees
    // (Right subtree is processed before left subtree in postorder construction)
    root->right = solve(in, post, postOrderIndex, pos + 1, inEnd, n);
    root->left = solve(in, post, postOrderIndex, inStart, pos - 1, n);

    return root;
}

// Wrapper function to build the tree from postorder and inorder
Node* buildTreeFromPostorder(int post[], int in[], int n) {
    int postOrderIndex = n - 1;
    return solve(in, post, postOrderIndex, 0, n - 1, n);
}

// Function to print the inorder traversal of the tree
void inorderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Function to print the postorder traversal of the tree
void postorderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    int in[] = {3, 1, 4, 0, 5, 2};
    int post[] = {3, 4, 1, 5, 2, 0}; // Postorder traversal
    int n = 6;

    // Build the tree from postorder and inorder
    Node *root = buildTreeFromPostorder(post, in, n);

    // Print the inorder traversal
    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);
    cout << endl;

    // Print the postorder traversal
    cout << "Postorder traversal of the constructed tree: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
