
// Anya is still failing! Help her recite
// her timetables all the way to 10.

// Expected output:
// Which timetables are we reciting? 4
// 4 x 0 = 0
// Yes!
// 4 x 1 = 4
// Yes!
// 4 x 2 = 4
// No! Try again!
// 4 x 2 = 8
// Yes!
// ...
// 4 x 10 = 40
// Yes!
// You did it!

#include <iostream>

int main(void) {
    // Write your code here!
    std::cout << "Which timetables are we reciting? ";
    int number;
    std::cin >> number;
    int i = 0;
    while (i <= 10) {
        std::cout << i << " x " << number << " = ";
        int answer;
        std::cin >> answer;
        if (answer == i * number) {
            std::cout << "Yes! \n";
            i++;
        } else {
            std::cout << "No! Try again! \n";
        }
    }
    std::cout << "You did it! \n";
    return 0;
}