#include <iostream>
#include "Login.h"
#include "Menu.h"
#include "rlutil.h"
#include "Funciones.h"


using namespace std;

int main()
{
    desactivarMaximizar();
    Login l;
    Menu menu;
    l.iniciarSesion();
    if(l.getPudoIngresar()==true){
        menu.mostrarMenu();
    }
    return 0;
}
