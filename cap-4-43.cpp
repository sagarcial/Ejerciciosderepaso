#include <iostream>
using namespace std;

int main() {
    const int tamano = 20;
    int numerosPares[tamano];
    int suma = 0;

    for (int i = 0; i < tamano; i++) {
        numerosPares[i] = (i + 1) * 2;
        suma += numerosPares[i];
    }

    cout << "Números pares:";
    for (int i = 0; i < tamano; i++) {
        cout << " " << numerosPares[i];
    }
    cout << endl;

    cout << "Suma de los números pares: " << suma << endl;

    return 0;
}
