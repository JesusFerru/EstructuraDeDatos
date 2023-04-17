// ejemploTriangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "../ej_triangulo/Triangulo.h"
using namespace std; 

int main()
{
	Triangulo figura, figura2; //Triangulo2;
	float x, y;

	cout << "Ingrese los datos del triangulo, base: ";
	cin >> x;
	cout << "Ingrese los datos del triangulo, altura: ";
	cin >> y;
	// x = 5  y = 10
	cout << "El area es: " << figura.calculararea(x, y) << endl;
    //25

    // x = 4  y = 3
	cout << "El area es: " << figura2.calculararea()<< endl;
    //6

	cout << "La base es en el triangulo 1: " << figura.getbase() << endl;
    //5

	cout << "La base es en el triangulo 2: " << figura2.getbase() << endl;
    //4

	figura.setbase(x);
	cout << "La base del triangulo 1 es: " << figura.getbase() << endl;
    //5
}

