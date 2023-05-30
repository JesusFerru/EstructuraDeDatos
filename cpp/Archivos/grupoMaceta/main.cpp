#include <iostream>
#include <fstream> // Se agrega la librería fstream para el manejo de archivoa
#include "Cliente.h"
#include "Maceta.h"

using namespace std;

void GuardarInfo();
void ObtenerInfo();

int main()
{

   // GuardarInfo();
    ObtenerInfo();

    return 0;
}

void ObtenerInfo() {

ifstream archivoEntrada("registro.txt");  //Leer información de un archivo

    if (archivoEntrada.is_open())
    {
        // Variables para almacenar los datos extraídos
        string nombreCliente;
        string direccionCli;
        string materialMaceta;
        string colorMaceta;
        string precioString;
        double precioMaceta;

        
        enum class Estado
        {
            Ninguno,  // 0 
            Cliente,  // 1
            Maceta    // 2
        };
        Estado estadoActual = Estado::Ninguno;

        // Lectura de los datos del archivo
        string linea;
        while (getline(archivoEntrada, linea))
        {
            // Verificar el estado actual
            if (linea == "Informacion del cliente:")
            {
                estadoActual = Estado::Cliente;  // = 1
            }
            else if (linea == "Informacion de la maceta:")
            {
                estadoActual = Estado::Maceta;  // = 2
            }
            else if (estadoActual == Estado::Cliente)
            {
                // Extraer el nombre del cliente
                if (linea.substr(0, 7) == "Nombre:")
                {   
                    nombreCliente = linea.substr(8);
                }
                else if (linea.substr(0, 10) == "Direccion:")
                {
                    direccionCli = linea.substr(11);
                }
            }
            else if (estadoActual == Estado::Maceta) // = 2
            {
                // Extraer los datos de la maceta
                if (linea.substr(0, 9) == "Material:")
                {
                    materialMaceta = linea.substr(10);
                }
                else if (linea.substr(0, 6) == "Color:")
                {
                    colorMaceta = linea.substr(7);
                }
                else if (linea.substr(0, 7) == "Precio:")
                {
                    precioString = linea.substr(9);  //19.99 -> guardado como String
                    precioMaceta = stod(precioString);  //19.99 --> guardado como Double
                }
            }
        }

        archivoEntrada.close();
        
        cout << "\n\n----------Lectura de Datos----------\n\n";
        cout << "Nombre del cliente: " << nombreCliente << endl;
        cout << "Direccion del cliente es: " << direccionCli << endl;

        cout << "Material de la maceta: " << materialMaceta << endl;
        cout << "Color de la maceta: " << colorMaceta << endl;
        cout << "Precio de la maceta: $" << precioMaceta << endl;
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
}

void GuardarInfo() {
    ofstream archivoSalida("registro.txt");
    string name, address, phone;
    int age;

    Cliente nuevoCliente(name, age, address, phone);    //Declarando el constructor

    if (archivoSalida.is_open()) {
        // Escribir datos en el archivo

        cout<<"Nombre del Cliente: "<<endl;
        cin>>name;

        cout<<"Edad del cliente:"<<endl;
        cin>>age; 

        cout<<"Direccion del Cliente: "<<endl;
        cin>>address;
       //getline(cin, address);

        cout<<"Telefono del Cliente: "<<endl;
        cin>>phone;

        nuevoCliente = Cliente(name, age, address, phone);
        nuevoCliente.mostrarInformacion();


        archivoSalida << "Informacion del cliente:" << endl;
        archivoSalida << "----------------------" << endl;
        archivoSalida << "Nombre: " << name << endl;
        archivoSalida << "Edad: " << age << endl;
        archivoSalida << "Direccion: " << address << endl;
        archivoSalida << "Telefono: " << phone << endl;

        //archivoSalida << nuevoCliente.mostrarInformacion() << endl;
        
       

        // Cerrar el archivo
        archivoSalida.close();

        cout << "Archivo creado correctamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }

}


void MostrarMenuClientes(Cliente nuevoCliente){
    nuevoCliente.mostrarInformacion();
}