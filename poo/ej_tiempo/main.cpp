/*
Construir una clase Tiempo que contenga los siguientes atributos enteros:
horas, minutos y segundos.
Hacer que tenga 2 constructores:
1) 3 parametros enteros Tiempo(int, int, int)
2) Solo un parámetro que serán los segundos y estos se puedan convertir en hrs, mins, segs.
Separar el ejercicio en 3 partes: 
1) Encabezado; para la clase Tiempo                                --> Tiempo.h
2) Clase tiempo; donde se inicializará los metodos y constructores --> Tiempo.cpp
3) Funcion principal; donde irá la lógica del ejercicio            --> Main.cpp
*/

#include <iostream>
#include "../ej_tiempo/Tiempo.h"

using namespace std;

void Menu();

int main() {

    int opcion =4, hr =0, mn = 0, sg = 0;
    Tiempo tiempo_actual(hr,mn,sg);
    Tiempo tiempo_x(sg);
    
    while(opcion != 0) 
    {
        Menu();
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Ingrese las horas: " << endl;
                cin >> hr;
                cout << "Ingrese los minutos: " << endl;
                cin >> mn;
                cout << "Ingrese los segundos: " << endl;
                cin >> sg;

                tiempo_actual = Tiempo(hr,mn,sg);
                
                tiempo_actual.mostrarTiempo();
                break;
            case 2:
                cout << "Ingrese los segundos: " << endl;
                cin >> sg;
                tiempo_x = Tiempo(sg);
                tiempo_x.mostrarTiempo();
                break;
            case 3:
                system("cls");
                cout << "\nTransforme las horas a segundos\n\n" << endl;
                cout << "Ingrese las horas: ";
                cin >> hr;
                
                cout<<"\n\nLas "<<hr<<" es igual a "<<tiempo_x.calcularSegs(hr) << " segundos.\n\n";
                break;
            case 0: break;
            default:
                cout << "Opción inválida" << endl;
                break;
        }
       
    }

    system("pause");
    return 0;
}

void Menu() {
    cout << "MENU" << endl;
    cout << "1. Datos horarios (hr, min, seg)" << endl;
    cout << "2. Datos horarios (solo segundos)" << endl;
    cout << "3. Transformar horas a segundos" << endl;
    cout << "0. Salir\n";
    cout << "\nIngrese una opcion: ";
}