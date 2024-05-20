#include <iostream>
#include <cstring>
#include "Reparacion.h"
#include "Funciones.h"




int Reparacion::getOrdenReparacion()
{
    return _ordenReparacion;
}
Cliente Reparacion::getCliente()
{
    return _cliente;
}
Articulo Reparacion::getArticulo()
{
    return _articulo;
}
float Reparacion::getPrecioReparacion()
{
    return _precioReparacion;
}
Fecha Reparacion::getFechaEntrada()
{
    return _fechaEntrada;
}
Fecha Reparacion::getFechaSalida()
{
    return _fechaSalida;
}
char* Reparacion::getFalla()
{
    return _falla;
}
char* Reparacion::getReparacion()
{
    return _reparacion;
}
int Reparacion::getTipoReparacion()
{
    return _tipoReparacion;
}
int Reparacion::getStatus()
{
    return _status;
}
bool Reparacion::getEstado()
{
    return _estado;
}

void Reparacion::setOrdenReparacion(int ordRep)
{
    _ordenReparacion=ordRep;
}
void Reparacion::setCliente(Cliente cliente)
{
    _cliente=cliente;
}
void Reparacion::setArticulo(Articulo art)
{
    _articulo=art;
}
void Reparacion::setPrecioReparacion(float precioRep)
{
    _precioReparacion=precioRep;
}
void Reparacion::setFechaEntrada(Fecha fechaIn)
{
    _fechaEntrada=fechaIn;
}
void Reparacion::setFechaSalida(Fecha fechaOut)
{
    _fechaSalida=fechaOut;
}
void Reparacion::setFalla(const char* falla)
{
    strcpy(_falla,falla);
}
void Reparacion::setReparacion(const char* reparacion)
{
    strcpy(_reparacion,reparacion);
}
void Reparacion::setTipoReparacion(int tipoRep)
{
    _tipoReparacion=tipoRep;
}
void Reparacion::setStatus(int status)
{
    _status=status;
}
void Reparacion::setEstado(bool estado)
{
    _estado=estado;
}

void Reparacion::cargar()
{
    std::cout<<"Orden de reparacion: ";
    std::cin>>_ordenReparacion;
    _articulo.cargar();
    std::cout<<"Precio de reparacion: ";
    std::cin>>_precioReparacion;
    _fechaEntrada.Cargar();
    _fechaSalida.Cargar();
    std::cout<<"Falla: ";
    cargarCadena(_falla,49);
    std::cout<<"Reparacion: ";
    cargarCadena(_reparacion,49);
    std::cout<<"Tipo de reparacion: ";
    std::cin>>_tipoReparacion;
    std::cout<<"Status: ";
    std::cin>>_status;
    _estado=true;
}

void Reparacion::mostrar(){
    if(_estado==true){
        std::cout<<"Orden de reparacion: "<<_ordenReparacion<<std::endl;
        _articulo.mostrar();
        std::cout<<"Precio de reparacion: "<<_precioReparacion<<std::endl;
        _fechaEntrada.Mostrar();
        _fechaSalida.Mostrar();
        std::cout<<"Falla: "<<_falla<<std::endl;
        std::cout<<"Reparacion: "<<_reparacion<<std::endl;
        std::cout<<"Tipo de reparacion: "<<_tipoReparacion<<std::endl;
        std::cout<<"Status: "<<_status<<std::endl;
    }
}
