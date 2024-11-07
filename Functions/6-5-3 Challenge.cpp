#include <iostream>
using namespace std;

// Define a function FindResources() that takes two integer parameters as a project's priority and the number of project tasks
// and returns the number of people required for this project as an integer.

int FindResources(int pp, int t) {
   int people;
   if (t < 40 && pp == 1) {
      people = 70;}
   else if (t >= 40 && t < 129 && pp == 1) {
      people = 75;}
   else if (t >= 130 && pp == 1) {
      people = 85;}
   else { 
      if (t < 40 && pp == 2) {
         people = 45;}
      else if (t >= 40 && t < 129 && pp == 2) {
         people = 50;}
      else if (t >= 130 && pp == 2) {
         people = 55;}
      else {
            if (t < 40 && pp == 3) {
               people = 25;}
            else if (t >= 40 && t < 129 && pp == 3) {
               people = 30;}
            else if (t >= 130 && pp == 3) {
               people = 35;}
            else {
               people = 16;}
         }
      }
   return people;
   }

int main() {
   int projectPriority;
   int tasks;

   cin >> projectPriority;
   cin >> tasks;

   cout << FindResources(projectPriority, tasks) << endl;

   return 0;
}