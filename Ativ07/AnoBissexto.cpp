#include <iostream>
using namespace std;

int main() {
   int ano;
   string loop;

Repeat:
   system("cls");
   cout << "---Digite um ano---\n";
   cin >> ano;

   if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
      cout << "\nO ano digitado é bissexto 😱";
   } else {
      cout << "\nO ano não é bissexto❗";
   }

   cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> loop;
   if (loop == "N" || loop == "n") {
      return 0;
   }

   goto Repeat;
   return 0;
}