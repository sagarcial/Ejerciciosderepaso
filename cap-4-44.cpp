#include <iostream>
using namespace std;

int main() {
    const int cantidadNumeros = 5;
    double numeros[cantidadNumeros];
    double suma = 0;


    for (int i = 0; i < cantidadNumeros; i++) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double media = suma / cantidadNumeros;

    cout << "Los números ingresados son:";
    for (int i = 0; i < cantidadNumeros; i++) {
        cout << " " << numeros[i];
    }
    cout << endl;

    cout << "Media aritmética: " << media << endl;

    return 0;
}
