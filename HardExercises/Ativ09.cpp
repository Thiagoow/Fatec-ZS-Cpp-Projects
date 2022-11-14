#include "cstdlib"
#include "iostream"
#include "string.h"
using namespace std;
int linha = -1;
int n = 10;

struct cliente {
   string NOME[10];
};

struct cliente clt;

string lerNome();
void bubleSort();
int buscaBin(string nombre);
void exibir();
void newline(string name);
void controle();

int main() {
   setlocale(LC_ALL, "Portuguese");

   controle();
   return 0;
}

string lerNome() {
   string NOME;
   cout << "\nDigite o nome: ";
   cin >> NOME;
   return NOME;
}

void bubleSort() {
   string aux;

   for (int i = 0; i <= n - 2; i++) {
      for (int j = i; j <= n - 1; j++) {
         if (clt.NOME[i] > clt.NOME[j]) {
            aux = clt.NOME[i];
            clt.NOME[i] = clt.NOME[j];
            clt.NOME[j] = aux;
         }
      }
   }
}

void exibir() {
   system("clear");
   for (int i = 0; i < 3; i++) cout << "\n---" << clt.NOME[i] << endl;

   system("sleep 5");
}

void newline(string name) {
   linha++;
   clt.NOME[linha] = name;
}

int buscaBin(string nom_) {
   int e = 0, d = n, m;

   for (int i = e; i <= d; i++) {
      m = (e + d) / 2;

      if (nom_ == clt.NOME[m]) {
         return m;
      } else {
         if (nom_ > clt.NOME[m]) {
            e = m;
         } else {
            d = m;
         }
      }
   }
   return -1;
}

void controle() {
   int tecla;
   string NomeBusca;

   int buscaBin_;

Menu:
   system("clear");
   cout << "\n1 Ler Dados";
   cout << "\n2 Listar Registros";
   cout << "\n3 Busca sequencial";
   cout << "\n4 Busca Binária por nome";
   cout << "\n5 Sair\nitem:";
   cin >> tecla;
   switch (tecla) {
      case 1:
         lerNome();
         break;
      case 2:
         exibir();
         break;
      case 3:
         bubleSort();
         break;
      case 4:
         cout << "\nNome de Busca ";
         NomeBusca = lerNome();
         buscaBin_ = buscaBin(NomeBusca);
         cout << "\nNome " << NomeBusca << " encontrado na posição "
              << buscaBin_;
         cout << endl;
         system("sleep 5");
         break;
      case 5:
         exit(0);
         break;
   }
   goto Menu;
}