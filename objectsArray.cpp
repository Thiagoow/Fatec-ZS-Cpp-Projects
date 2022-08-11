#include <iomanip>
#include <iostream>
using namespace std;

// Object class/interface:
class UserInfos {
   int cpf;
   string name;

  public:
   // Object functions:
   void setData();
   void showData();
};

// Subroutines:
void UserInfos::setData() {
   cout << "Digite o nome: ";
   cin >> name;
   cout << "Digite seu CPF: ";
   cin >> cpf;
}
void UserInfos::showData() {
   cout << "CPF: " << cpf << endl;
   cout << "Nome: " << name << endl;
   cout << "---------" << endl;
}

// ------------
int main() {
   // Max of 30 users 👇🏼:
   UserInfos users[30];
   const int arraySize = 2;

   for (int i = 0; i < arraySize; i++) {
      users[i].setData();
   }

   cout << "\n\n---Users Data---\n";
   for (int i = 0; i < arraySize; i++) {
      users[i].showData();
   }
}