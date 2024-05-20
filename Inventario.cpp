#include "Inventario.h"
#include "Funciones.h"
#include <iostream>
#include <cstring>



Articulo Inventario::getArticulo()
{
    return _idArticulo;
}
int Inventario::getExistencia()
{
    return _existencia;
}
bool Inventario::getEstado()
{
    return _estado;
}
void Inventario::setArticulo (Articulo idArticulo)
{
    _idArticulo=idArticulo;
}
void Inventario::setExistencia (int existencia)
{
    _existencia=existencia;
}


void Inventario::cargar()
{
    std::cout << "Id articulo #";
    _idArticulo.cargar();
    std::cout << "Existencia: ";
    std::cin >> _existencia;
    _estado=true;
}

void Inventario::mostrar()
{
    if(_estado==true){
    std::cout << "Id articulo #" ;
    _idArticulo.mostrar();
    std::cout << "Existencia: " << _existencia << std::endl;
    }
}
