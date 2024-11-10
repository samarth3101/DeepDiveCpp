#include <iostream>
using namespace std;

// Define the structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to insert a node in the BST
Node* insert(Node* root, int value) {
    // If the tree is empty, return a new node
    if (root == nullptr) {
        return new Node(value);
    }

    // Otherwise, recur down the tree
    if (value < root->data) {
        root->left = insert(root->left, value); // Insert in the left subtree
    } else {
        root->right = insert(root->right, value); // Insert in the right subtree
    }

    // Return the (unchanged) node pointer
    return root;
}

// Function for Preorder Traversal
void preorderTraversal(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";      // Visit the node
        preorderTraversal(root->left);  // Traverse left subtree
        preorderTraversal(root->right); // Traverse right subtree
    }
}

int main() {
    Node* root = nullptr; // Start with an empty tree

    int n, value;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value); // Insert each element into the BST
    }

    cout << "Pre-order traversal of the BST: ";
    preorderTraversal(root); // Perform pre-order traversal
    cout << endl;

    return 0;
}