#include "cstdlib"
#include "iostream"
#include "math.h"

using namespace std;
double price, days, penalty, fee, amount;
// Taxas de 1% e 2% ao mês:
const double fineTax = 0.02;
const double feeTax = 0.01;

// Subroutines function:
int readVars() {
   cout << "Digite o valor da prestação: ";
   cin >> price;
   cout << "Digite quantos dias estão atrasados: ";
   cin >> days;
}
int calcFine() {
   penalty = price * fineTax;
   return penalty;
}
int calcFees() {
   if (days > 30) {
      fee = price * (feeTax * (days / 30));
   } else {
      fee = price * feeTax;
   }
   return fee;
}
int calcAmountToPay() {
   amount = price + penalty + fee;
   return amount;
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
         calcFine();
         calcFees();
         calcAmountToPay();
         cout << "\nCalculado! :D" << endl;
         break;

      case 3:
         cout << "\nVocê deve pagar: R$" << amount << ".\nSendo R$" << fee
              << " de juros e R$" << penalty << " de multa" << endl;
         break;

      case 4:
         exit(0);
         break;
   }

   system("pause");
   goto Menu;
}
