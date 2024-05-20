#pragma once

class Domicilio{
protected:
    int _id;
    char _calle [30];
    int _numeracion;
    int _codigoPostal;
    bool _estado;
public:
    int getID();
    char* getCalle();
    int getCodigoPostal();
    bool getEstado();
    void setID(int id);
    void setCalle(const char* calle);
    void setCodigoPostal(int codPostal);
    void setEstado(bool estado);
    void cargar();
    void mostrar();
};
