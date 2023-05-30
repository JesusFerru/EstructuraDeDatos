#include <iostream>
#include <stdio.h>
#include "fstream"
using namespace std;

int main() {
    int dato1,dato2;
    char resp;
    std::ofstream archivo1;

    archivo1.open("GuardarDatos.txt");

    do {
        cout<< "Ingrese 2 datos: \n";
        cin>>dato1;
        cin>>dato2;
        archivo1<<"Dato 1: " <<dato1<<", Dato 2: "<<dato2<<endl;

        cout<<"Quiere meter nuevos datos? \n";
        cin>> resp;
    }
    while(resp=='s');
    archivo1.close();

}