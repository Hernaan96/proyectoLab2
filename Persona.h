#pragma once

class Persona{
private:
    int _id;
    char _nombre[30];
    char _apellido[30];
    Fecha _nacimiento;
    int _dni;
    bool _estado;
public:
    int getId();
    const char* getNombre();
    const char* getApellido();
    Fecha getNacimiento();
    int getDni();
    bool getEstado();

    void setId(int id);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setFecha(Fecha nacimiento);
    void setDni(int dni);
    void setEstado(bool estado);

    void Cargar();
    void Mostrar();
};
