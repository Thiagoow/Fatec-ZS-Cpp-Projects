#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Var global:
#define gravidade 9.8;

int main() {
    float alt, tempoQueda;

    printf("---Tempo de Queda de um Corpo--- \n");
    printf("Digite a altura da queda em metros: ");
    scanf("%f",&alt);

    tempoQueda = sqrt(2 * alt) / gravidade;

    printf("O tempo de queda desse corpo é: %.02fs \n", tempoQueda);
}