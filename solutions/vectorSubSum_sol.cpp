#include <iostream>
#include <vector>

// Anya needs your help passing the Eden Academy entrance test! Help her learn
// addition blazingly fast by finding a way to sum up numbers in a vector
// multiple times.

// Add code to the subSum function that finds if any number of consecutive
// vector elements add to the target sum. If a target is found, then the program
// should print "target sum found between indexes []  and [] ", where the
// brackets represent the corresponding indices.

// if the index itself is the sum, then the program should print "target sum
// found at index [] ".

void subSum(std::vector<int> vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        int curr = vec[i];

        if (curr == target) {
            std::cout << "target sum found at index " << i << "\n";
            return;
        } else {
            for (int j = i + 1; j < vec.size(); j++) {
                curr += vec[j];

                if (curr == target) {
                    std::cout << "target sum found between indexes " << i << " and " << j << "\n";
                    return;
                }
            }
        }
    }
    std::cout << "No subsequence found!";
}

// ----------------------------------------------------------------------------

// Main function for testing vector output
int main() {
    std::vector<int> vec;
    for (int i = 1; i <= 10; i++) {
        vec.push_back(i);
    }
    subSum(vec,  12);
    return 0;
}
