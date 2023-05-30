#include <iostream>
#include <stdio.h>
#include "fstream"
#include "string.h"
using namespace std;

void escribirArchivo();

int main() {
    escribirArchivo();

}


void escribirArchivo(){
    ofstream archivo;
    string nombre;

    cout<<"Coloque el nombre del archivo: ";
    getline(cin, nombre);

    archivo.open("E:\\Luis Jesús\\Ejemplo\\" + nombre , ios::out);

    if(archivo.fail()) {
        cout<<" Se falló al crear el archivo";
        exit(1);
    }
    
        archivo<<"Se creó correctamente el archivo."<<endl;
    
    archivo.close();

}