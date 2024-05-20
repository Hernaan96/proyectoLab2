#pragma once

class Fecha
{
private:
    int _dia, _mes,_anio;
public:
    Fecha();
    Fecha(int d, int m, int a);

    int getDia();
    int getMes();
    int getAnio();

    void setDia (int dia);
    void setMes(int mes);
    void setAnio(int anio);

    void Cargar();
    void Mostrar();
};

