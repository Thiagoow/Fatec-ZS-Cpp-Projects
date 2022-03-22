#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float vol, raio, alt;  

  printf("Qual o raio dessa lata de óleo? ");
  scanf("%f",&raio);

  printf("Qual a altura dessa lata de óleo? (Use a mesma unidade de medida do raio) ");
  scanf("%f",&alt);

  vol = 3.14 * (raio * raio) * alt;

  printf("\nO volume dessa lata de óleo é = %.0f \n", vol);
}