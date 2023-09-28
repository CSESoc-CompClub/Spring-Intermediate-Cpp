#include <iostream>

struct triple {
    int x;
    int y;
    int z;
};

int main(void) {
    struct triple first_triple;
    struct triple second_triple;
    std::cout << "Please enter the values of the first triple (x, y, z): ";
    std::cin >> first_triple.x >> first_triple.y >> first_triple.z;
    std::cout << "Please enter the values of the second triple (x, y, z): ";
    std::cin >> second_triple.x >> second_triple.y >> second_triple.z;

    struct triple summed;
    summed.x = first_triple.x + second_triple.x;
    summed.y = first_triple.y + second_triple.y;
    summed.z = first_triple.z + second_triple.z;

    std::cout << "The resulting sum triple is:\n";
    std::cout << "x = " << summed.x << "\n";
    std::cout << "y = " << summed.y << "\n";
    std::cout << "z = " << summed.z << "\n";
}
