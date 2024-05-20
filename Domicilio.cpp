#include <iostream>
#include <cstring>
#include "Domicilio.h"
#include "Funciones.h"

int Domicilio::getID()
{
    return _id;
}
char* Domicilio::getCalle()
{
    return _calle;
}
int Domicilio::getCodigoPostal()
{
    return _codigoPostal;
}
bool Domicilio::getEstado()
{
    return _estado;
}
void Domicilio::setID(int id)
{
    _id=id;
}
void Domicilio::setCalle(const char* calle)
{
    strcpy(_calle, calle);
}
void Domicilio::setCodigoPostal(int codPostal)
{
    _codigoPostal=codPostal;
}
void Domicilio::setEstado(bool estado)
{
    _estado=estado;
}


void Domicilio::cargar()
{
    std::cout << "ID #";
    std::cin >> _id;
    std::cout << "Calle: ";
    cargarCadena (_calle,29);
    std::cout << "Numeracion #";
    std::cin >> _numeracion;
    std::cout << "Codigo postal: ";
    std::cin >> _codigoPostal;
    _estado=true;
}

void Domicilio::mostrar()
{
    std::cout << "ID #" << _id << std::endl;
    std::cout << "Calle: " << _calle << std::endl;
    std::cout << "Numeracion #" << _numeracion << std::endl;
    std::cout << "Codigo postal: " << _codigoPostal << std::endl;
}
