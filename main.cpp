/*
|* Nombre: main.cpp
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Programa principal del juego de Buscaminas.
*/
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <conio.h>

#include "Consola.h"
#include "Impresion.h"
#include "Gestion.h"

using namespace  std;

int main()
{
    //Establece el color de la consola.
    EstableceColor(NEGRO, AMARILLO);
    system("cls");
    CambiaCursor(APAGADO);
    //Gestiona el menú de opciones.
    GestionMenu();



    EstableceColor(NEGRO,AMARILLO);
    system("pause");
    return 0;
}
