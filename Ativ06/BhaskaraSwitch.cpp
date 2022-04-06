#include "cstdlib"
#include "iostream"
#include "math.h"

using namespace std;
int a, b, c, raiz1, raiz2, delta;

int main() {
Repetir:
   system("cls");

   cout << "---Cálculo Raiz 2º Grau---";
   cout << "\n     Ax² +Bx -C = 0\n\n";

   cout << "digite também o sinal do coeficiente, se \nestiver em fração, "
           "converta para decimal❗ \n\n";
   cout << "A = ";
   cin >> a;
   cout << "B = ";
   cin >> b;
   cout << "C = ";
   cin >> c;

   // pow -> base(num, expoente):
   delta = pow(b, 2) - (4 * a * c);

   switch (delta) {
      case 0:
         cout << "\nA equação nao possui raízes reais!";
         cout << "\nPois delta é < 0 🤔" << endl;
         break;

      default:
         switch (a) {
            /*👇🏽 case < 0 (this doesn't work in pure c++,
            it is working here because of GCC extension): */
            case 0 ... 0:
               cout << "\nA equação nao possui raízes reais!";
               cout << "\nPois A = 0" << endl;
               break;

            default:
               raiz1 = (-b + sqrt(delta)) / (2 * a);
               raiz2 = (-b - sqrt(delta)) / (2 * a);

               cout << "\nx = {" << raiz1 << ", ";
               cout << raiz2 << "} \n";
               cout << "Delta: " << delta << "\n\n";
               break;
         }
         break;
   }

   system("pause");

   goto Repetir;

   return 0;
}
