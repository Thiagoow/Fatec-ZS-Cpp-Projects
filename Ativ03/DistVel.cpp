#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
const double soundVel = 340;

int main(){
    double dist, time;

    cout << "Digite o tempo em segundos, em que o trovão demorou para chegar até você: ";
    cin >> time;

    dist = time * soundVel;

    cout << "O distância do raio é de " << dist << " metros" << endl;

    return 0;
}