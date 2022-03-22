#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float volume, comprimento, largura, altura;

  printf("Comprimento da caixa = "); scanf("%f", &comprimento);
  printf("Largura da caixa = "); scanf("%f", &largura);
  printf("Altura da caixa = "); scanf("%f", &altura);

  volume = comprimento * (largura * altura);

  //system("cls");
  printf("\nVolume dessa caixa retangular = %.2f", volume);
}