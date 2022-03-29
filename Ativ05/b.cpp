#include <iostream>
using namespace std;

int main () {
const int arraySize = 3;
int abc[arraySize];
int minimum, maximum;

  Repetir:
    system("cls");
    cout << "--Enter " << arraySize << " values--\n" << endl;
    
    for (int i = 0; i < arraySize; i++) {
      cout << "Enter value: "; cin >> abc[i];
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

    cout <<"\nMaximum number is: "<< maximum << endl;
    cout <<"Minimum number is: "<< minimum << endl;

    system("pause");

  goto Repetir;

  return 0;
}