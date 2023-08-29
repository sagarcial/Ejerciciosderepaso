#include <iostream>
#include <stdio.h>
#include <cctype>

using namespace std;

int main(){
    string texto;
    int i;
    cout << "Ingrese una palabra cualquiera: " << endl;
    cin >> texto;

    for(char a : texto){
        if(isupper(a)){
            i++;
        }
    }
    cout << "la cantidad de caracteres mayus de su palabra es: " << i << endl;
}