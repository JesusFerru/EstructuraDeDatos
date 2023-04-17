#include <iostream>
#include "../ej_rectangulo/Rectangulo.h"

using namespace std;

//inicializar
Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo = _largo;
    ancho = _ancho;
}

Rectangulo::~Rectangulo() { }   //Inicializacion

void Rectangulo::perimetro() {
    float perimeter;

    perimeter = 2*largo + 2*ancho;
    cout<<"\nEl perimetro del rectangulo es: "<< perimeter <<endl;
}

void Rectangulo::area() {
    float _area;
    _area = largo * ancho;

    cout<<"\nEl area de un rectangulo es: "<<_area <<endl;
}


