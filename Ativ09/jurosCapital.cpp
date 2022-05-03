#include "cstdlib"
#include "iostream"
#include "math.h"

using namespace std;
const double fee = 0.05;        //<- Taxa 5%
const double amount = 2995000;  //<- Montante
double fund, period, interests;

// Subroutines function:
int readVars() {
   cout << "Digite o valor do teu capital: ";
   cin >> fund;
   cout << "Digite o período (EM ANOS): ";
   cin >> period;
   period = period * 12;  //<- Convert to months:
   return period;
}
int calcInterests() {
   interests = fund * fee * period;
   return interests;
}
int calcFund() {
   fund = amount - interests;
   return fund;
}

// Main function:
int main() {
   int menuOp;

Menu:
   system("cls");
   cout << "---Escolha uma alternativa válida---" << endl << endl;
   cout << "1) Ler variáveis\n";
   cout << "2) Calcular\n";
   cout << "3) Exibir resultado\n";
   cout << "4) Fechar programa ❌" << endl << endl;
   cout << "Digite uma opção: ";
   cin >> menuOp;

   switch (menuOp) {
      case 1:
         cout << endl;
         readVars();
         cout << endl;
         break;

      case 2:
         calcInterests();
         calcFund();
         cout << "\nCalculado! :D" << endl;
         break;

      case 3:
         cout << "\nTeu capital é: R$" << fund << ", seu montante é: R$"
              << amount << " e os juros são R$" << interests << endl;
         break;

      case 4:
         exit(0);
         break;
   }

   system("pause");
   goto Menu;
}
