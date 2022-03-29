#include <iostream>
using namespace std;

int main() {
const int arraySize = 3;
int abc[arraySize] = {};
int minimum, maximum;

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
        maximum < abc[i];
      }
	  }
    
    cout << "\nO maior número é: " << maximum << endl;
    cout << "O menor número é: " << minimum << endl << endl;

    system("pause");

  goto Repetir;

  return 0;
}
/**/

/*
#include <iostream>
using namespace std;

int main () {
int mn,mx;
const int Numb = 3;
int a[Numb]; //10 elements

cout<<"Enter " << Numb << " values:" << endl; //prompts user for X values.
for(int i=0;i<Numb;i++) {
cout<< "Enter value: ";
cin>> a[i]; // puts values in array
}

mn=a[0];
mx=a[0];

for(int i=1;i<Numb;i++) {
    if(mn>a[i]) {
    	mn=a[i];
    }
    else if(mx<a[i]) {
    	mx = a[i];
    }
}

cout<<"\nMaximum number is: "<< mx << endl;
cout<<"Minimum number is: "<< mn << endl;

return 0;

}
*/