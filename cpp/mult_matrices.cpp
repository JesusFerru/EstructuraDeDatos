#include <iostream>
#include "conio.h"
#define FIL 20
#define COL 20

using namespace std;

// 1 1 2  3  5  8   13   21

void cargar_matriz(double mat[FIL][COL], int n, int m);
void mostrar_matriz(double mat[FIL][COL], int n, int m);

int main() {

int fila1, columna1, fila2, columna2, nro;

double matriz1[FIL][COL], matriz2[FIL][COL], matrizResult[FIL][COL];

cout << " Introducir nro de filas: ";
cin >> fila1;
cout << " Introducir nro de columnas: ";
cin >> columna1;
cout << " Introducir nro de filas: ";
cin >> fila2;
cout << " Introducir nro de columnas: ";
cin >> columna2;
cout << "\n";

while (columna1 == fila2) {
    cout << " \nPrimera matriz\n";
    cargar_matriz(matriz1, fila1, columna1);

    cout << " \nSegunda matriz\n";
    cargar_matriz(matriz2, fila2, columna2);

    cout << " \nEl producto de la matriz es ";
    producto_matrices(matriz1, matriz2, matrizResult, fila1, columna1, fila2, columna2);
    cout << endl;

    mostrar_matriz(matrizResult, fila1, columna2);
    cout << endl;
}
getch();
return 0;
}


void cargar_matriz(double mat[FIL][COL], int n, int m)
{
	int i, j;
	cout << " Introducir elemento: "<<endl;
	for (i = 0; i < n; i++)         // filas 
	{
		for (j = 0; j < m; j++)     // columnas 
		{
			cout << " MAT["<<i<<"]["<<j<<"]= ";
			cin >> mat[i][j];
		}
	}
}

void mostrar_matriz(double mat[FIL][COL], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << " " << mat[i][j]<<"\t";
		}
		cout << " " << endl;
	}

}


void producto_matrices(double mat1[FIL][COL], double mat2[FIL][COL], double mat3[FIL][COL], int n, int m, int p, int q)
{

    //n = fila1 
    //m = col1
    //p = f2
    //q = c2
	int i, j, k, l, s, r = 0;
	for (i = 0; i < n; i++) //marca la fila
	{
		for (k = 0; k < q; k++) // Marca la columna
		{
			s = 0;
			j = 0;
			for (l = 0; l < p; l++)
			{
				s = s + mat1[i][j] * mat2[l][k];
				j++;
			}
			mat3[i][k] = s;
		}
	}
}




