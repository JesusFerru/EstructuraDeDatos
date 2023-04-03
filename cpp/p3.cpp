#include <iostream>
#include <vector>

using namespace std;

void clasificarMatrizEnVector(vector<int>& vector1, int matriz[][3], int filas, int columnas) {
    // Calcular la cantidad total de elementos en la matriz
    int totalElementosMatriz = filas * columnas;

    // Verificar si el tamaño del vector es suficiente para almacenar los elementos de la matriz
    if (vector1.size() < totalElementosMatriz) {
        cout << "Error: el tamaño del vector no es suficiente para almacenar los elementos de la matriz" << endl;
        return;
    }

    // Copiar los elementos de la matriz al vector
    int indiceVector = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            vector1[indiceVector] = matriz[i][j];
            indiceVector++;
        }
    }

    // Ordenar el vector en forma ascendente
    for (int i = 0; i < totalElementosMatriz; i++) {
        for (int j = i + 1; j < totalElementosMatriz; j++) {
            if (vector1[i] > vector1[j]) {
                int temp = vector1[i];
                vector1[i] = vector1[j];
                vector1[j] = temp;
            }
        }
    }
}

int main() {
    // Definir la matriz y el vector
    int matriz[][3] = {
        { 7, 4, 2},
        { 9, 5, 1 }
    };
    vector<int> vector1(8);

    // Llamar a la función para clasificar la matriz en el vector
    clasificarMatrizEnVector(vector1, matriz, 2, 3);

    // Imprimir el vector clasificado
    for (int i = 0; i < 8; i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    return 0;
}
