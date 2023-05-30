#include <iostream>
#include "string.h"

using namespace std;

class Cliente {
  private:
    string nombre;
    int edad;
    string direccion;
    string telefono;

  public:
    Cliente(string nombre, int edad, string direccion, string telefono);
    string getNombre();
    void mostrarInformacion();
};