#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
//------------SALIDA-------------//
    short int i=65;
    ofstream salida("archivo.bin", ios::binary);

    if (!salida.is_open()) {
        cerr << "¡Error en la creación del archivo!" << endl;
        exit(1);
    }
    while (i<91) {
        salida.put(i);
        i++;
    }
    salida.close();

//------------ENTRADA------------//
    char c;
    ifstream entrada("archivo.bin", ios::binary);
    if (!entrada.is_open()) {
        cerr << "¡Error en la apertura del archivo!" << endl;
        exit(1);
    }
    i=65;
    while (i<91) {
        entrada.get(c);
        cout << c << " ";
        i++;
    }
    entrada.close();
    
    return(0);
}