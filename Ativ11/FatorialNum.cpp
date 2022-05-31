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
int logPredecessors(int item) {
   while (item > 1) {
      cout << item-- << ", ";
   }
   return 0;
}
int sumAllFactorials(int item) {
   int sum = 0;
   while (item > 1) {
      sum += item--;
   }
   return sum;
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
   cout << "\n\n" << logPredecessors(num) << endl;
   cout << "Sendo a soma de todos esses nums: " << sumAllFactorials(num);

   cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> repeat;
   if (repeat == "N" || repeat == "n") {
      return 0;
   }
   goto Repetir;

   return 0;
}