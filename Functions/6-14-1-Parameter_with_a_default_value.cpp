#include <iostream>
using namespace std;

// Function prints date in two styles (0: American (default), 1: European)
void PrintDate(int currDay, int currMonth, int currYear, int printStyle = 0) {

   if (printStyle == 0) {      // American
      cout << currMonth << "/" << currDay << "/" << currYear;
   }
   else if (printStyle == 1) { // European
      cout << currDay << "/" << currMonth << "/" << currYear;
   }
   else {
      cout << "(invalid style)";
   }
}

int main() {
   
   // Print dates given various style settings
   PrintDate(30, 7, 2012, 0);
   cout << endl;
   
   PrintDate(30, 7, 2012, 1);
   cout << endl;
   
   PrintDate(30, 7, 2012); // Uses default value for printStyle
   cout << endl;
   
   return 0;
}