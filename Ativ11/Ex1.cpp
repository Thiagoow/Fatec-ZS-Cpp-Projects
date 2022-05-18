#include <cstdlib>
#include <iostream>

using namespace std;
string userInput;

int contZeros(string text) {
   int cont = 0, contzeros = 0;
   string character;
   int totLetras = text.length();

   while (cont <= totLetras) {
      character = text.substr(cont, 1);
      if (character == "0") {
         contzeros++;
      }
      cont++;
   }
   return contzeros;
}

int main() {
   system("cls");
   cout << "Digite qualquer string: ";
   cin >> userInput;
   cout << "\nA quantidade 0's digitada é: " << contZeros(userInput) << endl;
}