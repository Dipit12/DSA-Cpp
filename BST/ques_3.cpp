#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
/**
 * Constructor for Node class.
 * Initializes a new node with given data and sets left and right pointers to nullptr.
 * @param data The integer value to be stored in the node.
 */
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Function to find the position of an element in the inorder array
int findPosition(int arr[], int element, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// Recursive function to construct the tree
Node* solve(int in[], int pre[], int &preOrderIndex, int inStart, int inEnd, int n) {
    // Base condition
    if (preOrderIndex >= n || inStart > inEnd) {
        return nullptr;
    }

    // Pick the current element from the preorder array
    int element = pre[preOrderIndex++];
    Node *root = new Node(element);

    // Find the position of the current element in the inorder array
    int pos = findPosition(in, element, n);

    // Recursive calls to build left and right subtrees
    root->left = solve(in, pre, preOrderIndex, inStart, pos - 1, n);
    root->right = solve(in, pre, preOrderIndex, pos + 1, inEnd, n);

    return root;
}

// Wrapper function to build the tree
Node* buildTree(int pre[], int in[], int n) {
    int preOrderIndex = 0;
    return solve(in, pre, preOrderIndex, 0, n - 1, n);
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

int main() {
    int in[] = {3, 1, 4, 0, 5, 2};
    int pre[] = {0, 1, 3, 4, 2, 5};
    int n = 6;

    // Build the tree
    Node *root = buildTree(pre, in, n);

    // Print the inorder traversal to verify the constructed tree
    cout << "Inorder traversal of the constructed tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
