#include <cstdlib>
#include <iostream>
using namespace std;

int calcSum(int i, int end);

// Main function:
int main() {
   system("cls");
   int start, finish;

   cout << "De: ";
   cin >> start;
   cout << "Até: ";
   cin >> finish;

   cout << "\nA soma dos itens pares no intervalo é: " << calcSum(start, finish)
        << endl;

   return 0;
}

// Subroutine function:
int calcSum(int i, int end) {
   int sum = 0;
   while (i <= end) {
      if (i % 2 == 0) {
         sum += i;
         cout << i << endl;
      }
      i++;
   }
   return sum;
}