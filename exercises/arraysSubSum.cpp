#include <iostream>

// Anya needs your help passing the Eden Academy entrance test! Help her learn
// addition blazingly fast by finding a way to sum up numbers in an array
// multiple times.

// Add code to the subSum function that finds if any number of consecutive
// array elements add to the target sum. If a target is found, then the program
// should print "target sum found between indexes []  and [] ", where the
// brackets represent the corresponding indices.

// if the index itself is the sum, then the program should print "target sum
// found at index [] ".

void subSum(int array[], int arraySize, int target) {
    // TODO: add your code here!!
}

// ----------------------------------------------------------------------------

// Main function for testing array output
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    subSum(array, size, 12);
    return 0;
}
