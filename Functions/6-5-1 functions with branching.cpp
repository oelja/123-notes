#include <iostream>
#include <iomanip>

using namespace std;

double CalcTax(double cost) {
   return cost * 0.15;
}

// Determine shipping cost based on weight
double CalcShippingCost(double weight) {
   double cost;

   if (weight < 1) {
      cost = 7.88;
   }
   else if (weight < 6) {
      cost = 14.32;
   }
   else if (weight < 10) {
      cost = 21.11;
   }
   else {
      cost = 25.5;
   }
   cost = cost + CalcTax(cost);
   return cost;
}

int main() {
   double weightOfPackage;        // User defined package weight

   cout << "Enter package weight: ";
   cin >> weightOfPackage;
   cout << "Shipping cost: $";
   cout << fixed << setprecision(2) << CalcShippingCost(weightOfPackage) << endl;
   return 0;
}