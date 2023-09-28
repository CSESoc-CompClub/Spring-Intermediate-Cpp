// C++ program to find the maximum value in an vector of size n
#include <iostream>
#include <vector>
#include <algorithm>

// Add code to the function reverseVector such that it receives an vector and
// reverses the orders of the numbers in the vector.

void reverseVector(std::vector<int> vec) {
    // TODO: Add your code here!!
}

// ----------------------------------------------------------------------------

// DO NOT edit these functions below !! They are here for testing purposes.

// Helper utility for printing the vector.
void vectorShow(std::vector<int> vec) {
    for (int i : vec) {
        std::cout << i << " ";
    }

    std::cout << "\n";
}

// Main function for testing vector output
int main() {
    std::vector<int> vec;
    for (int i = 1; i <= 10; i++) {
        vec.push_back(i);
    }

    std::cout << "Original vector: ";

    vectorShow(vec);
    reverseVector(vec);

    std::cout << "New vector:      ";

    vectorShow(vec);
}
