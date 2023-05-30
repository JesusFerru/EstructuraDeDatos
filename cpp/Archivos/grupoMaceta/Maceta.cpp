#include <iostream>
#include "string.h"
#include "Maceta.h"

using namespace std;

Maceta::Maceta(string mat,string dis,string col, double pre){
    material = mat;
    diseño = dis;
    color = col;
    precio = pre;
}
void Maceta::mostrarDatos() {
    cout << "Material: " << material << std::endl;
    cout <<"Diseño: " << diseño << std::endl;
    cout << "Color: " << color << std::endl;
    cout <<"Precio: $" << precio << std::endl;
}