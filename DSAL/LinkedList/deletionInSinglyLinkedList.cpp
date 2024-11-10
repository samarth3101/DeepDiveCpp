#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to insert at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;  // New node points to the current head
    head = newNode;        // Update head to the new node
}

// Function to delete a node at the beginning
void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is already empty." << endl;
        return;
    }
    
    Node* temp = head;     // Store the current head in a temporary pointer
    head = head->next;     // Move head to the next node
    delete temp;           // Delete the old head node
}

// Function to delete a node at a specified position
void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr) {  // Check if the list is empty
        cout << "List is empty." << endl;
        return;
    }
    
    if (position == 1) {    // If position is 1, delete at the beginning
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    // Traverse the list to find the node just before the target position
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {  // Check if position is out of range
        cout << "Position is out of range." << endl;
        return;
    }

    Node* nodeToDelete = temp->next;  // Node to be deleted
    temp->next = nodeToDelete->next;  // Link previous node to the next node after the deleted one
    delete nodeToDelete;              // Delete the target node
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
    // Insert at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout << "List after inserting at the beginning: ";
    displayList(head);
    
    // Delete the first node
    deleteAtBeginning(head);
    cout << "List after deleting the first node: ";
    displayList(head);
    
    // Insert a new node and delete at position 2
    insertAtBeginning(head, 40);
    insertAtBeginning(head, 50);
    cout << "List after inserting more nodes: ";
    displayList(head);
    
    deleteAtPosition(head, 2);
    cout << "List after deleting node at position 2: ";
    displayList(head);
    
    return 0;
}