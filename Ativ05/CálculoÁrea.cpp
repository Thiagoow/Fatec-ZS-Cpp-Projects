#include "iostream"
#include "math.h"
#include "cstdlib"
const double pi = 3.14;

using namespace std;
double areaTri, areaQuad, areaPent, sides;
double l1, l2, l3, l4, l5, heronP; 

int main() { 
  Repetir:
    system("cls");

    //tri, quadrado, pent
    cout << "---Área de Poligóno---" << endl;
    cout << "Digite a quantidade de lados:" << endl;
    cin >> sides;

    if (sides < 3) {
      cout << "Não é um polígono❗" << endl << endl;
      return 0;
    }
    else if (sides > 5) {
      cout << "Polígono não identificado❗" << endl << endl;
      return 0;
    }
    else if (sides == 3) {
      cout << "\nDigite os valores dos lados separadas por enter:" << endl;
      cout << "Lado 1: "; cin >> l1;
      cout << "Lado 2: "; cin >> l2;
      cout << "Lado 3: "; cin >> l3;
      

      heronP = (l1 + l2 + l3) / 2;
      areaTri = heronP * ((heronP - l1) * (heronP - l2) * (heronP - l3));
      areaTri = sqrt(areaTri);

      cout << endl << "A área desse 🔺 é " << areaTri << endl;
    } 
    else if (sides == 4) {
      cout << "\nDigite o valor de todos os lados:" << endl;
      cout << "Valor dos lados: "; cin >> sides;
      
      areaQuad = pow(sides, 2);
      cout << endl << "A área desse ⬛ é " << areaTri << endl;
    } 
    else {
      cout << "\nDigite o valor de todos os lados:" << endl;
      cin >> sides;
      cout << "\nDigite o valor da apótema desse pentágono:" << endl;
      cin >> l1;
      
      areaPent = sides * l1;
      cout << endl << "A área desse pentágono é " << areaTri << endl;
    }

    system("pause");

  goto Repetir;

  return 0;
}