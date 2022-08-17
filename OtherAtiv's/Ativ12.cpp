#include <iostream>
using namespace std;
// Global variables:
const double fees = 0.02;
const double interests = 0.01;

// Object class/interface:
class BillsClass {
   int delayDays;
   double initialBill;
   double totalBill;

  public:
   // Object functions:
   void setData();
   double calcBill();
   void showData();
};

// Subroutines:
void BillsClass::setData() {
   system("cls");
   cout << "Type the total value of your bill: ";
   cin >> initialBill;
   cout << "How much days did you delay to pay?: ";
   cin >> delayDays;
   cout << "---------" << endl;
}
double BillsClass::calcBill() {
   totalBill = initialBill;
   double monthlyFees = fees * (delayDays / 30);

   if (delayDays >= 30) {
      totalBill += (initialBill * monthlyFees) + (initialBill * interests);
   } else if (delayDays != 0) {
      totalBill += (initialBill * fees);
   }
   return totalBill;
}
void BillsClass::showData() {
   cout << "Initial value: " << initialBill << endl;
   cout << "Delay days: " << delayDays << endl;
   cout << "Total value: " << totalBill << endl;
   cout << "---------" << endl;
}

// ------------
int main() {
   BillsClass array[] = {};
   // vector<BillsClass> array;
   array[0].setData();
   array[0].calcBill();

   cout << "\n--Here's your bill value--\n";
   array[0].showData();
}