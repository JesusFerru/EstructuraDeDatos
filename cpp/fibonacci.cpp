#include <iostream>
#include "conio.h"


using namespace std;

// 1 1 2  3  5  8   13   21

int fibonacci(int n); 

int main() {
    
    int n;
    cout<< "Ingrese la cantidad de numeros para fibonacci: ";
    cin>> n;
    cout<< "Los primeros numeros fibonacci son: ";

    for( int i = 0; i < n; i++) 
    {
        cout<< fibonacci(i)<< " - ";
    }
    cout<< " ";
    /*  fib(0)  = 0
        fib(1) = 1
        fib(2) = 1 + 0 = 1
        fib(3) = fib(2) + fib(1) = 1 + 1 = 2 
    */
    getch();
    return 0;
}

int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }    
    else if (n == 1 ) 
    {
        return 1;
    }
    else { 

        return fibonacci(n-1) + fibonacci (n-2);
    }

}

