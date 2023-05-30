#include <iostream>
#include <stdio.h>
#include "fstream"
#include "string.h"
using namespace std;

int main() {
    int dato1,dato2, resultado;
    string info;
    char resp;
    std::ofstream archivo1, archivoTexto;

    archivo1.open("GuardarDatos.txt");
    archivoTexto.open("GuardaTexto.txt");
    do {
        cout<< "Ingrese 2 datosnumericos: \n";
        cin>>dato1;
        cin>>dato2;


        cout<< "Ingrese una operación: ";
        cin>>info;     //Suma


        /*
                switch(operacion) {
                    case "suma" : 
                            a + b;
                            archivoTexto<<"Se suman a + b";
                            break;
                    case "resta" :
                            a - b
                }   
        
        
        
        */
        

        archivo1<<"Dato 1: " <<dato1<<", Dato 2: "<<dato2<<endl;

        resultado = dato1 + dato2;

        archivoTexto<<"La "<<info<< " de "<<dato1<<" + "<<dato2<<" es igual a "<<resultado<<endl;

        cout<<"Quiere meter nuevos datos? \n";
        cin>> resp;
    }
    while(resp=='s');
    archivo1.close();

}