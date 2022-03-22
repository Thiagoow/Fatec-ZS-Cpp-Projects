#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
int num;

int main() {
  Repetir:

    system("cls");
    cout << "Informe um número inteiro: ";
    cin >> num;

    if (num < 0) {
      num = num * (-1);
    } 
    cout << "\n\nO módulo do número inteiro é: " << num << endl;

    system("pause");

  goto Repetir;

  return 0;
}