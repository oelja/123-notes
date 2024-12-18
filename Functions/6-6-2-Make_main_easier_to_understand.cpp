#include <iostream>
#include <cmath>
using namespace std;

// Function prompts user to enter positive non-zero number
int PromptForPositiveNumber() {
   int userNum;

   userNum = 0;
   while (userNum <= 0) {
      cout << "Enter a positive number (>0): " << endl;
      cin >> userNum;
      
      if (userNum <= 0) {
         cout << "Invalid number." << endl;
      }
   }

   return userNum;
}


// Function returns greatest common divisor of two inputs
int FindGCD(int aVal, int bVal) {
   int numA;
   int numB;

   numA = aVal;
   numB = bVal;
   
   while (numA != numB) { // Euclid's algorithm (an efficient 
   //method for computing the greatest common divisor (GCD) of two 
   //integers (numbers), the largest number that divides them both 
   //without a remainder. )
      if (numB > numA) {
         numB = numB - numA;
         //cout << numB << endl;
      }
      else {
         numA = numA - numB;
         //cout << numA << endl;
      }
   }
   
   return numA;
}

// Function returns least common multiple of two inputs
int FindLCM(int aVal, int bVal) {
   int lcmVal;
   
   lcmVal = abs(aVal * bVal) / FindGCD(aVal, bVal);
   
   return lcmVal;
}

int main() {
   int usrNumA;
   int usrNumB;
   int lcmResult;
   
   cout << "Enter value for first input" << endl;
   usrNumA = PromptForPositiveNumber();

   cout << endl << "Enter value for second input" << endl;
   usrNumB = PromptForPositiveNumber();
   
   lcmResult = FindLCM(usrNumA, usrNumB);
   
   cout << endl << "Least common multiple of " << usrNumA
        << " and " << usrNumB << " is " << lcmResult << endl;
   
   return 0;
}