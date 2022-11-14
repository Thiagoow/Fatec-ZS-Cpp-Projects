#include <math.h>
#include <cstdlib>
#include <iostream>
#include <string>
#define max 3

using namespace std;

typedef struct lifo pilha;
struct lifo {
   int topo;
   int dado[3];
};

typedef struct lifo2 pilha2;
struct lifo2 {
   int topo2;
   int dado2[3];
};

// atribtos
int lerIdade();
// string lerNome();
int lerSalario();

pilha push(int ida, pilha p);  // empilhar registro

pilha2 push(int sal, pilha2 p);

pilha pop(pilha p);  // remover registro
pilha2 pop(pilha2 p);

void mostrar(pilha p);  // Mostrar os registrs da LIFO
void mostrar2(pilha2 p);

bool pilhaCheia(pilha p);  // Veificar Lifo pilhaCheia
bool pilhaVazia(pilha p);  // Veificar Lifo pilhaVazia

bool pilhaCheia2(pilha2 p);
bool pilhaVazia2(pilha2 p);

int tela();  // exibir a tela

void controle();  // Menu controle da LIFO

int main() {
   setlocale(LC_ALL, "Portuguese");
   controle();
   return 0;
}

int lerIdade() {
   int ida;
   cout << "\nDigite a idade: ";
   cin >> ida;
   return ida;
}

string lerNome() {
   string name;
   cout << "\nDigite o nome: ";
   getline(cin, name);
   return name;
}

int lerSalario() {
   int sal;
   cout << "\nDigite o salario: ";
   cin >> sal;
   return sal;
}

bool pilhaCheia(pilha p) {
   if (p.topo == max - 1) return true;

   return false;
}

bool pilhaCheia2(pilha2 p) {
   if (p.topo2 == max - 1) return true;

   return false;
}

bool pilhaVazia(pilha p) {
   if (p.topo == -1) return true;

   return false;
}

bool pilhaVazia2(pilha2 p) {
   if (p.topo2 == -1) return true;

   return false;
}

pilha push(int ida, pilha p) {
   if (pilhaCheia(p) == true) {
      cout << "\nPilha Cheia! " << endl;
      system("sleep 5");
      return p;
   }
   p.topo++;
   p.dado[p.topo] = ida;

   cout << "\nFoi empilhado " << ida << " anos!" << endl;
   system("sleep 5");

   return p;
}

pilha2 push(int sal, pilha2 p) {
   if (pilhaCheia2(p) == true) {
      cout << "\nPilha Cheia! " << endl;
      system("sleep 5");
      return p;
   }

   p.topo2++;
   p.dado2[p.topo2] = sal;

   cout << "\nFoi empilhado o valor de: " << sal << endl;
   system("sleep 5");

   return p;
}

pilha pop(pilha p) {
   if (pilhaVazia(p) == true) {
      cout << "\nA pilha está vazia!" << endl;
      system("sleep 5");
      return p;
   }

   cout << "\nO valor desempilhado será: " << p.dado[p.topo] << endl;
   system("sleep 5");
   p.dado[p.topo] = '\0';
   p.topo--;
   return p;
}

pilha2 pop(pilha2 p) {
   if (pilhaVazia2(p) == true) {
      cout << "\nA pilha está vazia!" << endl;
      system("sleep 5");
      return p;
   }

   cout << "\nO valor desempilhado será: " << p.dado2[p.topo2] << endl;
   system("sleep 5");
   p.dado2[p.topo2] = '\0';
   p.topo2--;
   return p;
}

void mostrar(pilha p) {
   if (pilhaVazia(p) == true) {
      cout << "\nA pilha está vazia!" << endl;
      system("sleep 5");
      return;
   }

   for (int i = p.topo; i >= 0; i--) cout << p.dado[i] << endl;
   system("sleep 10");
}

void mostrar2(pilha2 p) {
   if (pilhaVazia2(p) == true) {
      cout << "\nA pilha está vazia!" << endl;
      system("sleep 5");
      return;
   }

   for (int i = p.topo2; i >= 0; i--) cout << p.dado2[i] << endl;
   system("sleep 10");
}

int tela() {
   int tecla;
   system("clear");
   cout << "\n**--- Menu Controle ---**\n1 Push\n2 Pop\n3 Mostrar\n4 "
           "Sair\nItem: \n";
   cin >> tecla;
   return tecla;
}

void controle() {
   int menu;
   int ida_ = 0, sal_ = 0;

   pilha p1;
   p1.topo = -1;

   pilha2 p2;
   p2.topo2 = -1;

   do {
      menu = tela();

      switch (menu) {
         case 1:
            ida_ = lerIdade();
            p1 = push(ida_, p1);
            sal_ = lerSalario();
            p2 = push(sal_, p2);
            break;

         case 2:
            p1 = pop(p1);
            break;

         case 3:
            mostrar(p1);
            break;
      }
   } while (menu != 4);
   cout << "\nPrograma Finalizado!\n";
}