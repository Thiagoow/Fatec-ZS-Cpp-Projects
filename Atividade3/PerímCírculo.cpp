#include <stdio.h>
#include <stdlib.h>
//Define a var pi com o valor 3.14:
#define pi 3.14

int main() {
    float diam, peri, raio, area;

    printf("Digite o perímetro deste círculo: ");
    scanf("%f",&peri);

    diam = peri / pi;
    //Raio é metade do diâmetro:
    raio = diam / 2;
    //Area é raio² * pi:
    area = (raio * raio) * pi;

    printf("A área deste círculo é %.02f \n", area);
    printf("\nDiâmetro: %.02f \n", diam);
    printf("Raio: %.02f", raio);
}