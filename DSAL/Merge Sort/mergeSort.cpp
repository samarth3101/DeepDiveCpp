#include <iostream>
using namespace std;

// Merge two halves of the array
void merge(int arr[], int left, int right) {
    if (left >= right) {
        return; // Base case: single element is already sorted
    }
    
    int mid = left + (right - left) / 2; // Find the middle point
    merge(arr, left, mid);  // Sort the left half
    merge(arr, mid + 1, right);  // Sort the right half

    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid; // Size of right subarray

    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftArr[] if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArr[] if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
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

    // Sorting the array using Merge Sort
    merge(arr, 0, n - 1);

    // Displaying the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}