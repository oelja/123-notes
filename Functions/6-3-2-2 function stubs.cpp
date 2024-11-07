#include<iostream>
using namespace std;
 
double ConvKilometersToMiles(double numKm) {
   cout << "FIXME: Convert km to m" << endl;
   return 0.0;
}
 
double ConvLitersToGallons(double numLiters) {
   cout << "FIXME: Convert l to gal" << endl;
   return 0.0;
}
 
double CalcMpg(double distMiles, double gasGallons) {
   cout << "FIXME: Calculate MPG" << endl;
   return 0.0;
}
 
int main() {
   double distKm;
   double distMiles;
   double gasLiters;
   double gasGal;
   double userMpg;
   
   cout << "Enter kilometers driven: ";
   cin >> distKm;
   cout << "Enter liters of gas consumed: ";
   cin >> gasLiters;
   
   distMiles = ConvKilometersToMiles(distKm);
   gasGal = ConvLitersToGallons(gasLiters);
   userMpg = CalcMpg(distMiles, gasGal);
   
   cout << "Miles driven: " << distMiles << endl;
   cout << "Gallons of gas: " << gasGal << endl;
   cout << "Mileage: " << userMpg << " mpg" << endl;
   
   return 0;
}

double ConvKilometersToMiles(double numKm) {
   double milesPerKm = 0.621371;
   return numKm * milesPerKm;
}

double ConvLitersToGallons(double numLiters) {
   double gallonsPerLiter = 0.264172;
   return numLiters * gallonsPerLiter;
}
