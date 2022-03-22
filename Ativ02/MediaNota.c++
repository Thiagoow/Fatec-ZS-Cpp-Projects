#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float nota1, nota2, media;
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  media = (nota1 + nota2) / 2;
  
  printf("Média do aluno = %.2f\n\n",media);
  
  //Pausa da tela (somente para Windows):
  system("pause");
  //Retorno da função main:
  return 0;
}