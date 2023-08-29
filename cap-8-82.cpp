#include <iostream>
using namespace std;

bool esCaracterValido(char c) {
    return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

bool esNumeroValidoEnBase(string numero, int base) {
    for (char c : numero) {
        if (!esCaracterValido(c))
            return false;
        
        if (base == 2 && c > '1')
            return false;
        if (base == 8 && c > '7')
            return false;
    }
    return true;
}

int main() {
    int base;
    string numero;

    cout << "Ingresa la base (2, 8, 10 o 16): ";
    cin >> base;

    if (base == 2 || base == 8 || base == 10 || base == 16) {
        cout << "Ingresa el número en base " << base << ": ";
        cin >> numero;

        if (esNumeroValidoEnBase(numero, base)) {
            cout << "Número válido en base " << base << "." << endl;
        } else {
            cout << "Número no válido en base " << base << "." << endl;
        }
    } else {
        cout << "Base no válida." << endl;
    }

    return 0;
}
