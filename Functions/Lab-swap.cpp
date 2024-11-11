#include <iostream>
using namespace std;

/* SwapValues that takes four integers as parameters 
and swaps the first with the second, and the third with the fourth values */ 
void SwapValues(int& v1, int& v2, int& v3, int& v4) {
      int temp;
          // Swap the first two values

      temp = v1;
      v1 = v2;
      v2 = temp;
          // Swap the third and fourth values

      temp = v3;
      v3 = v4;
      v4 = temp;
      
   }
int main() {
   /*  prints the swapped values on a single line separated with spaces and ending with a newline. */
   int p1, p2, p3, p4;
   
   // Prompt the user for input
   //cout << "enter four values separated by a space ";
  
   // Take input from the user  
   cin >> p1 >> p2 >> p3 >> p4;

   // Call the swap function   
   SwapValues(p1, p2, p3, p4);
   
   // Output the swapped values
   cout << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
   
   return 0;
}

