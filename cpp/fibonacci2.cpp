#include <iostream>
#include "conio.h"
#define NMAX 1000

using namespace std;

// 0 1 1 2  3  5  8   13   21



int main() {
    
    int n;
    int vector[NMAX]; 

    cout<< "Ingrese la cantidad de numeros para fibonacci: ";
    cin>> n;
    
    vector[0] = 0;
    vector[1] = 1; 

    //Logica fibonacci
    for(int i = 2; i < n; i++ ) 
    {
        vector[i] = vector[i-1] + vector[i-2];
    }
    /*  
     V[0]  = 0 
     V[1] = 1
     V[2] = 1
     V[3] = 2
    */

  //Imprimir valores
    cout<< "Los "<< n << "numeros de fibonacci son: ";
    for( int i = 0; i < n; i++ ) {
        cout<<vector[i]<< " ";
    }

    cout<<endl<<endl;

    system("pause");
    return 0;
}

