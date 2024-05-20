#include <iostream>
#include <cstring>
#include "Articulo.h"
#include "Funciones.h"



int Articulo::getIdArticulo()
{
    return _idArticulo;
}
int Articulo::getSku()
{
    return _sku;
}
char* Articulo::getArticulo()
{
    return _articulo;
}
char* Articulo::getMarca()
{
    return _marca;
}
char* Articulo::getModelo()
{
    return _modelo;
}
int Articulo::getSerie()
{
    return _numSerie;
}
int Articulo::getTipoArticulo()
{
    return _tipoArticulo;
}
bool Articulo::getEstado()
{
    return _estado;
}


void Articulo::setIdArticulo(int idArticulo)
{
    _idArticulo=idArticulo;
}
void Articulo::setSku(int sku)
{
    _sku=sku;
}
void Articulo::setArticulo(const char* articulo)
{
    strcpy(_articulo, articulo);
}
void Articulo::setMarca(const char* marca)
{
    strcpy(_marca, marca);
}
void Articulo::setModelo(const char* modelo)
{
    strcpy(_modelo, modelo);
}
void Articulo::setSerie(int serie)
{
    _numSerie=serie;
}
void Articulo::setTipoArticulo(int tipoArticulo)
{
    _tipoArticulo=tipoArticulo;
}
void Articulo::setEstado(bool estado)
{
    _estado=estado;
}

void Articulo::cargar()
{
    std::cout << "Id articulo #";
    std::cin >> _idArticulo;
    std::cout << "SKU: ";
    std::cin >> _sku;
    std::cout << "Articulo: ";
    cargarCadena (_articulo, 29);
    std::cout << "Marca: ";
    cargarCadena (_marca, 29);
    std::cout << "Modelo: ";
    cargarCadena (_modelo, 29);
    std::cout << "Nimero de serie: ";
    std::cin >> _numSerie;
    std::cout << "Tipo de articulo: ";
    std::cin >> _tipoArticulo;
    _estado=true;
}

void Articulo::mostrar()
{
    std::cout << "Id articulo #" << _idArticulo <<std::endl;
    std::cout << "SKU: "<< _sku << std::endl;
    std::cout << "Articulo: " << _articulo << std::endl;
    std::cout << "Marca: " << _marca << std::endl;
    std::cout << "Modelo: " << _modelo << std::endl;
    std::cout << "Nimero de serie: " << _numSerie << std::endl;
    std::cout << "Tipo de articulo: " << _tipoArticulo << std::endl;
}
