#include <iostream>
#include "Tecnico.h"

int Tecnico::getNumTecnico(){return _numTecnico;}
bool Tecnico::getEstado(){return _estado;}

void Tecnico::setNumTecnico(int numTecnico){_numTecnico=numTecnico;}
void Tecnico::setEstado(bool estado){_estado=estado;}

void Tecnico::cargar(){
    Persona::Cargar();
    std::cout<<"Numero de tecnico: ";
    std::cin>>_numTecnico;
}
void Tecnico::mostrar(){
    Persona::Mostrar();
    std::cout<<"El numero de tecnico es: "<<_numTecnico<<std::endl;
}
