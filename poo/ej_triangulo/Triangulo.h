#include <iostream>
//Declaracion de la clase
	class Triangulo
	{
		// Atributos - Variables
	private:
		float base;
		float altura;
		float area;
		//Metodos - Funciones
	public:
		Triangulo(); //Constructor - asigna memoria 
		Triangulo(float a, float b);
		~Triangulo(); //Destructor - libera memoria
		//Prototipos
		float calculararea(float b, float h);  //set
		float calculararea();			//get
		float getbase();
		void setbase(float);
	};
