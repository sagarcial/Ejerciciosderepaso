#include <iostream>
using namespace std;

int main (){

    int radio, volumen;
    cout << "Hola usuario, digite el radio de la esfera: " << endl;
    cin >> radio;
    volumen = (4/3)*(3.14)*radio;
    cout << "El volumen de su esfera es: " << volumen << endl;

    return 0;
}