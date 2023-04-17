#include <iostream>
#include "../ej_tiempo/Tiempo.h"

using namespace std;

Tiempo::Tiempo(int hrs, int mins, int segs) {
    horas = hrs;
    minutos = mins;
    segundos = segs;
}

Tiempo::Tiempo(long int segs) {
    horas = segs / 3600;
    segs = segs % 3600;
    minutos = segs / 60;
    segundos = segs % 60;
}

Tiempo::~Tiempo() { }

void Tiempo::mostrarTiempo() 
{
    cout<<"\nLa hora exacta es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;;
}

int Tiempo::calcularSegs(int hrs) {
    segundos = hrs * 3600;
    return segundos;
}