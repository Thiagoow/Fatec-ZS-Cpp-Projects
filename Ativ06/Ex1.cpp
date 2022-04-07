#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
   double a, b, c, sp;
   string tipo;
   int itemMenu;

Menu:
   system("cls");
   cout << "1 Executar\n";
   cout << "0 Finalizar\nDigite uma das opções: ";
   cin >> itemMenu;

   switch (itemMenu) {
      case 1:
         system("cls");
         cout << "Digite A, B, C:\n";
         cin >> a >> b >> c;

         if (a > b + c || b > a + c || c > a + b) {
            cout << "\nLados Inválidos!" << endl;
            system("pause");
            goto Menu;
         }

         sp = (a + b + c) / 2;

         if (a == b && a == c)
            tipo = "Equilátero!";
         else if (a != b && a != c && b != c)
            tipo = "Escaleno!";
         else
            tipo = "Isósceles!";
         cout << "\nSemiperímetro: " << sp;
         cout << "\nTipo: " << tipo << endl << endl;
         break;

      case 0:
         exit(0);
         break;
      default:
         cout << "\nErro!" << endl;
         break;
   }
   system("pause");
   goto Menu;
}