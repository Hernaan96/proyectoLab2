#include "Persona.h"
#include "Funciones.h"
#include <iostream>
#include <cstring>


Persona::Persona(){
_id=0;
strcpy(_nombre, " ");
strcpy(_apellido, " ");
_dni=0;
_estado=false;
}

int Persona:: getId(){return _id;}
const char* Persona::getNombre(){return _nombre;}
const char* Persona::getApellido(){return _apellido;}
Fecha Persona::getNacimiento(){return _nacimiento;}
int Persona::getDni(){return _dni;}
bool Persona::getEstado(){return _estado;}

void Persona::setId(int id){_id=id;}
void Persona::setNombre(const char* nombre){strcpy(_nombre, nombre);}
void Persona::setApellido(const char* apellido){strcpy(_apellido, apellido);}
void Persona::setFecha(Fecha nacimiento){_nacimiento=nacimiento;}
void Persona::setDni(int dni){_dni=dni;}
void Persona::setEstado(bool estado){_estado=estado;}

void Persona::Cargar(){
    std::cout << "Ingrese ID: ";
    std::cin >> _id;
    std::cout << "Nombre: ";
    cargarCadena(_nombre, 29);
    std::cout << "Apellido: ";
    cargarCadena(_apellido, 29);
    std::cout << "Fecha de nacimiento: ";
    _nacimiento.Cargar();
    std::cout << "Dni: ";
    std::cin >> _dni;
    _estado = true;
}
void Persona::Mostrar() {
        std::cout << "ID: " << _id << std::endl;
        std::cout << "Nombre: " << _nombre << std::endl;
        std::cout << "Apellido: " << _apellido <<std::endl;
        std::cout << "Fecha de Nacimiento: ";
        _nacimiento.Mostrar();
        std::cout << "DNI: " << _dni << std::endl;
        std::cout << "Estado: " << (_estado ? "Activo" : "Inactivo") <<std::endl;
    }
