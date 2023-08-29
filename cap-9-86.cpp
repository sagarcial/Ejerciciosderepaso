#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream archivo("ascii.txt"); 

    if (archivo.is_open()) { 
        for (int i = 0; i <= 127; i++) {
            archivo << "Carácter: " << static_cast<char>(i) << " | ASCII: " << i << endl;
        }

        archivo.close(); 
        cout << "Se ha creado el archivo 'ascii.txt' correctamente." << endl;

    }
    return 0;
}

