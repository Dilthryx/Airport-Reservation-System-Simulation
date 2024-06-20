#include "Reservacion.h"

Reservacion::Reservacion()
{
    //ctor
}

Reservacion::~Reservacion()
{
    //dtor
}

void Reservacion::setNumPasajeros(int x){
    numPasajeros = x;
}

int Reservacion::getNumPasajeros(){
    return numPasajeros;
}

void Reservacion::setPrecio(int x){
    precio = x;
}

int Reservacion::getPrecio(){
    return precio;
}

