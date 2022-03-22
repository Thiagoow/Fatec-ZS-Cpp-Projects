#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
double n1, n2, n3, n4, media; 
string status;

int main() { 
  Repetir:
    system("cls");

    cout << "---Cálculo de Média---" << endl;
    cout << "Digite as notas separadas por enter:" << endl;
    cout << "Nota 1: "; cin >> n1;
    cout << "Nota 2: "; cin >> n2;
    cout << "Nota 3: "; cin >> n3;
    cout << "Nota 4: "; cin >> n4;

    media = ((n1 + n2) + (n3 + n4)) / 4;
    cout << endl << "Média: " << media << endl;

    if (media < 5) {
      status = "😬 Aluno REPROVADO❗ ";
    }
    else if (media >= 5 && media < 6) {
      status = "O aluno precisa fazer a recuperação";
    }
    else {
      status = "🤩😎 Aluno APROVADO!";
    }

    cout << status << endl << endl;
    system("pause");

  goto Repetir;

  return 0;
}