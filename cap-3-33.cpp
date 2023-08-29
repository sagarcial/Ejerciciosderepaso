#include <iostream>
using namespace std;

int main(){
    int i = 1, x, a = 0;
    cout << "Digite un numero hasta el que quiera hacer la suma: " << endl;
    cin >> x;
    while (i <= x){
        a = a + i;
        i++;
    }
    cout << "La suma de los numeros es: " << a << endl;
}