#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
int v1, v2;

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
        cout << "O maior valor é " << v1 << " e o menor valor é " << v2 << ". \n\n";
      }
      else{
        cout << "O maior valor é " << v2 << " e o menor valor é " << v1 << ". \n\n";
      }
    }
    system("pause");

  goto Repetir;

  return 0;    
}