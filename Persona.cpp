#include "Persona.h"


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
    cout<<"Ingrese ID: ";
    cin>>_id;
    cout>>"Nombre: ";
    cargarCadena(_nombre,29);
    cout<<"Apellido: ";
    cargarCadena(_apellido,29);
    cout<<"Fecha de nacimiento: ";
    _nacimiento.Cargar();
    cout<<"Dni: ";
    cin>>_dni;
    _estado=true;
}
void Persona::Mostrar();
