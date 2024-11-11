#include <iostream>
using namespace std;

bool CheckVals() {
   int intInput;
   
   while (intInput != 99) {
      cin >> intInput;
      if ( intInput % 2 == 0) {
         return false;
      }
   }
   // reads ints from input until 99
   // return true if all ints read before 99 are odd,
   // else, return false
   return true;
   }

int main() {
	bool allOdd;

	allOdd = CheckVals();

	if (allOdd) {
		cout << "All true" << endl;
	}
	else {
		cout << "Not all true" << endl;
	}

	return 0;
}