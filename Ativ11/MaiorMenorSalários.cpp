#include <iostream>
using namespace std;

int main() {
   const int arraySize = 3;
   double incomes[arraySize], minIncome, maxIncome;
   int ages[arraySize], minAge, maxAge;
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
   maxAge = ages[0];
   minAge = ages[0];

   for (int i = 1; i < arraySize; i++) {
      if (minIncome > incomes[i]) {
         minIncome = incomes[i];
         minAge = ages[i];
      } else if (maxIncome < incomes[i]) {
         maxIncome = incomes[i];
         maxAge = ages[i];
      }
   }

   cout << "\nO maior salário digitado é R$" << maxIncome
        << ", recebido por uma pessoa de " << maxAge << " anos." << endl;
   cout << "E o menor é R$" << minIncome << ", recebido por uma pessoa de "
        << minAge << " anos.\n\n";

   cout << "Para não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> repeat;
   if (repeat == "N" || repeat == "n") {
      return 0;
   }

   goto Repetir;

   return 0;
}