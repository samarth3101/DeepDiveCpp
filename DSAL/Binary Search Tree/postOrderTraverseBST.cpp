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

// Function for Postorder Traversal
void postorderTraversal(Node* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);   // Traverse left subtree
        postorderTraversal(root->right);  // Traverse right subtree
        cout << root->data << " ";        // Visit the node
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

    cout << "Post-order traversal of the BST: ";
    postorderTraversal(root); // Perform post-order traversal
    cout << endl;

    return 0;
}
