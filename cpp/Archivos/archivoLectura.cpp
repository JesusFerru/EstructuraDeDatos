#include <iostream>
#include <stdio.h>
#include "fstream"
#include "string.h"
using namespace std;

void lectura();

int main() {
    lectura();

    system("pause");
    return 0;
}

void lectura() {
    string texto;
    ifstream info; 
    info.open("GuardarDatos.txt", ios::in);

    if(info.fail()) {
        cout<<" Se falló al abrir el archivo";
        exit(1);
    }

    while(!info.eof()) {
        getline(info, texto);
        cout<<texto<<endl;
    }

    info.close();


}