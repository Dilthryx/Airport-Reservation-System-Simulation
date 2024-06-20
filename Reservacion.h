#ifndef RESERVACION_H
#define RESERVACION_H
#include <iostream>
using namespace std;

class Reservacion
{
    public:
        Reservacion();
        virtual ~Reservacion();


        void setNumPasajeros(int);
        int getNumPasajeros();

        void setPrecio(int);
        int getPrecio();


    protected:

    private:
        int precio;
        int numPasajeros;


};

#endif // RESERVACION_H
