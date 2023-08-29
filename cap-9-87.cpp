#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("ascii.txt");
    if (archivo.is_open()) {
        string i;
        while (getline(archivo, i)) {
            cout << i << endl;
        }
        archivo.close();
    }
    
    return 0;
}
