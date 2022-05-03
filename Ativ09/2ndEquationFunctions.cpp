#include "cstdlib"
#include "iostream"
#include "math.h"

using namespace std;
double a, b, c, s, ah;

// Subroutines function:
int readA() {
   double a;
   cout << "Digite o valor de A: ";
   cin >> a;
   return a;
}
int readB() {
   double b;
   cout << "Digite o valor de B: ";
   cin >> b;
   return b;
}
int readC() {
   double c;
   cout << "Digite o valor de C: ";
   cin >> c;
   return c;
}

int calcS(double a, double b, double c) {
   double s;
   s = (a + b + c) / 2;
   return s;
}
int calcAh(double a, double b, double c, double s) {
   double ah;
   ah = sqrt(s * ((s - a) * (s - b) * (s - c)));
   return ah;
}
int show(double a, double b, double c, double s, double ah) {
   return a, b, c, s, ah;
}

// Main function:
int main() {
   int menuOp;

Menu:
   system("cls");
   cout << "---Escolha uma alternativa válida---" << endl << endl;
   cout << "1) Ler\n";
   cout << "2) Calcular\n";
   cout << "3) Exibir\n";
   cout << "4) Fechar programa ❌" << endl << endl;
   cout << "Digite uma opção: ";
   cin >> menuOp;

   switch (menuOp) {
      case 1:
         cout << endl;
         a = readA();
         b = readB();
         c = readC();
         cout << endl;
         break;

      case 2:
         cout << endl;
         s = calcS(a, b, c);
         ah = calcAh(a, b, c, s);
         cout << "Calculado! :D" << endl;
         break;

      case 3:
         cout << endl;
         cout << "O resultado é " << show(a, b, c, s, ah) << endl;
         break;

      case 4:
         exit(0);
         break;
   }

   system("pause");
   goto Menu;
}
