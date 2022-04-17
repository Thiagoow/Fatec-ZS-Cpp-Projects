#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
   int num;
   int tecla;

MENU:
   system("cls");
   cout << "\nMenu\n1 - Executar\n2 - Finalizar\n item:";
   cin >> tecla;

   switch (tecla) {
      case 1:
         cout << "\nDigite num:";
         cin >> num;

         if (num % 2 == 0 && num % 3 == 0) {
            cout << "\n" << num << "  é divisível por 2  e por 3 ";
            cout << "\n Portanto, 2 e 3 são divisores de " << num << endl;

         } else {
            cout << "\nNum NÃO é divisível por 2 e por 3!";
         }
         break;

      case 2:
         cout << "Fim do Programa!\n";
         exit(0);
         break;
   }

   system("pause");
   goto MENU;

   return 0;
}