#include <iostream>
using namespace std;

int main() {
   const int arraySize = 2;
   double incomes[arraySize], ages[arraySize], minIncome, maxIncome;
   string repeat;

Repetir:
   system("cls");
   cout << "--Digite " << arraySize << " valores--\n";

   for (int i = 0; i < arraySize; i++) {
      cout << "Digite sua idade: ";
      cin >> ages[i];
      cout << "Digite teu salário: ";
      cin >> incomes[i];
      cout << endl;
   }

   minIncome = incomes[0];
   maxIncome = incomes[0];

   for (int i = 1; i < arraySize; i++) {
      if (minIncome > incomes[i]) {
         minIncome = incomes[i];
      } else if (maxIncome < incomes[i]) {
         maxIncome = incomes[i];
      }
   }

   cout << "\nO maior salário digitado é: " << maxIncome
        << ", recebido por: " << endl;
   cout << "E o menor é: " << minIncome << endl << endl;

   cout << "Para não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> repeat;
   if (repeat == "N" || repeat == "n") {
      return 0;
   }

   goto Repetir;

   return 0;
}