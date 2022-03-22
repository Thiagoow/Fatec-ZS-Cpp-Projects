#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float prestação, valor, taxa, tempo;

  printf("Tempo gasto = "); scanf("%f", &tempo);
  printf("Valor = "); scanf("%f", &valor);
  printf("Taxa = "); scanf("%f", &taxa);

  prestação = valor + (valor * (taxa/100) * tempo);

  system("cls");
  printf("\nO valor da prestação é = R$ %.2f", prestação);
}