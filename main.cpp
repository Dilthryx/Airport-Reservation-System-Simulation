#include <iostream>
#include <sstream>
#include "Vuelo.h"
#include "Cliente.h"
#include "Reservacion.h"

using namespace std;

int main()
{
    stringstream ss;
    string selecdestino;
    string selecdestino2;
    int boletajenum;
    int boletajenum2;
    int precio_total;
    int precio_total2;
    int precio_rebajado2;

    Vuelo vuelo1("15 de abril de 2022","21:00",5000,25,"Madrid");
    Vuelo vuelo2("15 de abril de 2022","22:00",13000,22,"Beijing");
    Vuelo vuelo3("16 de abril de 2022","09:00",5000,0,"Paris");
    Vuelo vuelo4("16 de abril de 2022","11:00",500,0,"Monterrey");


    Cliente cliente1;
    cliente1.registro("Franco Escamilla","A01412143","kuex4388",49600);
    cliente1.setFecha("15 de abril de 2022");
    cout<<cliente1.getNombre()<<": ";
    cliente1.BuscarVuelos(cliente1.getFecha(),vuelo1,vuelo2);

    cout<<"Escoge tu destino: ";
    cin>>selecdestino;

    if (selecdestino=="Madrid")
        cliente1.selecVuelo(vuelo1);

    if (selecdestino=="Beijing")
        cliente1.selecVuelo(vuelo2);

    Reservacion res1;
    res1.setPrecio(1200);


    cout<<"Cuantos boletos desesas Reservar: ";
    cin>>boletajenum;

    cliente1.reservar(boletajenum);
    precio_total = res1.getPrecio()   * cliente1.numReservas();

    cout<<"\nEl precio de su reservacion seria: "<<precio_total<<"\n";

    if (cliente1.getKilometrajeprevio()>40000){
        float precio_rebajado = precio_total * 0.60;
        cout<<"Notamos que tiene mas de 40000 kilometros recorrido y es usted valido para un descuento del 40 porciento.\n";
        cout<<"El nuevo precio de su reservacion sería: "<<precio_rebajado<<"\n\n";
    }
    Cliente cliente2;
    cliente2.registro("Jordi Wild","A01412958","Velamar369",32891);
    cliente2.setFecha("16 de abril de 2022");
    cout<<cliente2.getNombre()<<": ";
    cliente2.BuscarVuelosptdos(cliente2.getFecha(),vuelo3,vuelo4);

    cout<<"Escoge tu destino: ";
    cin>>selecdestino2;

    if (selecdestino2=="Paris")
        cliente2.selecVuelo(vuelo3);

    if (selecdestino=="Monterrey")
        cliente2.selecVuelo(vuelo4);

    Reservacion res2;
    res2.setPrecio(1500);


    cout<<"Cuantos boletos desesas Reservar: ";
    cin>>boletajenum2;

    cliente2.reservar(boletajenum2);
    precio_total = res2.getPrecio()  * cliente2.numReservas();

    cout<<"\nEl precio de su reservacion seria: "<<precio_total<<"\n\n";

    if (cliente2.getKilometrajeprevio()>40000){
        float precio_rebajado2 = precio_total2 * 0.60;
        cout<<"Notamos que tiene mas de 40000 kilometros recorrido y es usted valido para un descuento del 40 porciento.\n";
        cout<<"El nuevo precio de su reservacion sería: "<<precio_rebajado2<<"\n\n";

        }
    if (cliente2.numReservas()>vuelo3.getCupo())
        cout<<"El vuelo seleccionado ya no cuenta con cupo\n\n";

    return 0;
}
