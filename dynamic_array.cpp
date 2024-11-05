// dynamic array is an array where the size can be determined at runtime, and memory is allocated on the heap

#include <iostream>

int main() {
    int size = 5;
    
    // Dynamically allocate memory for an array
    int* dynamicArray = new int[size];

    // Initialize the array
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Print array elements
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    // Free the dynamically allocated memory
    delete[] dynamicArray;

    std::cout << std::endl;
    std::cout << "Advantages:" << std::endl;
    std::cout << "Size can be determined at runtime." << std::endl;
    std::cout << "More flexible than static arrays." << std::endl;
    std::cout << "Disadvantages:" << std::endl;
    std::cout << "Requires manual memory management (you must use delete[] to free the memory)." << std::endl;
    std::cout << "Potential for memory leaks if you forget to free memory." << std::endl; 
    return 0;
}
