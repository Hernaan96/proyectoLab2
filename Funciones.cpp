
#include <iostream>
#include "Funciones.h"
#include "rlutil.h"


void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=cin.get();

        if (palabra[i]=='\n'){

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}

void cargarContrasena(char* cadena, int longitud) {
    char caracter;
    int i = 0;

    do {
        caracter = getch(); // Obtener la tecla presionada

        if (caracter != 8 && caracter != 13 && i < longitud - 1) { // Si no es retroceso, no es Enter y no se supera la longitud
            cadena[i] = caracter;
            std::cout << '*'; // Mostrar asterisco en lugar del carácter
            i++;
        } else if (caracter == 8 && i > 0) { // Si es retroceso y hay caracteres
            std::cout << "\b \b"; // Borrar último asterisco mostrado
            i--;
        }
    } while (caracter != 13); // Si presiona ENTER
    cadena[i] = '\0'; // Terminar la cadena
}


void dibujarCuadro(int x1, int y1, int x2, int y2) {
    // Dibujar líneas horizontales superior e inferior
    for (int i = x1 + 1; i < x2; i++) {
        rlutil::locate(i, y1);
        std::cout << char(205); // Carácter ASCII para línea horizontal
        rlutil::locate(i, y2);
        std::cout << char(205); // Carácter ASCII para línea horizontal
    }

    // Dibujar líneas verticales izquierda y derecha
    for (int i = y1 + 1; i < y2; i++) {
        rlutil::locate(x1, i);
        std::cout << char(186); // Carácter ASCII para línea vertical
        rlutil::locate(x2, i);
        std::cout << char(186); // Carácter ASCII para línea vertical
    }

    // Esquinas
    rlutil::locate(x1, y1);
    std::cout << char(201); // Carácter ASCII para esquina superior izquierda
    rlutil::locate(x1, y2);
    std::cout << char(200); // Carácter ASCII para esquina inferior izquierda
    rlutil::locate(x2, y1);
    std::cout << char(187); // Carácter ASCII para esquina superior derecha
    rlutil::locate(x2, y2);
    std::cout << char(188); // Carácter ASCII para esquina inferior derecha
}




    //FUNCION QUE DESACTIVA EL BOTON MAXIMIZAR

void desactivarMaximizar(){
	HWND consoleWindow;
	consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE,GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
}
