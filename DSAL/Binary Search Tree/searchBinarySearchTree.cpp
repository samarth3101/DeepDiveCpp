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

// Function to search for an element in the BST
Node* search(Node* root, int value) {
    // Base cases: root is null or value is present at the root
    if (root == nullptr || root->data == value) {
        return root;
    }

    // Value is greater than the root's data, so search in the right subtree
    if (value > root->data) {
        return search(root->right, value);
    }

    // Value is smaller than the root's data, so search in the left subtree
    return search(root->left, value);
}

// Function to display the result of the search
void displaySearchResult(Node* result, int value) {
    if (result == nullptr) {
        cout << "Element " << value << " not found in the BST.\n";
    } else {
        cout << "Element " << value << " found in the BST.\n";
    }
}

int main() {
    Node* root = nullptr; // Start with an empty tree

    int n, value, searchVal;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value); // Insert each element into the BST
    }

    cout << "Enter the element to search: ";
    cin >> searchVal;

    // Perform the search
    Node* result = search(root, searchVal);

    // Display the result of the search
    displaySearchResult(result, searchVal);

    return 0;
}