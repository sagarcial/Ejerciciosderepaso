#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string frase;
    string frase2 = "";
    cout << "Escriba una frase cualquiera: " << endl;
    getline(cin, frase);
    for (int i = frase.length() - 1; i >= 0; --i) {
            frase2 += frase[i];
    }
    cout << "La frase al reves es: " << frase2 << endl;
}