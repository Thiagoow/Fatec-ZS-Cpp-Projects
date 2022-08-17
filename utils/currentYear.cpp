#include <ctime>
#include <iostream>
using namespace std;

// Current time getter:
time_t now = time(0);
tm *ltm = localtime(&now);
const int currentYear = 1900 + ltm->tm_year;

// Subroutines:
int calcAge(int year) { return currentYear - year; }
int calcLiquidSalary(double salary) { return salary * 0.1; }

int main() {
   const int ages[] = {30, 45};
   const int arraySize = sizeof(ages);
   const string fullNames[] = {"Sara Lemes", "Ricardo Jafé"};
   const double bruteSalarie[] = {12000, 10243.20};

   for (int i = 0; i < arraySize; i++) {
      cout << fullNames[i]
           << " seu salário líquido é: " << calcLiquidSalary(bruteSalarie[i])
           << endl;
      cout << "E você nasceu em: " << calcAge(ages[i]) << endl;
   }

   return 0;
}