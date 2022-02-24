#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Declaração de variáveis
  float distancia, tempo, velocidade, litrosUsados;

   // Entrada de dados
   printf("Tempo gasto = "); scanf("%f", &tempo);
   printf("Velocidade = "); scanf("%f", &velocidade);

   // Processamento de dados
   distancia = tempo * velocidade;
   litrosUsados = distancia / 12;

  // Saída de dados
  system("cls"); // Comando Windows; caso seja Linux, utilize "clear";
  printf("Velocidade media = %.2f Km/h \n", velocidade);
  printf("Tempo gasto = %.0fh \n", tempo);
  printf("Distancia = %.2f Km \n", distancia);
  printf("Litros usados = %.2f litros \n", litrosUsados);
}