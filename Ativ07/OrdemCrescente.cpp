#include <iostream>
using namespace std;
#define MAX 10

int main() {
   int abc[MAX];
   int num, j, temp;
   string loop;

Repeat:
   system("cls");
   // cout << "---Ordem Crescente---" << endl;
   cout << "Digite o tamanho da array: ";
   cin >> num;
   if (num < 0 || num > MAX) {
      cout << "Digite uma quantidade válida❗ (< 10 && > 0)" << endl;
      return -1;
   }

   // Lê os nums:
   for (int i = 0; i < num; i++) {
      cout << "Digite num [" << i + 1 << "]: ";
      cin >> abc[i];
   }

   cout << "\nNums digitados ✔:" << endl;
   for (int i = 0; i < num; i++) {
      cout << abc[i] << " ";
   }

   // Sort array in ascending order:
   for (int i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (abc[i] > abc[j]) {
            temp = abc[i];
            abc[i] = abc[j];
            abc[j] = temp;
         }
      }
   }

   cout << "\n\nArray em ordem CRESCENTE ⬆:" << endl;
   for (int i = 0; i < num; i++) {
      cout << abc[i] << " ";
   }

   cout << "\n\nPara não repetir o algoritmo, digite 'N', ou 'n': ";
   cin >> loop;
   if (loop == "N" || loop == "n") {
      return 0;
   }

   goto Repeat;
   return 0;
}
