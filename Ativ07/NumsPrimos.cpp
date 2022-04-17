#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

// Função que verifica se o num é primo:
bool isPrime(int number) {
   int count = 0;

   // 0,1 e números negativos não são primos:
   if (number < 2) {
      return false;
   }

   for (int i = 2; i < number; i++) {
      if (number % i == 0) return false;
   }

   return true;
   // ☝🏼 Se chegou até aqui então é true
}

// Função principal:
int main() {
   string menu, loop;
   int menuSwitch = 0;

Repeat:
   system("cls");
   cout << "---Verifica se o número é Primo---" << endl << endl;
   cout << "a) Verificação única\n";
   cout << "b) Todos os primos de X a Y\n";
   cout << "c) Fechar programa ❌\n";
   cout << "> ";
   cin >> menu;

   if (menu == "a" || menu == "A") {  // Alternativa A menu:
   LoopA:
      int num;

      system("cls");
      cout << "Digite num: ";
      cin >> num;

      bool primo = isPrime(num);

      if (primo)
         cout << "O num digitado é primo ✔";
      else
         cout << "O num digitado não é primo ❌";

      cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
      cin >> loop;
      if (loop == "N" || loop == "n") {
         goto Repeat;
      }
      goto LoopA;

   } else if (menu == "b" || menu == "B") {  // Alternativa B menu:
   LoopB:
      int inicio, fim;

      system("cls");
      cout << "Digite o início (de X): ";
      cin >> inicio;
      cout << "Digite o fim (até Y): ";
      cin >> fim;
      cout << endl;

      for (int i = inicio; i <= fim; i++) {
         if (isPrime(i)) {
            cout << i << " ";
         }
      }

      cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
      cin >> loop;
      if (loop == "N" || loop == "n") {
         goto Repeat;
      }
      goto LoopB;

   } else if (menu == "c" || menu == "C") {  // Alternativa C menu:
      cout << endl;
      exit(0);
   }
   // No valid alternative menu:
   else {
      cout << "Digite uma opção válida❗ 😑";
   }
}