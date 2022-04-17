#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
   int tecla, num;
   bool primo = true;

Repeat:
   system("cls");
   cout << "---Verifica se o número é Primo---";
   cout << "\n1 - Executar\n2 - Finalizar\nitem: ";
   cin >> tecla;

   switch (tecla) {
      case 1:
         cout << "\nDigite num: ";
         cin >> num;
         // 0 e 1 não são números primos:
         if (num == 0 || num == 1) {
            primo = false;
         }

         for (int i = 2; i <= (num / 2); i++) {
            if (num % i == 0) {
               primo = false;
               break;
            }
         }

         if (primo)
            cout << "O num digitado é primo ✔ \n\n";
         else
            cout << "O num digitado não é primo ❌ \n\n";

         system("pause");
         goto Repeat;

      case 2:
         cout << "\nFim do Programa!\n";
         exit(0);
         break;
   }

   return 0;
}