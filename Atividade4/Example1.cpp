#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
char gen; 
string msg;

int main() { 
  Repetir: //Ponto de repetição
    system("cls");

    cout << "---Formulário---" << endl; //endl-> Pula uma linha
    cout << " A) Binário" << endl;
    cout << " B) Não-binário" << endl;
    cout << " C) Prefiro não dizer" << endl;
    cout << " E) SAIR ❌" << endl << endl;
    cout << "Com qual gênero acima você se identifica? (Digite A, B ou C): ";
    //scanf(gen):
    cin >> gen;

    switch (gen) {
      case 'a':
         msg = "Viva a igualdade de gênero! ♀️♂️";
      break;

      case 'b':
         msg = "Viva a comunidade LGBTQI+ 🌈";
      break;
     
      case 'c':
         msg = "Tudo bem, muito obrigado! ✌ 😊";
      break;
 
      case 'e':
        system("cls");
        return 0;
      break;

      default:
        msg = "Acho que você não digitou uma alternativa válida 🤔 Por favor, tente novamente 🥺😊";
    };

    cout << msg << endl << endl;

    //"Digite qualquer tecla para continuar":
    system("pause");

  goto Repetir;
  //☝🏼 Volta ao ponto de repetição

  return 0;
}