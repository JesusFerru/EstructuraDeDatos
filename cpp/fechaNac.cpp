#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    string fecha;
    cout << "Introduce la fecha de tu nacimiento en formato dd/mm/aaaa: ";
    cin >> fecha;
    cout << "Dia: " << fecha.substr(0,2) << endl;
    cout << "Mes: " << fecha.substr(3,2) << endl;
    cout << "Anio: " << fecha.substr(6) << endl;
    return 0;
}
