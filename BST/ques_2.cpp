#include <iostream>
using namespace std;

class Node {
public:
    char data;       // Data is now a character
    Node *left;
    Node *right;

    Node(char data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Insert into BST
Node *insertInBST(Node *root, char value) {
    if (root == nullptr) {
        return new Node(value); // Create a new node if root is null
    }
    if (value < root->data) {
        root->left = insertInBST(root->left, value); // Insert in left subtree
    } else {
        root->right = insertInBST(root->right, value); // Insert in right subtree
    }
    return root; // Return the unchanged root
}

// Delete from BST
Node *deleteFromBST(Node *root, char value) {
    if (root == nullptr) return root; // Base case: if tree is empty

    if (value < root->data) {
        root->left = deleteFromBST(root->left, value); // Value in left subtree
    } else if (value > root->data) {
        root->right = deleteFromBST(root->right, value); // Value in right subtree
    } else {
        // Node to be deleted found
        if (!root->left) { // Case: Node has no left child
            Node *temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) { // Case: Node has no right child
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // Case: Node has two children
        // Find the inorder successor (smallest in the right subtree)
        Node *successor = root->right;
        while (successor->left) successor = successor->left;

        // Replace root's data with successor's data
        root->data = successor->data;

        // Delete the inorder successor
        root->right = deleteFromBST(root->right, successor->data);
    }
    return root; // Return the (potentially updated) root
}

// Search in BST
bool isPresent(Node *root, char key) {
    if (root == nullptr) return false; // Key not found

    if (root->data == key) return true; // Key found
    if (key < root->data) return isPresent(root->left, key); // Search left
    return isPresent(root->right, key); // Search right
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
    root = insertInBST(root, 'F');
    root = insertInBST(root, 'D');
    root = insertInBST(root, 'J');
    root = insertInBST(root, 'B');
    root = insertInBST(root, 'E');
    root = insertInBST(root, 'G');
    root = insertInBST(root, 'K');

    // Display traversals
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    // Search for a key
    char key = 'E';
    cout << "Is " << key << " present? " << (isPresent(root, key) ? "Yes" : "No") << endl;

    // Delete a node
    cout << "Deleting 'D'...\n";
    root = deleteFromBST(root, 'D');
    cout << "Inorder traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
