#include <iostream>
using namespace std;

int main() {
   int arraySize = 0;
   int abc[arraySize], impar[arraySize], par[arraySize];
   int odd, even = 0;
   string loop;

Repeat:
   system("cls");
   cout << "Quantos items irão existir nessa Array? ";
   cin >> arraySize;

   cout << "\n--Digite " << arraySize << " valores--\n";
   for (int i = 0; i < arraySize; i++) {
      cin >> abc[i];

      if (abc[i] % 2 != 0) {
         impar[odd] = abc[i];
         odd++;
      }
   }

   if (odd == 0) {
      cout << "\nNenhum num ÍMPAR encontrado na Array❗";
      cout << "\nArray de nums PARES:\n";
      for (int i = 0; i < arraySize; i++) {
         cout << abc[i] << " ";
      }
   } else if (odd == 1) {
      cout << "\nApenas 1 num ímpar foi encontrado. Ele é: " << impar[0];

   } else {
      cout << "\nArray de nums ímpares:\n";
      for (int i = 0; i < odd; i++) {
         cout << impar[i] << " ";
      }
   }

   cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> loop;
   if (loop == "N" || loop == "n") {
      return 0;
   }

   goto Repeat;
   return 0;
}