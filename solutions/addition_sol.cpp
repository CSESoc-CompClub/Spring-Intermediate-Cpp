// Anya needs help doing her homework so her
// dad won't know she's failing maths!

// This program should ask the user for two
// integers and print out the sum of the two integers.


// Example output:
// Type in two integers: 5 6
// The sum of 5 and 6 is 11!

#include <iostream>

int main(void) {
    // Write your code here!
    std::cout << "Type in two integers: ";
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is " << x + y << "\n";
    return 0;
}