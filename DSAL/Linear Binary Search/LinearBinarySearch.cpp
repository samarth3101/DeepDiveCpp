#include <iostream>
#include <algorithm>

using namespace std;

// Linear Search Function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Element found, return the index
        }
    }
    return -1; // Element not found
}

// Binary Search Function (requires sorted array)
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if the key is present at mid
        if (arr[mid] == key) {
            return mid; // Element found, return the index
        }
        
        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int n, key, choice;
    
    // Accepting the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    // Accepting the array elements from the user
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Asking the user to choose search type
    cout << "\nChoose the type of search:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    // Accepting the element to be searched
    cout << "Enter the element to search: ";
    cin >> key;

    int result;
    
    if (choice == 1) {
        // Performing Linear Search
        result = linearSearch(arr, n, key);
        if (result != -1) {
            cout << "Element " << key << " found at index " << result << " using Linear Search.\n";
        } else {
            cout << "Element " << key << " not found using Linear Search.\n";
        }
    } else if (choice == 2) {
        // Sorting array before performing Binary Search
        sort(arr, arr + n);  // Binary Search requires a sorted array
        
        // Performing Binary Search
        result = binarySearch(arr, n, key);
        if (result != -1) {
            cout << "Element " << key << " found at index " << result << " using Binary Search.\n";
        } else {
            cout << "Element " << key << " not found using Binary Search.\n";
        }
    } else {
        cout << "Invalid choice!\n";
    }

    return 0;
}

// Enter the number of elements in the array: 5
// Enter the elements of the array:
// 10 20 30 40 50   

// Choose the type of search:
// 1. Linear Search
// 2. Binary Search
// Enter your choice (1 or 2): 1
// Enter the element to search: 40
// Element 40 found at index 3 using Linear Search.