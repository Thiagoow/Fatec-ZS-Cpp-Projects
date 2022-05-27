#include <iostream>
using namespace std;

int main() {
   const int arraySize = 3;
   double abc[arraySize], minimum, maximum;
   string repeat;

Repetir:
   system("cls");
   cout << "--Digite " << arraySize << " número(s)--\n";

   for (int i = 0; i < arraySize; i++) {
      cout << "Digite o num: ";
      cin >> abc[i];
   }

   minimum = abc[0];
   maximum = abc[0];

   for (int i = 1; i < arraySize; i++) {
      if (minimum > abc[i]) {
         minimum = abc[i];
      } else if (maximum < abc[i]) {
         maximum = abc[i];
      }
   }

   cout << "\nO maior número é: " << maximum << endl;
   cout << "O menor número é: " << minimum << endl << endl;

   cout << "Para não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> repeat;
   if (repeat == "N" || repeat == "n") {
      return 0;
   }

   goto Repetir;

   return 0;
}