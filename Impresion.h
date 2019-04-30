/*
|* Nombre: Impresion.h
|*
|* Autores: Christopher Arce D�az
|*     	    Nicole Castillo Machado
|*	        Mar�a Fernanda Dom�nguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripci�n: Archivo de cabecera con los prototipos de las funciones de gesti�n.
*/

#ifndef IMPRESION_H_INCLUDED
#define IMPRESION_H_INCLUDED


enum simbSimple{BV = 179, ESD = 191, EII, TEI, TE, ITI, ITD = 180, BH = 196, CRUZ, EID = 217, ESI};
//----------------------------------------------------------------------------------------
/** @brief Funci�n que imprime un archivo.
 *
 *  @param archivo Archivo que se quiere imprimir.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *
*/
void ImprimeArchivo (const char *archivo, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que imprime el t�tulo del juego.
 *
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *
*/
void ImprimirTitulo(int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que imprime el tablero.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *
*/
void ImprimeTablero(int ancho, int alto, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que genera un marco simple.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *
*/
void MarcoSimple(int ancho, int alto, int x, int y);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que borra un marco simple.
 *
 *  @param ancho El ancho del tablero.
 *  @param alto El alto del tablero.
 *  @param x Posici�n en x.
 *  @param y Posici�n en y.
 *
*/
void EliminarMarcoSimple(int ancho, int alto, int x, int y);

#endif // IMPRESION_H_INCLUDED
