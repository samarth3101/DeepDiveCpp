#include <iostream>
#define MAX 100 // Maximum size of the stack

class Stack {
    int top;
    int arr[MAX]; // Array to store stack elements

public:
    Stack() { top = -1; }

    // Push operation
    void push(int item) {
        if (top >= MAX - 1) {
            std::cout << "Stack overflow. Cannot push " << item << std::endl;
        } else {
            arr[++top] = item;
            std::cout << item << " pushed to stack" << std::endl;
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            std::cout << "Stack underflow. Cannot pop." << std::endl;
        } else {
            int removed_item = arr[top--];
            std::cout << removed_item << " popped from stack" << std::endl;
        }
    }

    // Display stack elements
    void display() {
        if (top < 0) {
            std::cout << "Stack is empty" << std::endl;
        } else {
            std::cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    stack.pop();
    stack.pop();
    stack.pop(); // Attempt to pop from empty stack
    return 0;
}