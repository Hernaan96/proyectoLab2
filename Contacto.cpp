#include <iostream>
#include <cstring>
#include "Contacto.h"
#include "Funciones.h"

Domicilio Contacto::getDomicilio()
{
    return _domicilio;
}


char* Contacto::getTelefono()
{
    return _telefono;
}
char* Contacto::getEmail()
{
    return _email;
}

void Contacto::setDomicilio(Domicilio domicilio){
    _domicilio=domicilio;
}

void Contacto::setTelefono(const char* telefono)
{
    strcpy(_telefono, telefono);
}
void Contacto::setEmail (const char* email)
{
    strcpy (_email, email);
}

void Contacto::cargar()
{
    std::cout << "Ingrese el domicilio"<<std::endl;
    _domicilio.cargar();
    std::cout << "Telefono: ";
    cargarCadena (_telefono, 29);
    std::cout << "Email: ";
    cargarCadena (_email, 49);
}

void Contacto::mostrar()
{
    std::cout << "Domicilio"<<std::endl;
    _domicilio.mostrar();
    std::cout << "Telefono: " << _telefono << std::endl;
    std::cout << "Email: " << _email << std::endl;
}
