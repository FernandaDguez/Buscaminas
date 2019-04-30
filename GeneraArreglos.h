/*
|* Nombre: GeneraArreglos.h
|*
|* Autores: Christopher Arce D�az
|*     	    Nicole Castillo Machado
|*	        Mar�a Fernanda Dom�nguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripci�n: Archivo de cabecera con los prototipos de las funciones que inicializan los arreglos necesarios para la
                gesti�n del tablero del juego.
*/

#ifndef GENERAARREGLOS_H_INCLUDED
#define GENERAARREGLOS_H_INCLUDED

enum{MINA = 9, NADA = 0};

//----------------------------------------------------------------------------------------
/** @brief Funci�n que genera los n�meros correspondientes alrededor de la mina.
 *
 *  @param Tablero Arreglo del tablero.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *
*/
void GeneraMinas(int **Tablero, int x, int y, int alto, int ancho);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que genera las minas y n�meros en el tablero.
 *
 *  @param Tablero Arreglo del tablero.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *
*/
void ArregloTablero(int ancho, int alto, int NumMinas, int **Tablero);

#endif // GENERAARREGLOS_H_INCLUDED
