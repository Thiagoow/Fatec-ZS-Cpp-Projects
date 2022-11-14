#include "cstdlib"
#include "iostream"
using namespace std;

typedef struct me cad;

int cont = 0;  // cada stuct é uma linha
// cont irá armazenar a quantidade de linha ou structs na memória

struct me {
   int pos;
   cad *liga;
};

cad *ultimoNo;
cad *primeiroNO;

void alocar() {
   cont++;
   cad *newcad = (cad *)malloc(sizeof(cad));

   if (cont == 1) {
      newcad->liga = NULL;
      newcad->pos = cont;
      primeiroNO = newcad;
      ultimoNo = newcad;
   } else {
      ultimoNo->liga = newcad;
      newcad->liga = NULL;
      newcad->pos = cont;
   }
   ultimoNo = newcad;

   system("sleep 3");
}

void exibir() {
   cad *temp;
   temp = primeiroNO;

   while (temp != NULL) {
      cout << temp->pos << endl;
      temp = temp->liga;
   }
}
void destruir() {
   cad *temp;
   temp = primeiroNO;

   while (temp->liga != NULL) {
      free(temp);
      temp = temp->liga;
   }
   free(primeiroNO);
   free(ultimoNo);
}

// new
void buscar_exibir(int *cad = (int *)malloc(sizeof(int))) {

   if (cad == NULL) {
      cout << "\nNão foi possível a alocação de memória!";
   } else {
      *cad = sizeof(cad);
      cout << "O valor " << *cad << " será armazenado na memória " << cad
           << endl;
   }
   system("sleep 5");

   free(cad);
}

/*-
struct cad2 {
  int pos;
  string nome;

};*/

int main() {
   setlocale(LC_ALL, "Portuguese");

   int tecla;
   while (tecla != 4) {
      system("clear");
      cout << "\n### MENU ###";
      cout << "\n1- Alocar, Exibir, Destruir ";
      /*cout << "2- Exibir";
      cout << "3- Destruir"; */
      cout << "\n2- Buscar e Exibir ";
      cout << "\n3- Está Vazia?";
      cout << "\n4- Sair";
      cin >> tecla;

      switch (tecla) {
         case 1:
            for (int i = 0; i <= 4; i++) alocar();
            exibir();
            // destruir();
            break;
         case 2:
            buscar_exibir();
            break;
         case 3:;
            break;
         case 4:
            exit(0);
            break;
      }
   }

   return 0;
}