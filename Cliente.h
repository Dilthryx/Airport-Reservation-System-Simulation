#ifndef CLIENTE_H
#define CLIENTE_H

#include "Vuelo.h"

#include <iostream>
using namespace std;

class Cliente
{
    public:
        Cliente();
        virtual ~Cliente();
        void registro(string, string, string, float);
        string getNombre();
        void IniciarSesion(string, string);
        void setFecha(string);
        string getFecha();
        void BuscarVuelos(string, Vuelo, Vuelo);
        void BuscarVuelosptdos(string, Vuelo,Vuelo);
        void selecVuelo(Vuelo);
        void reservar(int);
        int numReservas();
        void setnuevoKilometraje(float);
        float getKilometrajeprevio();



    protected:

    private:
        Vuelo vuelo;
        string fecha;
        string nombre;
        string usuario;
        string contrasena;
        int numdeboletos;
        float kilometrajePrevio;
        Reservacion reserv;

};

#endif // CLIENTE_H
