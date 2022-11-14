#include <math.h>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

double aumento;
int linha = -1;
typedef struct str reg;

struct str {
   string nome[3];
   int idade[3];
   char sexo[3];
   int salario[3];
   int salarioNovo[3];
};

reg tb1;
reg *ptb1 = &tb1;

void NovaLinhaStruct();
void listarLinhasStruct();
int ler_idade();
char ler_sexo();
string ler_nome();
double ler_salario();
// double getAumento();
void controle();

int main() {
   setlocale(LC_ALL, "Portuguese");
   controle();
   return 0;
}

string ler_nome() {
   string name;
   cout << "\nDigite o nome: ";
   cin >> name;
   return name;
}

int ler_idade() {
   int id;
   cout << "\nDigite a idade: ";
   cin >> id;
   return id;
}

char ler_sexo() {
   char sex;
   cout << "\nDigite o sexo (F/M)";
   cin >> sex;
   return sex;
}

double ler_salario() {
   double sal;
   cout << "\nDigite o salário: ";
   cin >> sal;
   return sal;
}

void getAumento(double *sal, double aum) { *sal *= aum; }

void getAumento(double *sal, double aum);

void NovaLinhaStruct() {
   linha++;

   cin.ignore();
   string nom;
   nom = ler_nome();
   ptb1->nome[linha] = nom;

   ptb1->idade[linha] = ler_idade();
   ptb1->sexo[linha] = ler_sexo();
   ptb1->salario[linha] = ler_salario();
}

void listarLinhasStruct() {
   system("clear");
   for (int i = 0; i <= linha; i++) {
      cout << ptb1->nome[i] << " -- " << ptb1->idade[i] << " -- "
           << ptb1->sexo[i] << " -- " << ptb1->salario[i] << " -- " << aumento
           << "\n\n";
   }

   system("sleep 5");
}

void controle() {
   int tecla;

   while (true) {
      cout << "\n### MENU ###";
      cout << "\n1- Ler linha\n2- Mostrar\n3- Sair\n";
      cin >> tecla;

      switch (tecla) {
         case 1:
            NovaLinhaStruct();
            break;
         case 2:
            listarLinhasStruct();
            getAumento(&aumento, 0.10);
            break;
         case 3:
            exit(0);
            break;
      }
   }
}