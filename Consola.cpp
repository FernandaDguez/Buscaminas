/*
|* Nombre: Consola.cpp
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo para el manejo de la consola sobre los controles del juego, y
                su impresión.
*/

#include <windows.h>
#include <iostream>
#include <conio.h>

#include "Gestion.h"
#include "Consola.h"
#include "Impresion.h"
#include "GeneraArreglos.h"


using std::cout;

void RevisaAlrededor(int i, int j, int ancho, int alto, int x, int y, int **Tablero, bool **Destapa ,int &CasillasSinMina, bool &Perder)
{
    /*
    Revisamos en una de las casillas de alrededor si el indice se encuentra dentro del tablero
    para después revisar si ésta ya ha sido destapada, y si es el caso, llama a la función
    que se encarga de destaparla.
    */
    if (i-1 >= 0)
        if (Destapa[i-1][j] == false)
            DestapaCasilla(Tablero, Destapa, i-1, j, x-2, y-4, ancho, alto ,CasillasSinMina, Perder);
    if (((i-1) >= 0) && ((j+1) < alto))
        if (Destapa[i-1][j+1] == false)
            DestapaCasilla(Tablero, Destapa, i-1, j+1, x, y-4, ancho, alto ,CasillasSinMina, Perder);
    if (((i-1) >= 0) && ((j-1) >= 0))
        if (Destapa[i-1][j-1] == false)
            DestapaCasilla(Tablero, Destapa, i-1, j-1, x-4, y-4, ancho, alto ,CasillasSinMina, Perder);
    if ((j-1) >= 0)
        if (Destapa[i][j-1] == false)
            DestapaCasilla(Tablero, Destapa, i, j-1, x-4, y-2, ancho, alto ,CasillasSinMina, Perder);
    if ((j+1) < ancho)
        if (Destapa[i][j+1] == false)
            DestapaCasilla(Tablero, Destapa, i, j+1, x, y-2, ancho, alto ,CasillasSinMina, Perder);
    if ((i+1) < alto)
        if (Destapa[i+1][j] == false)
            DestapaCasilla(Tablero, Destapa, i+1, j, x-2, y, ancho, alto ,CasillasSinMina, Perder);
    if (((i+1) < alto) && ((j-1) >= 0))
        if (Destapa[i+1][j-1] == false)
            DestapaCasilla(Tablero, Destapa, i+1, j-1, x-4, y, ancho, alto ,CasillasSinMina, Perder);
    if (((i+1) < alto) && ((j+1)) < ancho)
        if (Destapa[i+1][j+1] == false)
            DestapaCasilla(Tablero, Destapa, i+1, j+1, x, y, ancho, alto ,CasillasSinMina, Perder);
}

void DestapaCasilla(int **Tablero, bool **Destapa, int i, int j, int x, int y, int ancho, int alto, int &CasillasSinMina, bool &Perder)
{
    /*
    Dependiendo del número de la casilla, establece el color relacionado con
    el número para imprimirlo y marcarlo como destapado.
    */
    gotoxy(x+1, y+1);
    switch(Tablero[i][j]){
    case 1:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, AZULCLARO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }
        break;
    case 2:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, VERDE);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case 3:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, ROJOCLARO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }
        break;
    case 4:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, AZUL);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case 5:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, ROJO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case 6:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, ROJO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case 7:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, NEGRO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case 8:
        if(Destapa[i][j] != true){
            EstableceColor(GRIS, GRISCLARO);
            cout << Tablero[i][j];
            Destapa[i][j] = true;
            ++CasillasSinMina;
        }

        break;
    case MINA:
        //si el usuario seleccionó una mina automáticamente pierde.
        EstableceColor(GRIS, NEGRO);
        cout << (char)15;
        Destapa[i][j] = true;
        gotoxy(6,ALTOMAX);
        Perder = true;
        break;
    case NADA:
        /*
        En el caso de no tener minas alrededor, verificamos alrededor de esa casilla
        por si se puede destapar las casillas vecinas.
        */
        EstableceColor(GRISCLARO, GRIS);
        cout << " ";
        Destapa[i][j] = true;
        ++CasillasSinMina;
        RevisaAlrededor(i, j, ancho, alto, x+2, y+2, Tablero, Destapa, CasillasSinMina, Perder);


        break;
    }
}

void SeleccionCasilla(int x, int y, int **Tablero)
{
    //Sobreescribe una casilla del tablero.
    gotoxy(x+1,y);
    cout << (char)BH;
    gotoxy(x,++y);
    cout << (char) BV;
    gotoxy(x+2, y);
    cout << (char)BV;
    gotoxy(x+1,++y);
    cout << (char)BH;

}

