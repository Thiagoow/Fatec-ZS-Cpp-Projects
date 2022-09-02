#include "iostream"
using namespace std;

// Vars declaration:
int const arraySize = 4;
struct structure {
   double sum;
   double total;
   double product;
   double nums[arraySize];
};
struct structure vars;

// Subroutines:
void inputNumbers() {
   for (int i = 0; i < arraySize; i++) {
      cout << "Num " << i + 1 << ": ";
      cin >> vars.nums[i];
   }
}
void calcNumbers() {
   vars.sum = vars.nums[0] + vars.nums[3];
   vars.product = vars.nums[0] * vars.nums[2];
   vars.total = vars.product + vars.sum;
   cout << "Calculado!" << endl;
}
void outputData() {
   for (int i = 0; i < arraySize; i++) {
      cout << "Num " << i + 1 << ": " << vars.nums[i] << endl;
   }
   cout << "\nSoma: " << vars.sum << "\nProduto: " << vars.product << endl;
}

//----------
int main() {
   int menuOp;

Menu:
   system("cls");
   cout << "1 Digitar nums \n2 Calcular nums\n3 Exibir resultados"
        << "\n4 Fechar algoritmo\n\nDigite uma opção: ";
   cin >> menuOp;

   system("cls");
   switch (menuOp) {
      case 1:
         inputNumbers();
         break;
      case 2:
         calcNumbers();
         break;
      case 3:
         outputData();
         break;
      case 4:
         exit(0);
         break;
   }

   system("pause");
   goto Menu;
}
