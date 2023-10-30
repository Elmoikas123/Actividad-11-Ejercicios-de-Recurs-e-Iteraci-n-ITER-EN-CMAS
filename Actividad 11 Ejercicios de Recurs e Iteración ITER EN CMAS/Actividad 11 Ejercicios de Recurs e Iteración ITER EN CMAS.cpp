// Actividad 11 Ejercicios de Recurs e Iteración ITER EN CMAS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, I, RESUL;
    string linea;
    cout << "DIGITE NUMERO: ";
    getline(cin, linea);
    NUM = stoi(linea);
    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I = I + 1;
    }
    cout << "Pulse una tecla: ";
    getline(cin, linea);
    return 0;
}