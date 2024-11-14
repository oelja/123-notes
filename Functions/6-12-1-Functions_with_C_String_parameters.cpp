#include <iostream>
#include <cstring>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
   int i;      // Loop index
   
   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }
}

int main() {
   const int INPUT_STR_SIZE = 50;  // Input C string size
   char userStr[INPUT_STR_SIZE];   // Input C string from user
   
   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   cin.getline(userStr, INPUT_STR_SIZE);
   
   // Call function to modify user defined C string
   StrSpaceToHyphen(userStr);
   
   cout << "String with hyphens: " << userStr << endl;
   
   return 0;
}

/** The parameter definition uses [] to indicate an array parameter. The function call's argument does not use []. The compiler automatically passes the C string as a pointer. Hence, the above function modifies the original string argument (userStr) and not a copy.

The strlen() function can be used to determine the length of the string argument passed to the function. So, unlike functions with array parameters of other types, a function with a C string parameter does not require a second parameter to specify the string size. */