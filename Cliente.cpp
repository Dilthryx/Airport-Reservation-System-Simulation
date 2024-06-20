#include "Cliente.h"
#include "Vuelo.h"

Cliente::Cliente()
{
    //ctor
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::registro(string x,string y,string z,float k){
    nombre = x;
    usuario =y;
    contrasena=z;
    kilometrajePrevio=k;
}

string Cliente::getNombre(){
    return nombre;
}

void Cliente::IniciarSesion(string x, string y){
    usuario = x;
    contrasena = y;

}

void Cliente::setFecha(string x){
    fecha = x;
}

string Cliente::getFecha(){
    return fecha;
}

void Cliente::BuscarVuelos(string x,Vuelo vuelo,Vuelo vueloa){
    fecha = x;
    if(fecha == "15 de abril de 2022"){
        cout<<"Segun la fecha que elegiste en tu registro, estos son los vuelos disponibles para el dia: \n"<<vuelo.getDestino()<<"\n"<<vueloa.getDestino()<<"\n\n";
    }
}

void Cliente::BuscarVuelosptdos(string y,Vuelo vueloc,Vuelo vuelod){
    fecha = y;
    if(fecha == "16 de abril de 2022"){
        cout<<"Segun la fecha que elegiste en tu registro, estos son los vuelos disponibles para el dia: \n"<<vueloc.getDestino()<<"\n"<<vuelod.getDestino()<<"\n\n";
    }
}

void Cliente::selecVuelo(Vuelo vuelo){
    vuelo.imprimirDetalles();
}

void Cliente::reservar(int x){
    numdeboletos=x;
}

int Cliente::numReservas(){
    return numdeboletos;
}

void Cliente::setnuevoKilometraje(float x){
    kilometrajePrevio=x;
}

float Cliente::getKilometrajeprevio(){
    return kilometrajePrevio;
}
