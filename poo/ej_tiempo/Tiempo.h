//Clase Tiempo

class Tiempo {
    private:
        int horas, minutos, segundos;

    public:
        Tiempo(int, int, int);
        Tiempo(long int);

        ~Tiempo();

        int calcularSegs(int);
        void mostrarTiempo();
};