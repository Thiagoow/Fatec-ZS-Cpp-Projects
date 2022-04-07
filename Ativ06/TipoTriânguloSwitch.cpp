#include <math.h>
#include <iostream>
using namespace std;

const int arraySize = 3;
int abc[arraySize] = {};
int a, b, c, sumA, sumB, sumC, tri;

int main() {
Repetir:
   system("cls");

   cout << "--Qual o tipo do triângulo--\n";
   for (int i = 0; i < arraySize; i++) {
      cout << "Lado " << i + 1 << ": ";
      cin >> abc[i];
   }

   a = abc[0];
   b = abc[1];
   c = abc[2];
   sumA = (b + c);
   sumB = (a + c);
   sumC = (b + a);

   switch (a >= sumA || b >= sumB || c >= sumC) {
      case true:
         cout << "\nEssa figura não é um 🔺 😑" << endl;
         break;

      default:
         if (a == b && a == c) {
            cout << "\nEste 🔺 é EQUILÁTERO (==)" << endl;
         } else if (a == b || a == c || b == c) {
            cout << "\nEste 🔺 é ISÓSCELES 2(==)" << endl;
         } else {
            cout << "\nEste 🔺 é ESCALENO !=" << endl;
         }
   }
   system("pause");

   goto Repetir;

   return 0;
}