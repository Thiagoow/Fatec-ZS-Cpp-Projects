#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
double v1, v2;

int main() {
  Repetir:
    system("cls");
    
    cout << "---Maior ou Menor---" << endl;
    cout << " Valor 1: ";
    cin >> v1;
    cout << " Valor 2: ";
    cin >> v2;

    if(v1 == v2){
      cout << endl << "Os valores " << v1 << " e " << v2 << " são == \n";
    }   
    else {
      cout << "\nOs valores " << v1 << " e " << v2 << " são != \n";

      if(v1 > v2){
        cout << "O > valor é o 1 | O < valor é o 2" << endl;
        cout << "v1 - v2 = " << v1-v2 << endl << endl;
      }
      else{
        cout << "O > valor é o 2 | O < valor é o 1" << endl;
        cout << "v2 - v1 = " << v2-v1 << endl << endl;
      }
    }
    system("pause");

  goto Repetir;

  return 0;    
}