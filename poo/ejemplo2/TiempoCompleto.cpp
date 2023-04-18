#include <iostream>

using namespace std;

class Tiempo {
    private:        //Variables
        int horas, minutos, segundos;

    public: 
        Tiempo(int, int, int);  //Constructor 1
        Tiempo(long int);       //Constructor 2
        
        ~Tiempo();              //Destructor

        void mostrarTiempo();       //Funcion mostrar
        int calcularSegundos(int);  //Funcion transforma hrs a segs.
};

// --------------------------Inicialización de constructores y metodos de la clase Tiempo ---------
Tiempo::Tiempo(int hrs, int mins, int segs) {       //Constructor 1
    horas = hrs;
    minutos = mins;
    segundos = segs;
}

Tiempo::Tiempo(long int segs) {     //Constructor 2
    horas = segs / 3600;
    segs = segs % 3600;
    minutos = segs / 60;
    segundos = segs % 60;
}

Tiempo::~Tiempo()       //Destructor
{

}



void Tiempo::mostrarTiempo() {        //Funcion mostrar
    cout<<"\n La hora exacta es= "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int Tiempo::calcularSegundos(int hr) {
    segundos = hr * 3600;
    return segundos;
}

//_________________________________________________________

void Menu ();

int main() {

    int h = 0, m = 0, s = 0;
    int opcion = 4;
    Tiempo ejemplo1(h,m,s), ejemplo2(s), ejemplo3(h,m,s);     //Objeto de la clase Tiempo
    
   
    while(opcion !=0){
        Menu();
        cin>>opcion;
        switch(opcion) {
            case 1: 
                cout<<"---------------Mostrar horas------\n\n";
                cout<<"Ingrese las horas: ";
                cin>> h;  //19
                cout<<"Ingrese los minutos: ";
                cin>> m;  //50
                cout<<"Ingrese los segundos: ";
                cin>> s; //35

                ejemplo1 = Tiempo(h,m,s);
                ejemplo1.mostrarTiempo();

                break;
            case 2: 
                cout<<"Ingrese los segundos: ";
                cin>> s; 
                
                ejemplo2 = Tiempo(s);

                ejemplo2.mostrarTiempo();

                break;

            case 3: 
                cout<<"\nTransforme las horas a segundos\n";
                cout<<"Ingrese las horas: ";
                cin>> h;
                cout<<"\nLas"<<h<< " hrs. es igual a "<<ejemplo3.calcularSegundos(h)<<" segundos.\n\n";
                break;
            case 0: break;
            default: 
                cout<<"Opcion incorrecta, vuelva a intentarlo.\n";
        }
    }
    system("pause");
    return 0;
}


void Menu() {
    cout<<"---------------Menu---------\n\n";
    cout<<"1. Datos horarios (h, m, s)\n";
    cout<<"2. Datos horarios (solo segs)"<<endl;
    cout<<"3. Transformar horas a segundos\n";
    cout<<"0. Salir\n\n";
    
    cout<<"Ingrese una opcion: ";
}