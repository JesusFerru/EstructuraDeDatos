#include <iostream>
#include <string>

using namespace std;

int main() {
    // Pedir al usuario la fecha de nacimiento
    string fecha_nacimiento;
    cout << "Ingrese su fecha de nacimiento en formato dd/mm/aaaa: ";
    getline(cin, fecha_nacimiento);

    // Convertir la fecha en una lista de tres elementos separados por "/"
    string dia = fecha_nacimiento.substr(0, 2);
    string mes = fecha_nacimiento.substr(3, 2);
    string anio = fecha_nacimiento.substr(6, 4);

    // Convertir el mes en su forma literal
    string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio",
                        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    string mes_literal = meses[stoi(mes) - 1];

    // Imprimir la fecha de nacimiento con el día, mes (en forma literal) y año
    cout << "Usted nació el día " << dia << " de " << mes_literal << " de " << anio << endl;

    return 0;
}
