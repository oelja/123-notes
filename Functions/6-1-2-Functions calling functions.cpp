#include <iostream>
using namespace std;

double CalcCircleArea(double circleDiameter) {
   double circleRadius;
   double circleArea;
   double piVal = 3.14159265;
   
   circleRadius = circleDiameter / 2.0;
   circleArea = piVal * circleRadius * circleRadius;
   
   return circleArea;
}

double PizzaCalories(double pD) {
   double totalCalories;
   double caloriesPerSquareInch = 16.7;    // Regular crust pepperoni pizza
   
   totalCalories = CalcCircleArea(pD) * caloriesPerSquareInch;
   
   return totalCalories;
}


int main() {

   double pizzaDiameter = 12.0;

   cout << "12 inch pizza has " << PizzaCalories(pizzaDiameter) << " calories." << endl;
   pizzaDiameter = 14.0;

   cout << "14 inch pizza has " << PizzaCalories(pizzaDiameter) << " calories." << endl;
   
   return 0;
}