#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float cel, fah;  

  printf("Escreva a temperatura em graus Celsius: ");
  scanf("%f",&cel);

  fah = (cel * 9) + 160;

  printf("São %.0f graus Fahrenheit\n", fah);
}
