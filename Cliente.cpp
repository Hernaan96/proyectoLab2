#include <iostream>
#include "Cliente.h"

Contacto Cliente::getDatos()
{
    return _datos;
}
bool Cliente::getEstado()
{
    return _estado;
}

void Cliente::setDatos(Contacto datos)
{
    _datos=datos;
}
void Cliente::setEstado(bool estado)
{
    _estado=estado;
}

void Cliente::cargar()
{
    Persona::Cargar();
    _datos.cargar();
    _estado=true;
}
void Cliente::mostrar()
{
    if(_estado=true)
    {
        Persona::Mostrar();
        _datos.mostrar();
    }
}
