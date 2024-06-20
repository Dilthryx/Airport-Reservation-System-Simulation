#include "Vuelo.h"


Vuelo::Vuelo()
{
    //ctor
}

Vuelo::~Vuelo()
{
    //dtor
}

Vuelo::Vuelo(string f, string h, float d, int c,string x){
    fecha = f;
    hora = h;
    distancia = d;
    cupo = c;
    destino = x;
}

int Vuelo::getCupo(){
    return cupo;
}

string Vuelo::getFecha(){
    return fecha;
}

string Vuelo::getDestino(){
    return destino;
}



void Vuelo::imprimirDetalles(){
    cout<<"Destino: "<<getDestino()<<"\nFecha: "<<getFecha()<<"\nDistancia: "<<distancia<<"\nCupo: "<<cupo<<"\nHora: "<<hora<<"\n\n";
}


