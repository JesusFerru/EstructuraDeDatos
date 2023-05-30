#include <iostream>
#include <string>
#include <vector>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nombre, int edad, string direccion, string telefono) {
        this->nombre = nombre;
        this->edad = edad;
        this->direccion = direccion;
        this->telefono = telefono;
    }

    string Cliente:: getNombre() {
        return nombre;
    }
    
    void Cliente::mostrarInformacion() {

        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Telefono: " << telefono << endl;     
    }

    
