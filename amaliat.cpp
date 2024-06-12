#include <iostream>
#include <algorithm> // for sorting array

using namespace std;

// Function to input an array with a message
void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

// Function to print an array with a message
void printArray(int arr[], int n) {
    cout << "Array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the maximum element in the array
int findMax(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Function to find the minimum element in the array
int findMin(int arr[], int n) {
    int minElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

// Function to calculate the sum of array elements
int calculateSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of array elements
double calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n);
    return static_cast<double>(sum) / n;
}

// Function to sort the array
void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}

// Function to search for a value in the array and return its index
int searchValue(int arr[], int n, int value) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1; // If the value is not found
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    // Input array
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 0 || n > MAX_SIZE) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    inputArray(arr, n);

    // Print array
    printArray(arr, n);

    // Find maximum element
    int maxElement = findMax(arr, n);
    cout << "Maximum element: " << maxElement << endl;

    // Find minimum element
    int minElement = findMin(arr, n);
    cout << "Minimum element: " << minElement << endl;

    // Calculate sum of array elements
    int sum = calculateSum(arr, n);
    cout << "Sum of array elements: " << sum << endl;

    // Calculate average of array elements
    double average = calculateAverage(arr, n);
    cout << "Average of array elements: " << average << endl;

    // Sort array
    sortArray(arr, n);
    cout << "Sorted array:" << endl;
    printArray(arr, n);

    // Search for a value in the array
    int value;
    cout << "Enter a value to search in the array: ";
    cin >> value;
    int index = searchValue(arr, n, value);
    if (index != -1) {
        cout << "Value " << value << " found at index " << index << endl;
    }
    else {
        cout << "Value not found in the array" << endl;
    }

    return 0;
}

