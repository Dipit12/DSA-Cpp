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

// Insert into BST
Node *insertInBST(Node *root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insertInBST(root->left, value);
    } else {
        root->right = insertInBST(root->right, value);
    }
    return root;
}

// Delete from BST
Node *deleteFromBST(Node *root, int value) {
    if (root == nullptr) return root;

    if (value < root->data) {
        root->left = deleteFromBST(root->left, value);
    } else if (value > root->data) {
        root->right = deleteFromBST(root->right, value);
    } else {
        if (!root->left) {
            Node *temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *successor = root->right;
        while (successor->left) successor = successor->left;

        root->data = successor->data;
        root->right = deleteFromBST(root->right, successor->data);
    }
    return root;
}

// Search in BST
bool isPresent(Node *root, int key) {
    if (root == nullptr) return false;

    if (root->data == key) return true;
    if (key < root->data) return isPresent(root->left, key);
    return isPresent(root->right, key);
}

// Traversals
void inorder(Node *root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Main Function
int main() {
    Node *root = nullptr;

    // Construct BST
    root = insertInBST(root, 5);
    root = insertInBST(root, 3);
    root = insertInBST(root, 10);
    root = insertInBST(root, 1);
    root = insertInBST(root, 4);
    root = insertInBST(root, 8);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    // Search
    int key = 4;
    cout << "Is " << key << " present? " << (isPresent(root, key) ? "Yes" : "No") << endl;

    // Delete
    cout << "Deleting 3...\n";
    root = deleteFromBST(root, 3);
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
