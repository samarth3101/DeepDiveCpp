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

// Function to insert at a given position
void insertAtPosition(Node*& head, int value, int position) {
    if (position == 1) {
        insertAtBeginning(head, value);  // If position is 1, insert at beginning
        return;
    }
    
    Node* newNode = new Node(value);
    Node* temp = head;
    
    // Traverse to the node just before the desired position
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position is out of range." << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;  // Link new node to the next node of temp
    temp->next = newNode;        // Link temp node to the new node
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
    
    // Insert at position 2
    insertAtPosition(head, 25, 2);
    cout << "List after inserting at position 2: ";
    displayList(head);
    
    // Insert at position 4
    insertAtPosition(head, 35, 4);
    cout << "List after inserting at position 4: ";
    displayList(head);
    
    return 0;
}