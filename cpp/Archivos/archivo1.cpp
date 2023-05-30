#include <iostream>
#include <fstream> // Incluir la biblioteca para manejo de archivos

int main() {
    // Crear un objeto de tipo ofstream para escribir en un archivo
    std::ofstream archivo("datos.txt");

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir datos en el archivo
        archivo << "Hola, esto es un ejemplo de manejo de archivos en C++." << std::endl;
        archivo << "Puedes escribir cualquier contenido en este archivo." << std::endl;

        // Cerrar el archivo
        archivo.close();

        std::cout << "Archivo creado correctamente." << std::endl;
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }

    return 0;
}