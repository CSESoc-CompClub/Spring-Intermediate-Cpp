// Anja needs even more help with her maths homework.
// She needs help determining if a number is a multiple
// of another number.

// You can assume that the number will be an integer.
// Expected output:

// Enter the factor: 2
// Enter the number: 10
// The number 2 is a factor of 10

// Enter the factor: 3
// Enter the number: 10
// The number 3 is not a factor of 10

#include <iostream>

int main(void) {
    int factor, num;
    std::cout << "Enter the factor: ";
    std::cin >> factor;
    std::cout << "Enter the number: ";
    std::cin >> num;
    if (num % factor == 0) {
        std::cout << "The number " << factor << " is a factor of " << num << "\n";
    } else {
        std::cout << "The number " << factor << " is not a factor of " << num << "\n";
    }
    return 0;
}
