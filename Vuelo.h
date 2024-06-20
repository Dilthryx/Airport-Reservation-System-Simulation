#ifndef VUELO_H
#define VUELO_H
#include "Reservacion.h"
#include <iostream>
using namespace std;

class Vuelo
{
    public:
        Vuelo();
        virtual ~Vuelo();

        Vuelo(string, string, float, int, string);

        int getCupo();
        string getFecha();
        string getDestino();

        void imprimirDetalles();



    protected:

    private:
        string fecha;
        string hora;
        float distancia;
        int cupo;
        string destino;
        Reservacion reservacion;


};

#endif // VUELO_H
