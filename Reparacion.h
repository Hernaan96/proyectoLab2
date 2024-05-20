#pragma once
#include "Articulo.h"
#include "Cliente.h"
#include "Fecha.h"


class Reparacion{
private:
    int _ordenReparacion;
    Cliente _cliente;
    Articulo _articulo;
    float _precioReparacion;
    Fecha _fechaEntrada;
    Fecha _fechaSalida;
    char _falla[50];
    char _reparacion[50];
    int _tipoReparacion;
    int _numTecnico;
    int _status;
    bool _estado;

public:
    int getOrdenReparacion();
    Cliente getCliente();
    Articulo getArticulo();
    float getPrecioReparacion();
    Fecha getFechaEntrada();
    Fecha getFechaSalida();
    char* getFalla();
    char* getReparacion();
    int getTipoReparacion();
    int getStatus();
    bool getEstado();

    void setOrdenReparacion(int ordRep);
    void setCliente(Cliente cliente);
    void setArticulo(Articulo art);
    void setPrecioReparacion(float precioRep);
    void setFechaEntrada(Fecha fechaIn);
    void setFechaSalida(Fecha fechaOut);
    void setFalla(const char* falla);
    void setReparacion(const char* reparacion);
    void setTipoReparacion(int tipoRep);
    void setStatus(int status);
    void setEstado(bool estado);

    void cargar();
    void mostrar();

};
