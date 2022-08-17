#include <stdio.h>
#include <stdlib.h>
// Biblioteca de idiomas do C/Cpp:
#include <locale.h>

int main() {
   // Deixa acentuação no C++:
   // setlocale(LC_ALL, "Portuguese");

   /*☝🏼 Se nn funcionar:
   1- Windows + R -> Digite "intl.cpl";
   2- Vá na aba "Administrativo" e clique no botão Alterar localidade do
   sistema; 3- Ativar Beta: Use Unicode UTF-8 para suporte a idiomas em todo o
   mundo; 4- Reinicie o sistema. Se seguiu os passos acima, nn use a biblioteca,
   pois a msm se encontra DEPRECATED❗ */

   char name[] = "Thiago";

   printf("Olá mundo, meu nome é %s! :D\n", name);
}

/* Pra executar esse código com tdm-gcc + a extensão
c/c++ compiler extension, é só apertar a tecla f6 :D */