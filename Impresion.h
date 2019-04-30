/*
|* Nombre: Impresion.h
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo de cabecera con los prototipos de las funciones de gestión.
*/

#ifndef IMPRESION_H_INCLUDED
#define IMPRESION_H_INCLUDED


enum simbSimple{BV = 179, ESD = 191, EII, TEI, TE, ITI, ITD = 180, BH = 196, CRUZ, EID = 217, ESI};
//----------------------------------------------------------------------------------------
/** @brief Función que imprime un archivo.
 *
 *  @param archivo Archivo que se quiere imprimir.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void ImprimeArchivo (const char *archivo, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Función que imprime el título del juego.
 *
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void ImprimirTitulo(int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Función que imprime el tablero.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void ImprimeTablero(int ancho, int alto, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Función que genera un marco simple.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void MarcoSimple(int ancho, int alto, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Función que borra un marco simple.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void EliminarMarcoSimple(int ancho, int alto, int x, int y);

#endif // IMPRESION_H_INCLUDED
