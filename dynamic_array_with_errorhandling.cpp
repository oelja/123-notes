//When working with dynamic arrays, one common error is failing to allocate memory properly. 
//It's a good practice to check whether new succeeds.
#include <iostream>

int main() {
    int size = 1000000000;  // Very large array size

    // Try to allocate a large array
    int* dynamicArray = nullptr;
    try {
        dynamicArray = new int[size];
    }
    catch (std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return 1;  // Exit the program on failure
    }
    //1. Catching the Exception - if the allocation fails, C++ throws an exception of type std::bad_alloc. 
    // The & symbol the exception is passed by reference. This allows you to catch the exception object and access its information

    // If allocation succeeded, we can use the array
    dynamicArray[0] = 42;
    std::cout << "First element: " << dynamicArray[0] << std::endl;

    // Free the memory
    delete[] dynamicArray;

    return 0;
}
