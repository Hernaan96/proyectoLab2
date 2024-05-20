#include <iostream>
#include "Fecha.h"

Fecha::Fecha()
{
    _dia=1;
    _mes=1;
    _anio=1900;
}
Fecha::Fecha(int d, int m, int a)
{
    _dia=d;
    _mes=m;
    _anio=a;
}

int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}

void Fecha::setDia (int dia)
{
    _dia=dia;
}
void Fecha::setMes(int mes)
{
    _mes=mes;
}
void Fecha::setAnio(int anio)
{
    _anio=anio;
}


void Fecha::Cargar()
{
    std::cout<<"Ingrese un dia: ";
    std::cin>>_dia;
    std::cout<<"Ingrese mes: ";
    std::cin>>_mes;
    std::cout<<"Ingrese anio: ";
    std::cin>>_anio;

    while(_anio<0)
    {
        std::cout<<"Anio ingresado no valido, vuelva a ingresar un anio: ";
        std::cin>>_anio;
    }
    if(_anio%4==0 && _anio%100 !=0)
    {
        if(_mes>=1 && _mes<=12)
        {
            if(_mes==2)
            {
                if(_dia<1 || _dia>29)
                {
                    std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 29, vuelva ingresarlo por favor"<<std::endl;
                    std::cin>>_dia;
                }

            }
            if (_mes==1 || _mes==3 ||_mes==5 ||_mes==7 ||_mes==8 ||_mes==10 ||_mes==12)
            {
                if(_dia<1 || _dia>31)
                {
                    std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 31, vuelva ingresarlo por favor"<<std::endl;
                    std::cin>>_dia;
                }
            }
            if (_mes==4 || _mes==6 ||_mes==9 ||_mes==11)
            {
                if(_dia<1 || _dia>30)
                {
                    std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 30, vuelva ingresarlo por favor"<<std::endl;
                    std::cin>>_dia;
                }
            }
        }
        else
        {

            std::cout<<"El mes ingresado es incorrecto asegurese que el mes sea entre 1 y 12, vuelva ingresarlo por favor"<<std::endl;
            std::cin>>_mes;
        }

    }
    else
    {
        while(_mes<1 || _mes>12)
        {
            std::cout<<"El mes ingresado es incorrecto asegurese que el mes sea entre 1 y 12, vuelva ingresarlo por favor"<<std::endl;
            std::cin>>_mes;
        }
        if(_mes==2)
        {
            while(_dia<1 || _dia>29)
            {
                std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 29, vuelva ingresarlo por favor"<<std::endl;
                std::cin>>_dia;
            }

        }
        if (_mes==1 || _mes==3 ||_mes==5 ||_mes==7 ||_mes==8 ||_mes==10 ||_mes==12)
        {
            while(_dia<1 || _dia>31)
            {
                std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 31, vuelva ingresarlo por favor"<<std::endl;
                std::cin>>_dia;
            }
        }
        if (_mes==4 || _mes==6 ||_mes==9 ||_mes==11)
        {
            while(_dia<1 || _dia>30)
            {
                std::cout<<"El dia ingresado es incorrecto asegurese que sean dias entre 1 a 30, vuelva ingresarlo por favor"<<std::endl;
                std::cin>>_dia;
            }
        }

    }
}


void Fecha::Mostrar()
{
    std::cout<<"La fecha ingresada es: ";
    std::cout<<_dia<<"/"<<_mes<<"/"<<_anio;
}
