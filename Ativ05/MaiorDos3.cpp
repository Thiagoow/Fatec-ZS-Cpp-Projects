#include <iostream>
using namespace std; //23 32 96 -> 96 23

int main() {
const int arraySize = 3;
double abc[arraySize];
double minimum, maximum;

  Repetir:
    system("cls");
    cout << "--Digite " << arraySize << " valores--\n"; 
    
    for (int i = 0; i < arraySize; i++) {
      cout << "Digite o valor: "; cin >> abc[i]; 
    }
    
    minimum = abc[0];
    maximum = abc[0];

    for (int i = 1; i < arraySize; i++) {
      if (minimum > abc[i]) {
        minimum = abc[i];
      }
      else if (maximum < abc[i]) {
        maximum = abc[i];
      }
	  }
    
    cout << "\nO maior número é: " << maximum << endl;
    cout << "O menor número é: " << minimum << endl << endl;

    system("pause");

  goto Repetir;

  return 0;
}