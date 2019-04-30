/*
|* Nombre: Impresion.cpp
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Programa que se encarga de las funciones de imprimir en la pantalla.
*/


#include <windows.h>
#include <cstring>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <locale.h>

#include "Impresion.h"
#include "Consola.h"

using namespace std;

void ImprimeArchivo (const char *archivo, int x, int y)
{
    string linea;
    setlocale(LC_ALL, "spanish");
    ifstream myfile(archivo);
    if (myfile.is_open())
    {
        while ( getline (myfile,linea) )
        {
            gotoxy(x,y++);
            cout << linea;
        }
        myfile.close();
    }

    else cout << "Error, Archivo \"" << &archivo << "\"faltante";
    setlocale(LC_ALL, "C");
}

void ImprimirTitulo(int x, int y)
{
    gotoxy(x, y);
    cout << "            ___    _   _    ___     ___     ___   __  __    ___    _  _     ___     ___           ";
    gotoxy(x, y+1);
    cout << "    o O O  | _ )  | | | |  / __|   / __|   /   \\ |  \\/  |  |_ _|  | \\| |   /   \\   / __|          ";
    gotoxy(x, y+2);
    cout << "   o       | _ \\  | |_| |  \\__ \\  | (__    | - | | |\\/| |   | |   | .` |   | - |   \\__ \\    ___   ";
    gotoxy(x, y+3);
    cout << "  TS__[O]  |___/   \\___/   |___/   \\___|   |_|_| |_|__|_|  |___|  |_|\\_|   |_|_|   |___/   |___|  ";
    gotoxy(x, y+4);
    cout << " {======|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"|_|\"\"\"\"\"| ";
    gotoxy(x, y+5);
    cout << "./o--000'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-'\"`-0-0-' ";
}

void MarcoSimple(int ancho, int alto, int x, int y)
{
    // Parte superior
    gotoxy(x,y);
    cout << (char)ESI;
    for(int i = 2 ; i < ancho ; ++i) cout << (char)BH;
    cout << (char)ESD;
    // Parte media
    for(int i = 2 ; i < alto ; ++i){
        gotoxy(x,++y);
        cout << (char)BV;
        for(int j = 2 ; j < ancho ; ++j) gotoxy(x+j,y);
        cout << (char)BV;
    }
    // Parte inferior
    gotoxy(x,++y);
    cout << (char)EII;
    for(int i = 2 ; i < ancho ; ++i) cout << (char)BH;
    cout << (char)EID;
}

void EliminarMarcoSimple(int ancho, int alto, int x, int y)
{
    // Parte superior
    gotoxy(x,y);
    cout << " ";
    for(int i = 2 ; i < ancho ; ++i) cout << " ";
    cout << " ";
    // Parte media
    for(int i = 2 ; i < alto ; ++i){
        gotoxy(x,++y);
        cout << " ";
        for(int j = 2 ; j < ancho ; ++j) gotoxy(x+j,y);
        cout << " ";
    }
    // Parte inferior
    gotoxy(x,++y);
    cout << " ";
    for(int i = 2 ; i < ancho ; ++i) cout << " ";
    cout << " ";
}

void ImprimeTablero(int ancho, int alto, int x, int y)
{
    EstableceColor(GRIS, NEGRO);
    // Parte superior
    gotoxy(x,y);
    cout << (char)ESI;
    for(int i = 1 ; i < ancho ; ++i) cout << (char)BH << (char)TE;
    cout << (char)BH;
    cout << (char)ESD;
    // Parte media
    for(int i = 1 ; i < alto ; ++i){
        gotoxy(x, ++y);
        for(int j = 0; j < ancho; ++j)
            cout << (char)BV << ' ';
            cout << (char)BV;


        gotoxy(x, ++y);
        cout << (char)ITI;
        for(int j = 0; j < ancho-1; ++j)
            cout << (char)BH << (char)CRUZ;
        cout << (char)BH << (char)ITD;

    }
    // Parte inferior
    gotoxy(x,++y);
    for(int i  = 0; i < ancho; ++i) cout << (char)BV << " ";
    cout << (char)BV;
    gotoxy(x,++y);
    cout << (char)EII;
    for(int i = 1 ; i < ancho ; ++i) cout << (char)BH << (char)TEI;
    cout << (char)BH;
    cout << (char)EID;
}
