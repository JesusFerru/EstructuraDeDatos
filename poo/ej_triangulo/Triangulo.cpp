#include <iostream>
#include "../ej_triangulo/Triangulo.h"
//Implementacion de los metodos de la clase
//Declaracion del constructor
Triangulo::Triangulo(void)
{
	base = 4;
	altura = 3;
}
//Declaracion del destructor
Triangulo::~Triangulo(void)
{
}
//Declaración del metodo - funcion
float Triangulo::calculararea(float b, float h)
{
	area = (b * h) / 2.0;
	return area;
}
float Triangulo::calculararea()
{
	area = (base * altura) / 2.0;
	return area;
}
Triangulo::Triangulo(float h, float b) ///////
{
	base =b;
	altura = h;
}
float Triangulo::getbase() //te da el valor del atributo
{
	return base;
}
void Triangulo::setbase(float b) //cambia el valor del atributo
{
	base = b;
}