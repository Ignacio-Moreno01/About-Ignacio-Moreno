#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
//---------------SALIDA--------------//
    int i=65;
    ofstream salida("archivo.txt");
    
    if (!salida.is_open()) {
        cerr << "¡Error en la creación del archivo!" << endl;
        exit(1);
    }

    while (i<91) {
        salida << i << "\n ";
        i++;
    }

//--------------ENTRADA--------------//
    int c;
    ifstream entrada("archivo.txt");
    salida.close();

    if (!entrada.is_open()) {
        cerr << "¡Error en la apertura del archivo!" << endl;
        exit(1);
    }
    
    while (entrada >> c) {
        cout << c << " ";
    }
    entrada.close();
    
    return(0);
}