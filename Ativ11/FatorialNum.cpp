#include <iostream>
#include <string>
using namespace std;

int FindFactorial(int item) {
   int fact = 1;
   while (item > 1) {
      fact *= item--;
   }
   return fact;
}
int logAntecessores(int item) {
   while (item > 1) {
      cout << item-- << ", ";
   }
   return 0;
}

//---------------
int main() {
   int num;
   string repeat;

Repetir:
   system("cls");
   cout << "Digite um número aleatório: ";
   cin >> num;

   cout << "O fatorial desse num é: " << FindFactorial(num);
   cout << "\n\n" << logAntecessores(num) << endl << endl;

   cout << "Para não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> repeat;
   if (repeat == "N" || repeat == "n") {
      return 0;
   }
   goto Repetir;

   return 0;
}