#include <iostream>
using namespace std;


void incrementarNumero(int &numero) {
    numero++;
}

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;


    incrementarNumero(numero);

    cout << "El número incrementado es: " << numero << endl;

    return 0;
}
