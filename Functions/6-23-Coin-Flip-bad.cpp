#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip(int coinFlips) {
   string flipResult;
   int coinSide;
   for (int i = 0; i < coinFlips; ++i) {
      coinSide = rand() % 2;
      if (coinSide == 1) {
         flipResult += "Heads\n";  // Print "Heads" for 0
      } else {
         flipResult += "Tails\n";  // Print "Tails" for 1
      }
   
   }
   return flipResult;
}

int main() {
   srand(2);  // Unique seed
   int coinFlips;
   string flipResults;
   
cin >> coinFlips;
   
flipResults = CoinFlip(coinFlips);
   
cout << flipResults;
   
return 0;
}