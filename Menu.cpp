#include <iostream>
#include "Menu.h"
#include "rlutil.h"
#include "Funciones.h"


void Menu::seleccionarItem(const char* text, int posx, int posy, bool seleccionado){
    if(seleccionado){
        rlutil::setColor(rlutil::WHITE);
        rlutil::setBackgroundColor(rlutil::CYAN);
    }
    else{
        rlutil::setColor(rlutil::CYAN);
        rlutil::setBackgroundColor(rlutil::BLACK);
    }
    rlutil::locate(posx,posy);
    std::cout<<text<<std::endl;
    rlutil::setColor(rlutil::CYAN);

    rlutil::setBackgroundColor(rlutil::BLACK);
}


void Menu::mostrarMenu(){
    dibujarCuadro(1,1,119,30);//Cuadro grande
    int opcion=-1;
    int y=0;
    rlutil::hidecursor();

    do{
        seleccionarItem("OPCION 1", 58,13,y==0);
        seleccionarItem("OPCION 2", 58,14,y==1);
        seleccionarItem("OPCION 3", 58,15,y==2);
        seleccionarItem("OPCION 4", 58,16,y==3);
        seleccionarItem(" SALIR  ", 58,17,y==4);


        //rlutil::locate(56,13 + y);
        //cout<<(char)175<<endl;

        int key= rlutil::getkey();
        switch(key)
        {
        case 14:
            rlutil::locate(56,13 + y);
            std::cout<<" "<<std::endl;
            y--;
            if(y<0){
                y=0;
            }
            break;
        case 15:
            rlutil::locate(56,13 + y);
            std::cout<<" "<<std::endl;
            y++;
            if(y>4){
                y=4;
            }
            break;
        case 1:
            switch(y)
            {
                case 4:
                opcion=0;
                break;
                default:
                    break;
            }
        default:
            break;
        }


    }while(opcion!=0);

}
