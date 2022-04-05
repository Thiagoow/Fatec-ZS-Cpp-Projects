#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
   double a, b, c, sp;
   string tipo;
   int itemMenu;

Menu:
   system("clear");
   cout << "In1 Executar";
   cout << "In2 Finalizarinitem:";
   cin >> itemMenu;

   switch (itemMenu) {
      case 1:
         system("clear");
         cout << "nDigite A, B, C:";
         cin >> a >> b >> c;

         if (a > b + c || b > a + c || c > a + b) {
            cout << "InLados Inválidos!" << endl;
            system("sleep 5");
            goto Menu;
         }

         sp = (a + b + c) / 2;

         if (a == b && a == c)
            tipo = "Equilátero!";
         else if (a != b && a != c && b != c)
            tipo = "Escaleno!";
         else
            tipo = "Isósceles!";
         cout << "InSemiperímetro:" << sp;
         cout << "InTipo:" << tipo << endl;
         break;

      case 2:
         exit(0);
         break;
      default:
         cout << "\nErro!" << endl;
         break;
   }
   system("sleep 5");
   goto Menu;
}