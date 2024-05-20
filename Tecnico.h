#pragma once
#include "Persona.h"

class Tecnico: public Persona{
    protected:
        int _numTecnico;
        bool _estado;
    public:
        int getNumTecnico();
        bool getEstado();

        void setNumTecnico(int numTecnico);
        void setEstado(bool estado);

        void cargar();
        void mostrar();
};
