
#include <iostream>
using namespace std;

void PrintMenu() {
   cout << "Today's Menu:" << endl;
   cout << "   1) Gumbo" << endl;
   cout << "   2) Jambalaya" << endl;
   cout << "   3) Quit" << endl << endl;
}

int main() {
   bool quit = false;
   int choice;

   while (!quit) {
      PrintMenu();
      cout << "Enter choice: ";
      cin >> choice; 
      if (choice == 3) {
         cout << "Goodbye" << endl;
         quit = true;
      }
      else {
         cout << "Order: ";
         if (choice == 1) {
            cout << "Gumbo" << endl;
         }
         else if (choice == 2) {
            cout << "Jambalaya" << endl;
         }
         cout << endl;
      }  
   }  
   return 0;
}