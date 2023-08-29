#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main (){
    double a, b, c, x1, x2;
    cout << "Digite la variable a, la b y la c de su ecuacion de segundo grado: " << endl;
    cin >> a >> b >> c;
    x1 = (-(b) + sqrt(b*b-4*(a)*(c)))/(2*a);
    x2 = (-(b) - sqrt(b*b-4*(a)*(c)))/(2*a);
    cout << "La ecuacion evaluada en x1 es: " << x1 << " y la x2 es: " << x2 << endl;
}