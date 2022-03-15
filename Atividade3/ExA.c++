#include <stdio.h>
#include <stdlib.h>
#include <iostream>
const double pi = 3.14;
/*☝🏼 Msm coisa que o comando: 
define pi 3.14
*/

using namespace std;

int main () {
    double base, altura, area;

    printf("----Cálculo da Área do Triângulo--- \n");

    //Out/Sáida (printf):
    cout << "Digite o valor da base: ";
    //In/Entrada (scanf):
    cin >> base;

    cout << "Digite o valor da altura: ";
    cin >> altura;

    area = (base * altura) / 2;

    //printf("", var, endPrintF):
    cout << "A área desse 🔺 é " << area << endl;
}