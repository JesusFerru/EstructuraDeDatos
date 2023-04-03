#include "iostream"
#include "conio.h"

using namespace std;
#define FIL 20
#define COL 20

int cantidad_digitos(int n);
void cargar_matriz_inversa(double mat[FIL][COL], int n);
void mostrar_matriz_inversa(double mat[FIL][COL], int n);
void cargar_matriz(double mat[FIL][COL], int n, int m);
void mostrar_matriz(double mat[FIL][COL], int n, int m);
void mostrar_matriz_caracol(double mat[FIL][COL], int n, int m);
void sumar_matrices(double mat1[FIL][COL], double mat2[FIL][COL], double mat3[FIL][COL], int n, int m);
void producto_matrices(double mat1[FIL][COL], double mat2[FIL][COL], double mat3[FIL][COL], int n, int m, int p, int q);
void matriz_transpuesta(double mat1[FIL][COL], double mat2[FIL][COL], int n, int m);
void matriz_identidad(double mat[FIL][COL], int n);
void matriz_inversa(double mat[FIL][COL], double mat1[FIL][COL], int n);
void matriz_caracol(double mat[FIL][COL], int n, int m);

int main()

{
	int opcion;
	int fila1, fila2, columna1, columna2, nro;
	double matriz1[FIL][COL], matriz2[FIL][COL], matriz3[FIL][COL];
	do {
		cout << " *****MENU***** " << endl;
		cout << " 1.- Suma de Matrices: " << endl;
		cout << " 2.- Multiplicacion de matrices: " << endl;
		cout << " 3.- Matriz Transpuesta: " << endl;
		cout << " 4.- Matriz Inversa: " << endl;
		cout << " 5.- Matriz Caracol: " << endl;
		cout << " 0.- Salir" << endl;
		cout << " Introducir Opcion: ";
		cin >> opcion;
		cout << endl;
		switch (opcion)
		{
			case 1:cout << " Nro de filas?: ";
			cin >> fila1;
			cout << " Nro de columnas?: ";
			cin >> columna1;
			cout << "\n Primera matriz " << endl;
			cargar_matriz(matriz1, fila1, columna1);
			cout << endl;
			cout << " Segunda matriz " << endl;
			cargar_matriz(matriz2, fila1, columna1);
			sumar_matrices(matriz1, matriz2, matriz3, fila1, columna1);
			cout << "\n La suma de las matrices es: \n";
			mostrar_matriz(matriz3, fila1, columna1);
			cout << endl;
			break;
		case 2:do {
			cout << " Introducir nro de filas: ";
			cin >> fila1;
			cout << " Introducir nro de columnas: ";
			cin >> columna1;
			cout << " Introducir nro de filas: ";
			cin >> fila2;
			cout << " Introducir nro de columnas: ";
			cin >> columna2;
			cout << endl;
			} while (columna1 == fila2);
			cout << " \nPrimera matriz\n";
			cargar_matriz(matriz1, fila1, columna1);
			cout << " \nSegunda matriz\n";
			cargar_matriz(matriz2, fila2, columna2);
			cout << " \nEl producto de la matriz es ";
			producto_matrices(matriz1, matriz2, matriz3, fila1, columna1, fila2, columna2);
			cout << endl;
			mostrar_matriz(matriz3, fila1, columna2);
			cout << endl;
			break;
		case 3:cout << " Introducir nro de filas: ";
			cin >> fila1;
			cout << " Introducir nro de columnas: ";
			cin >> columna1;
			cargar_matriz(matriz1, fila1, columna1);
			matriz_transpuesta(matriz1, matriz2, fila1, columna1);
			cout << "\n Matriz Transpuesta ";
			cout << endl;
			mostrar_matriz(matriz2, columna1, fila1);
			cout << endl;
			break;
		case 4:cout << " Introducir tamaño de matriz cuadrada: ";
			cin >> nro;
			cargar_matriz(matriz1, nro,nro);
			matriz_identidad(matriz2, nro);
			matriz_inversa(matriz1, matriz2, nro);
			cout << "\n **Resolviendo por el metodo gauss Jordan** " << endl;
			cout << "\n Matriz Inversa ";
			cout << endl;
			mostrar_matriz_inversa(matriz2, nro);
			cout << endl;
			break;
		case 5:cout << " Introducir nro de Filas: ";
			cin >> fila1;
			cout << " Introducir nro de columnas: ";
			cin >> columna1;
			matriz_caracol(matriz1, fila1, columna1);
			mostrar_matriz(matriz1, fila1, columna1);
			cout << endl;
			break;
		case 0:cout << " Salir " << endl;
			break;
		default:cout << "ERROR!!!!" << endl << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (opcion != 0);
}

int cantidad_digitos(int n)
{
	int c=0;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}


void mostrar_matriz_inversa(double mat[FIL][COL], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (mat[i][j] >= 0)
				cout << " " << mat[i][j];
			else
				cout << " " << mat[i][j];
		}
		cout << " " << endl;
	}
}

