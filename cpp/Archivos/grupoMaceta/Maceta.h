#include <iostream>
#include "string.h"

using namespace std;

class Maceta {
private:
    string material;
    string diseño;
    string color;
    double precio;

public:
    Maceta(string mat,string dis,string col, double pre);
    void mostrarDatos(); 
};