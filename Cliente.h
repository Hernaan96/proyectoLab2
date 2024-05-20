#pragma once
#include "Persona.h"
#include "Contacto.h"
class Cliente: public Persona{
    protected:
        Contacto _datos;
        bool _estado;
    public:
        Contacto getDatos();
        bool getEstado();

        void setDatos(Contacto contacto);
        void setEstado(bool estado);

        void cargar();
        void mostrar();
};
