#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
   string menu, loop;
   int menuSwitch = 0;

Repeat:
   system("cls");
   cout << "---Verifica se o número é Primo---\n";
   cout << "a) Verificação única\n";
   cout << "b) Todos dos primos de 0 a X\n";
   cin >> menu;

   if (menu == "a" || menu == "A") {
   LoopA:
      int num;
      bool primo = true;

      system("cls");
      cout << "Digite num: ";
      cin >> num;

      // 0 e 1 NÃO são números primos:
      if (num == 0 || num == 1) {
         primo = false;
      }

      for (int i = 2; i <= num / 2; i++) {
         if ((num % i) == 0) {
            primo = false;
            break;
         }
      }

      if (primo) {
         cout << "O num digitado é primo ✔";
      } else {
         cout << "O num digitado não é primo ❌";
      }

      cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
      cin >> loop;
      if (loop == "N" || loop == "n") {
         goto Repeat;
      }
      goto LoopA;

   } else if (menu == "b" || menu == "B") {

   } else {
      cout << "Digite uma opção válida❗ 😑";
   }
   return 0;
}