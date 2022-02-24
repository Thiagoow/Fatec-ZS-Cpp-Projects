#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  //Deixa acentuação no C++:
  setlocale(LC_ALL, "Portuguese");
  /*Se nn funcionar: 
  1- Windows + R -> Digite "intl.cpl";
  2- Vá na aba "Administrativo" e clique no botão Alterar localidade do sistema;
  3- Ativar Beta: Use Unicode UTF-8 para suporte a idiomas em todo o mundo;
  4- Reinicie o sistema.
  */
  
  float cel, fah;  
  printf("Escreva a temperatura em graus Celsius: ");
  scanf("%f",&cel);

  fah = (cel * 9) + 160;

  printf("\nSão %.0f graus Fahrenheit\n", fah);
}
