#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;

double Potencia(double base, double exponente) {
    if (exponente == 0) {
        return 1;  // Cualquier número elevado a 0 es 1
    } else {
        return base * Potencia(base, exponente - 1);
    }
}

int main(){
    double base, exponente, resultado;
    cout << "Digite su base y su exponente: " << endl;
    cin >> base >> exponente;
    resultado = Potencia(base, exponente);
    cout << "El resultado es: " << resultado << endl;
}