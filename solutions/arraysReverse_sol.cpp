// C++ program to find the maximum value in an array of size n
#include <iostream>

void reverseArray(int array[], int arraySize) {
    int start = 0;
    int end = arraySize - 1;

    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

// ----------------------------------------------------------------------------

// Helper utility for printing the array.
void arrayShow(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

// Main function for testing array output
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array: ";

    arrayShow(array, size);
    reverseArray(array, size);

    std::cout << "New array:      ";

    arrayShow(array, size);
}
