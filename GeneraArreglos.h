/*
|* Nombre: GeneraArreglos.h
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo de cabecera con los prototipos de las funciones que inicializan los arreglos necesarios para la
                gestión del tablero del juego.
*/

#ifndef GENERAARREGLOS_H_INCLUDED
#define GENERAARREGLOS_H_INCLUDED

enum{MINA = 9, NADA = 0};

//----------------------------------------------------------------------------------------
/** @brief Función que genera los números correspondientes alrededor de la mina.
 *
 *  @param Tablero Arreglo del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *
*/
void GeneraMinas(int **Tablero, int x, int y, int alto, int ancho);
//----------------------------------------------------------------------------------------
/** @brief Función que genera las minas y números en el tablero.
 *
 *  @param Tablero Arreglo del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *
*/
void ArregloTablero(int ancho, int alto, int NumMinas, int **Tablero);

#endif // GENERAARREGLOS_H_INCLUDED
