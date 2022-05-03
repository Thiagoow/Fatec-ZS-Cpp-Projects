#include "cstdlib"
#include "iostream"
#include "string"
using namespace std;

void exibir(string nomedigitado) { cout << "\nNome:" << nomedigitado << endl; }

int main() {
   string nome, cpf;
   cout << "\nDigite o Nome: ";

   //👇🏽 Allow user digit spaces:
   getline(cin, nome);
   exibir(nome);

   system("pause");
   return 0;
}