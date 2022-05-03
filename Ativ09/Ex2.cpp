#include <math.h>
#include <cstdlib>
#include <iostream>
using namespace std;

// Declaração ou Resumo das Sub Rotinas
double ler_A();
double ler_B();
double ler_C();
double cal_Delta(double a, double b, double c);
double cal_x1(double a, double b, double delta);
double cal_x2(double a, double b, double delta);
void exibir(double a, double b, double c, double delta);

int main() {
   double a, b, c, delta;
   int tecla;

MENU:
   cout << "\nmenu\nl Executar\n2 Finalizar\nitem:";

   cin >> tecla;
   switch (tecla) {
      case 1:
         a = ler_A();
         b = ler_B();
         c = ler_C();
         if (a == 0) {
            cout << "\nErro!'A' deve ser diferente de zero!";
            system("pause");
            exit(0);
         } else {
            delta = cal_Delta(a, b, c);
            exibir(a, b, c, delta);
         }
         break;
         cout << "\nO programa será finalizado!";
         system("pause");
         exit(0);
         break;
   }
   goto MENU;
   return 0;
}

// CODIFICAÇÃO DAS VOIDFUNCTIONS
double ler_A() {
   double va;
   cout << "Valor de A: ";
   cin >> va;
   return va;
}
double lerB() {
   double vb;
   cout << "Valor de B: ";
   cin >> vb;
   return vb;
}
double ler_C() {
   double vc;
   cout << "Valor de C: ";
   cin >> vc;
   return vc;
}
double cal_Delta(double a, double b, double c) {
   double d = pow(b, 2) - 4 * a * c;
   return d;
}
double cal_x1(double a, double b, double delta) {
   double x = (-b + sqrt(delta)) / (2 * a);
   return x;
}
double cal_x2(double a, double b, double delta) {
   double x = (-b - sqrt(delta)) / (2 * a);
   return x;
}

void exibir(double a, double b, double c, double delta) {
   cout << "\nValor de ..A: " << a;
   cout << "\nValor de ..B: " << b;
   cout << "\nValor de ...C: " << c;
   cout << "\nValor de Delta: " << delta;

   if (delta >= 0) {
      double x1 = cal_x1(a, b, delta);
      double x2 = cal_x2(a, b, delta);
      cout << "\nValor de ..x1: " << x1;
      cout << "\nValor de ...x2: " << x2 << endl;
   } else {
      cout << "\nImpossível calcular x1 e x2\nDelta é negativo!";
   }
   system("pause");
}