#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];  // Assume the first element is the largest initially
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
    }
    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];  // Declare the array based on the input size

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Read array elements from user
    }

    int max = findMax(arr, size);
    cout << "The maximum number in the array is: " << max << endl;

    return 0;
}
