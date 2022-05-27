#include <cstdlib>
#include <iostream>
using namespace std;

int calcSum(int i, int end), res;

// Main function:
int main() {
   system("cls");
   int start, finish;

   cout << "De: ";
   cin >> start;
   cout << "Até: ";
   cin >> finish;
   calcSum(start, finish);

   cout << "\nA soma dos itens pares no intervalo é: " << res;

   return 0;
}

// Subroutine:
int calcSum(int i, int end) {
   int sum = 0;
   cout << "\nSendo os números:\n";
   while (i <= end) {
      if (i % 2 == 0) {
         sum += i;
         cout << i << endl;
      }
      i++;
   }
   res = sum;
}