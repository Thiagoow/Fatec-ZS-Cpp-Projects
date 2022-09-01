#include "cstdlib"
#include "iostream"
#include "string.h"
using namespace std;

// Vars declaration:
int line = -1;
int const arraySize = 5;

struct disciplines {
   string name[arraySize];
   double score1[arraySize];
   double score2[arraySize];
   double media[arraySize];
};
struct disciplines tableMedias;

// Input functions:
string inputName() {
   string user;
   cout << "\nNome: ";
   getline(cin, user);
   return user;
}
double inputScore1() {
   double score;
   cout << "Nota 1: ";
   cin >> score;
   return score;
}
double inputScore2() {
   double score;
   cout << "Nota 2: ";
   cin >> score;
   return score;
}

// Subroutines:
void newData() {
   line++;
   cin.ignore();
   string name_temp = inputName();
   tableMedias.name[line] = name_temp;
   tableMedias.score1[line] = inputScore1();
   tableMedias.score2[line] = inputScore2();
}
void calcMedias() {
   system("cls");
   for (int i = 0; i <= line; i++) {
      tableMedias.media[i] =
          (tableMedias.score1[i] + tableMedias.score2[i]) / 2;
   }
   cout << "Médias calculadas!" << endl;
   system("pause");
}
void outputData() {
   system("cls");
   for (int i = 0; i <= line; i++) {
      cout << tableMedias.name[i];
      cout << " Nota1: " << tableMedias.score1[i];
      cout << " & Nota2: " << tableMedias.score2[i];
      cout << " - Média: " << tableMedias.media[i] << endl;
   }
   cout << endl;
   system("pause");
}

//----------
int main() {
   int menuOp;
   while (menuOp != 4) {
      system("cls");
      cout << "1 Cadastrar alunos \n2 Calcular médias\n3 Exibir médias"
           << "\n4 Fechar algoritmo\n\nDigite uma opção: ";
      cin >> menuOp;

      switch (menuOp) {
         case 1:
            newData();
            break;
         case 2:
            calcMedias();
            break;
         case 3:
            outputData();
            break;
         case 4:
            exit(0);
            break;
      }
   }
}
