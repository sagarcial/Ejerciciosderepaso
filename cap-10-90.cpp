#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int horas, minutos, segundos;

    cout << "Ingresa el tiempo límite en horas, minutos y segundos:" << endl;
    cout << "Horas: ";
    cin >> horas;
    cout << "Minutos: ";
    cin >> minutos;
    cout << "Segundos: ";
    cin >> segundos;

    int tiempoLimite = horas * 3600 + minutos * 60 + segundos;
    int tiempoTranscurrido = 0;

    while (tiempoTranscurrido < tiempoLimite) {
        int horasActuales = tiempoTranscurrido / 3600;
        int minutosActuales = (tiempoTranscurrido % 3600) / 60;
        int segundosActuales = tiempoTranscurrido % 60;

        cout << "Tiempo transcurrido: ";
        cout << horasActuales << "h " << minutosActuales << "m " << segundosActuales << "s" << endl;

        this_thread::sleep_for(chrono::seconds(1));
        tiempoTranscurrido++;
    }

    cout << "Tiempo límite alcanzado." << endl;

    return 0;
}
