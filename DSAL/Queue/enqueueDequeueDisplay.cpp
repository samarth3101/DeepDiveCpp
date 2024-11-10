#include <iostream>
#define MAX 100 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX]; // Array to store queue elements

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int item) {
        if (rear >= MAX - 1) {
            std::cout << "Queue overflow. Cannot enqueue " << item << std::endl;
        } else {
            if (front == -1) front = 0; // Initialize front if inserting the first element
            arr[++rear] = item;
            std::cout << item << " enqueued to queue" << std::endl;
        }
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            std::cout << "Queue underflow. Cannot dequeue." << std::endl;
        } else {
            std::cout << arr[front] << " dequeued from queue" << std::endl;
            front++;
            // Reset queue when all elements are dequeued
            if (front > rear) {
                front = -1;
                rear = -1;
            }
        }
    }

    // Display queue elements
    void display() {
        if (front == -1 || front > rear) {
            std::cout << "Queue is empty" << std::endl;
        } else {
            std::cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue(); // Attempt to dequeue from empty queue
    return 0;
}