#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
double n1, n2, media; 
string status;

int main() { 
  Repetir:
    system("cls");

    cout << "---Cálculo de Média---" << endl;
    cout << "Digite as notas 1 e 2 separadas por enter:" << endl;
    cin >> n1;
    cin >> n2; 

    media = (n1 + n2) / 2;
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

    //"Digite qualquer tecla para continuar":
    system("pause");

  goto Repetir;

  return 0;
}