/*ex06_58.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "ex06_58.h"

int main()
{
   int int1, int2;

   cout << "Input two integer values: ";
   cin >> int1 >> int2;

   cout << "The minimum integer value is: "
	<< min(int1, int2) << endl << endl;

   double double1, double2;

   cout << "Input two double values: ";
   cin >> double1 >> double2;

   cout << "The minimum double value is: "
	<< min(double1, double2) << endl << endl;
   
   char char1, char2;

   cout << "Input two char value: ";
   cin >> char1 >> char2;

   cout << "The minimum char value is: "
	<< min(char1, char2) << endl << endl;

   return 0;
}