void cargar_matriz(double mat[FIL][COL], int n, int m)

{

	int i, j;
	cout << " Introducir elemento: "<<endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
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

			/*if (cantidad_digitos(mat[i][j]) == 1)
				cout << " " << mat[i][j];
			else
			{
				if (cantidad_digitos(mat[i][j]) == 2)
					cout << " " << mat[i][j];
				else
					cout << " " << mat[i][j];
			}
			*/
			cout << " " << mat[i][j]<<"\t";
		}
		cout << " " << endl;
	}

}

void mostrar_matriz_caracol(double mat[FIL][COL], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			if (cantidad_digitos(mat[i][j]) == 1)
				cout << mat[i][j] << " ";
			else
				if (cantidad_digitos(mat[i][j]) == 2)
					cout << mat[i][j] << " ";
				else
					cout << mat[i][j] << " ";
		cout << " " << endl;
	}

}

void sumar_matrices(double mat1[FIL][COL], double mat2[FIL][COL], double mat3[FIL][COL], int n, int m)

{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
}

void producto_matrices(double mat1[FIL][COL], double mat2[FIL][COL], double mat3[FIL][COL], int n, int m, int p, int q)
{
	int i, j, k, l, s, r = 0;
	double vec[80];
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
	/*
	r = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < q; j++)
		{
			mat3[i][j] = vec[r];
			r++;
		}
	}
	*/
}

void matriz_transpuesta(double mat1[FIL][COL], double mat2[FIL][COL], int n, int m)
{
	int i, j;
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			{
				mat2[j][i] = mat1[i][j];
			}
		}
	}
}

void matriz_identidad(double mat[FIL][COL], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i == j)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
}

void matriz_inversa(double mat[FIL][COL], double mat1[FIL][COL], int n)
{
	int i, j, c, k, d = 0;
	double aux1, aux2, aux;
	for (j = 0; j < n - 1; j++)
	{
		for (i = n - 1; i > d; i--)
		{
			c = j;
			aux1 = mat[i][j];
			aux2 = mat[c][j];
			for (k = 0; k < n; k++)
			{
				mat[i][k] = mat[i][k] * aux2 - aux1 * mat[c][k];
				mat1[i][k] = mat1[i][k] * aux2 - aux1 * mat1[c][k];
			}
		}
		d++;
	}

	d = 0;

	for (j = n - 1; j > 0; j--)
	{
		for (i = 0; i < n - 1 - d; i++)
		{
			c = j;
			aux1 = mat[i][j];
			aux2 = mat[c][j];
			for (k = 0; k < n; k++)
			{
				mat[i][k] = mat[i][k] * aux2 - aux1 * mat[c][k];
				mat1[i][k] = mat1[i][k] * aux2 - aux1 * mat1[c][k];
			}
		}
		d++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j && mat[i][j] != 0)
			{
				aux = mat[i][j];
				for (k = 0; k < n; k++)
				{
					mat[i][k] = mat[i][k] / aux;
					mat1[i][k] = mat1[i][k] / aux;
				}
			}
		}
	}
}

void matriz_caracol(double mat[FIL][COL], int n, int m)
{
	int i, j, cont = 1, k = 0, aux = 0;
	while (cont <= n * m)
	{
		i = k;
		if (aux == 0)
		{
			for (j = k; j < m - k; j++)
			{
				mat[i][j] = cont;
				cont += 1;
			}
			aux = 1;
		}
		else
		{
			if (aux == 1)
			{
				j = m - 1 - k;
				for (i = k + 1; i < n - k; i++)
				{
					mat[i][j] = cont;
					cont += 1;
				}
				aux = 2;
			}
			else
			{
				if (aux == 2)
				{
					i = n - 1 - k;
					for (j = m - 2 - k; j >= k; j--)
					{
						mat[i][j] = cont;
						cont += 1;
					}
					aux = 3;
				}
				else
				{
					j = k;
					for (i = n - 2 - k; i > k; i--)
					{
						mat[i][j] = cont;
						cont += 1;
					}
					aux = 0;
					k++;
				}
			}
		}
	}
}