#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;

int Contar(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + Contar(num / 10);
    }
}

int main(){
    int num, resultado;
    cout << "Digite su numero ENTERO: " << endl;
    cin >> num;
    resultado = Contar(num);
    cout << "La cantidad de digitos de su numero es: "<< resultado << endl;
}