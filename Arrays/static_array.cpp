// These arrays have a fixed size determined at compile time. The size of a static array cannot be changed once defined.

#include <iostream>

int main() {
    // Static array with fixed size
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print elements of the static array
    for (int i = 0; i < 5; i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;
    std::cout << "Advantages:" << std::endl;
    std::cout << "Simple and fast." << std::endl;
    std::cout << "Size is known at compile time." << std::endl;
    std::cout << "Disadvantages:"  << std::endl;
    std::cout << "Size is fixed and cannot be changed during runtime." << std::endl;
    return 0;
}