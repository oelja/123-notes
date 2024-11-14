#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip() {
   string flipResult;
   int coinSide;
   
   coinSide = rand() % 2;
      if (coinSide == 1) {
         flipResult = "Heads";  // Print "Heads" for 0
      } else {
         flipResult = "Tails";  // Print "Tails" for 1
   
   }
   return flipResult;
}

int main() {
   srand(2);  // Unique seed
   int coinFlips;
   
cin >> coinFlips;

for (int i = 0; i < coinFlips; ++i) {
      cout << CoinFlip() << endl;
   }
return 0;
}