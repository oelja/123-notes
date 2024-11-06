//  C++ does not provide built-in bounds checking for arrays, so accessing out-of-bounds indices can result in undefined behavior.

#include <iostream>

using namespace std;

int main() {
    // Declare a static array of integers
    int static_array[5] = {10, 20, 30, 40, 50};
    
    int index;

    cout << "Enter an index to access (0-4): ";
    cin >> index;

    // Check for out-of-bounds access
    if (index < 0 || index >= 5) {
        // If index is invalid, print the error to std::cerr
        cerr << "Error: Index " << index << " is out of bounds!" << endl;
        //  standard error stream (std::cerr),  used for error reporting.
    } else {
        // If index is valid, access and display the array element
        cout << "Element at index " << index << ": " << static_array[index] << endl;
    }

    return 0;
}
