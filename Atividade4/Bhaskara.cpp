#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
double a, b, c, raiz1, raiz2, delta;

int main() {
  Repetir:
    system("cls");

    cout << "---Cálculo Raiz 2º Grau---";
    cout << "\n     Ax² +Bx -Cx = 0\n\n";

    cout << "digite também o sinal do coeficiente, se \nestiver em fração, converta para decimal❗ \n\n";
    cout << "A = "; cin >> a;
    cout << "B = "; cin >> b;
    cout << "C = "; cin >> c;
  
    //pow -> base(num, expoente):
    delta = pow(b, 2) -(4 * a * c);
  
    if (delta >= 0 && a != 0) {
      //☝🏼 Não existe raiz de num < 0 no conjunto dos nums reais
      raiz1 = (-b + sqrt(delta)) / (2 * a);
      raiz2 = (-b - sqrt(delta)) / (2 * a);

      cout << "\nx = {" << raiz1 << ", ";
      cout << raiz2 << "} \n";
      cout << "Delta: " << delta  << "\n\n";
    } else {
      cout << "\nA equação nao possui raízes reais!";
      cout << "\nOu A = 0, ou delta é < 0 🤔" << endl;
    }

    system("pause");

  goto Repetir;

  return 0;
}
