#include <iostream>
#include <string>
using namespace std;


string convertirDigito(int digito, char unidad, char cinco, char diez) {
    string resultado = "";
    if (digito == 9) {
        resultado += unidad;
        resultado += diez;
    } else if (digito >= 5) {
        resultado += cinco;
        for (int i = 0; i < digito - 5; i++) {
            resultado += unidad;
        }
    } else if (digito == 4) {
        resultado += unidad;
        resultado += cinco;
    } else {
        for (int i = 0; i < digito; i++) {
            resultado += unidad;
        }
    }
    return resultado;
}

string convertirARomano(int numero) {
    string romano = "";

    int unidades = numero % 10;
    int decenas = (numero / 10) % 10;
    int centenas = (numero / 100) % 10;

    romano += convertirDigito(centenas, 'C', 'D', 'M');
    romano += convertirDigito(decenas, 'X', 'L', 'C');
    romano += convertirDigito(unidades, 'I', 'V', 'X');

    return romano;
}

int main() {
    int numero;

    cout << "Ingresa un número entre 0 y 999: ";
    cin >> numero;

    if (numero >= 0 && numero <= 999) {
        string romano = convertirARomano(numero);
        cout << "El número " << numero << " en números romanos es: " << romano << endl;
    } else {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}
