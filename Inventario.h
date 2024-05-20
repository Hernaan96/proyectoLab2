#pragma once
#include "Articulo.h"
class Inventario {
private:
    Articulo _idArticulo;
    int _existencia;
    bool _estado;
public:
    Articulo getArticulo();
    int getExistencia();
    bool getEstado();
    void setArticulo (Articulo idArticulo);
    void setExistencia (int existencia);
    void cargar();
    void mostrar();
};

