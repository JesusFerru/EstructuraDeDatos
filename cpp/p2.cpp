#include <iostream>

using namespace std;

// Variables globales para las filas y columnas
const int FILAS = 3;
const int COLUMNAS = 4;

// Función para generar la matriz traspuesta
void generarMatrizTraspuesta(int matriz[FILAS][COLUMNAS], int nuevaMatriz[COLUMNAS][FILAS])
{
    for(int i=0; i<FILAS; i++)
    {
        for(int j=0; j<COLUMNAS; j++)
        {
            nuevaMatriz[j][i] = matriz[i][j];
        }
    }
}

int main()
{
    // Definir la matriz original y la nueva matriz
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int nuevaMatriz[COLUMNAS][FILAS];

    generarMatrizTraspuesta(matriz, nuevaMatriz);

    // Imprimir la nueva matriz
    for(int i=0; i<COLUMNAS; i++)
    {
        for(int j=0; j<FILAS; j++)
        {
            cout << nuevaMatriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}