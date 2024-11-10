#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the rightmost element as pivot
    int i = low - 1;  // Index of smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++;  // Increment the smaller element index
            swap(arr[i], arr[j]);  // Swap arr[i] and arr[j]
        }
    }

    // Swap the pivot element with the element at (i + 1) position
    swap(arr[i + 1], arr[high]);
    return i + 1;  // Return the partition index
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort the left and right subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Accepting the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Accepting the elements of the array from the user
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using Quick Sort
    quickSort(arr, 0, n - 1);

    // Displaying the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}