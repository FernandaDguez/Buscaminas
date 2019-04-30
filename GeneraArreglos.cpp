/*
|* Nombre: GeneraArreglos.cpp
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo que inicializa los arreglos necesarios para la gestión del tablero
                del juego.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "GeneraArreglos.h"

using namespace std;


void GeneraMinas(int **Tablero, int x, int y, int alto, int ancho)
{
    /*
    En cada casilla vecina de la mina que asignamos le sumamos 1 al número
    de minas que representan alrededor, cuidando que estas casillas no corresponden a minas.
    */
    if ((x-1) >= 0 && (y-1) >= 0 && Tablero[x-1][y-1] != MINA) Tablero[x-1][y-1] += 1;
    if ((y-1) >= 0 && Tablero[x][y-1] != MINA) Tablero[x][y-1] += 1;
    if ((x+1) < ancho && (y-1) >= 0 && Tablero[x+1][y-1] != MINA) Tablero[x+1][y-1] += 1;
    if ((x-1) >= 0 && Tablero[x-1][y] != MINA) Tablero[x-1][y] += 1;
    if ((x+1) < ancho && y > 0 && Tablero[x+1][y] != MINA) Tablero[x+1][y] += 1;
    if ((x-1) >= 0 && (y+1) < alto && Tablero[x-1][y+1] != MINA) Tablero[x-1][y+1] += 1;
    if ((y+1) < alto && Tablero[x][y+1] != MINA) Tablero[x][y+1] += 1;
    if ((x+1) < ancho && (y+1) < alto && Tablero[x+1][y+1] != MINA) Tablero[x+1][y+1] += 1;
}

void ArregloTablero(int ancho, int alto, int NumMinas, int **Tablero)
{
   int x, y;
   srand(time(NULL));

   try{
        for (int i = 0; i < alto; ++i)
            for (int j = 0; j < ancho; ++j)
                //Inicializamos el tablero en nada, para facilitar
                //la asignación de minas y números en las casillas.
                Tablero[i][j] =  NADA;

           for (int i = 0; i < NumMinas;){
                x = rand() % (ancho - 1) + 1;
                y = rand() % (alto - 1) + 1;
                if (Tablero[x][y] < MINA){
                // Si en la posición generada aleatoriamente no hay mina,
                // le asignamos una y generamos los números que la rodean.
                    Tablero[x][y] = MINA;
                    GeneraMinas(Tablero, x, y, ancho, alto);
                    ++i;
                }
           }
   }catch(const char *exc){
        cout << "Tenemos un problema: " << exc << endl;
   }
}