void Controles(int x, int y, int ancho, int alto, int **Tablero, bool **Destapa, bool **Marca, int minas, bool &Perder)
{
    /*
    Controla el manejo de las teclas como controles del juego.
    */
    int i = 0, j = 0;
    int limiteX = x;
    int limiteY = y;
    //Inicializa los contadores para generar el juego.
    int CasillasSinMina = 0;
    int ContadorMinas = minas;
    char tecla;
    EstableceColor(GRIS, BLANCO);
    SeleccionCasilla(x,y, Tablero);
    while(true){
        //Si el usuario pierde, se sale del juego.
        if(Perder == true){
            EstableceColor(NEGRO,AMARILLO);
            Sleep(500);
            EstableceColor(NEGRO,AMARILLO);
            system("cls");
            GestionPerder();
            Sleep(3000);
            system("cls");
            GestionMenu();
            break;
        }

        //Si el usuario ya destapó todas las casillas que no tienen minas, gana.
        if(CasillasSinMina == (ancho*alto) - minas){
            EstableceColor(NEGRO,AMARILLO);
            Sleep(500);
            EstableceColor(NEGRO,AMARILLO);
            system("cls");
            GestionGanar();
            Sleep(3000);
            system("cls");
            GestionMenu();
            break;
        }
        //En otro caso, sigue manejando la consola para jugar sobre el tablero.
        if(kbhit()){
            tecla = getch();
            //Con esc salimos del juego y volvemos al menú.
            if(tecla == ESC){
                EstableceColor(NEGRO,AMARILLO);
                system("cls");
                GestionMenu();
                break;
            }
            if(tecla == ESPACIO && Marca[i][j] == false)
                DestapaCasilla(Tablero, Destapa, i, j, x, y, ancho, alto, CasillasSinMina, Perder);
            //Si presiona la b, se coloca la banderita sobre la casilla, y guardamos que
            //está marcada como que tiene mina.
            if((tolower(tecla) == 'b') && Marca[i][j] == false && Destapa[i][j] == false){
                gotoxy(x+1, y+1);
                EstableceColor(GRIS, ROJO);
                cout << "!";
                Marca[i][j] = true;
                --ContadorMinas;
                gotoxy(6, ALTOMAX);
                EstableceColor(NEGRO,AMARILLO);
                for(int i = 0; i < 20; ++i) cout << " ";
                gotoxy(6, ALTOMAX);
                cout << "MINAS: " << ContadorMinas;
            }

            //Si el usuario presiona v, quita la bandera de la casilla.
            if((tolower(tecla) == 'v') && Marca[i][j] == true){
                gotoxy(x+1, y+1);
                cout << " ";
                Marca[i][j] = false;
                ++ContadorMinas;
                gotoxy(20, ALTOMAX);
                EstableceColor(NEGRO,AMARILLO);
                for(int i = 0; i < 14; ++i) cout << "\b";
                gotoxy(6, ALTOMAX);
                cout << "MINAS: " << ContadorMinas;
            }
            //Si presiona la tecla hacia abajo, sobreesribimos la casilla que
            //le indique la nueva posición en el tablero al usuario, y si sobre pasa el límite, no se
            //mueve el cursor.
            if(y < limiteY + (2*(alto-1))  && (tecla == FLECHA_ABAJO || tolower(tecla) == 's')){
                EstableceColor(GRIS, NEGRO);
                SeleccionCasilla(x,y, Tablero);
                EstableceColor(GRIS, NEGRO);
                SeleccionCasilla(x,y+2, Tablero);
                y += 2;
                ++i;
            }
            if(y > limiteY && (tecla == FLECHA_ARRIBA || tolower(tecla) == 'w')){
                EstableceColor(GRIS, NEGRO);
                SeleccionCasilla(x,y, Tablero);
                SeleccionCasilla(x,y-2, Tablero);
                y -= 2;
                --i;
            }
            if(x < (limiteX+(2*(ancho-1))) && (tecla == FLECHA_DER || tolower(tecla) == 'd')){
                EstableceColor(GRIS, NEGRO);
                SeleccionCasilla(x+2,y, Tablero);
                SeleccionCasilla(x,y, Tablero);
                x += 2;
                ++j;
            }
            if(x > limiteX && (tecla == FLECHA_IZQ || tolower(tecla) == 'a')){
                EstableceColor(GRIS, NEGRO);
                SeleccionCasilla(x-2,y, Tablero);
                SeleccionCasilla(x,y, Tablero);
                x -= 2;
                --j;
            }
            EstableceColor(GRIS, BLANCO);
            SeleccionCasilla(x,y, Tablero);
        }
    }
}


void gotoxy(int x,int y)
{

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord = {x-1,y-1};
SetConsoleCursorPosition(handle,coord);

}

void CambiaCursor(estadoCursor estado, modoCursor modo)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConCurInf;

    ConCurInf.dwSize = modo;
    ConCurInf.bVisible = estado;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}

void EstableceColor(miColor colorFondo, miColor colorTexto)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}
