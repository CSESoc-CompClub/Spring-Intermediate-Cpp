#include <iostream>

int possibleTriangles(int array[], int arraySize) {
    int triangleCount = 0;

    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            for (int k = j + 1; k < arraySize; k++) {
                if (array[i] + array[j] > array[k] && array[i] + array[k] > array[j] && array[k] + array[j] > array[i]) {
                    triangleCount++;
                }
            }
        }
    }
    return triangleCount;
}

// ----------------------------------------------------------------------------

// Main function for testing array output
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "The amount of possible triangles is: " << possibleTriangles(array, size) << "\n";
}
