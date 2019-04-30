/*
|* Nombre: Consola.h
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo de cabecera
*/

#ifndef CONSOLA_H_INCLUDED
#define CONSOLA_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>

#define FLECHA_ARRIBA 72
#define FLECHA_IZQ 75
#define FLECHA_DER 77
#define FLECHA_ABAJO 80
#define ESC 27

#define ENTER 13
#define ESPACIO 32
#define B 66

#define ALTOMAX 50
#define ANCHOMAX 170

enum estadoCursor{APAGADO, ENCENDIDO};
enum modoCursor{MINI = 5, NORMAL = 20, SOLIDO = 80};
enum miColor{
    NEGRO,
    AZUL,
    VERDE,
    AGUAMARINA,
    ROJO,
    PURPURA,
    AMARILLO,
    GRISCLARO,
    GRIS,
    AZULCLARO,
    VERDECLARO,
    AGUAMARINACLARO,
    ROJOCLARO,
    PURPURACLARO,
    AMARILLOCLARO,
    BLANCO
};


//----------------------------------------------------------------------------------------
/** @brief Función que mueve el cursor.
 *
 *  @param x Posición en x.
 *  @param y Posición en y.
 *
*/
void gotoxy(int x,int y);
//----------------------------------------------------------------------------------------
/** @brief Función que enciende o apaga el cursor.
 *
 *  @param estado El estado al que se quiere cambiar el cursor.
 *
*/
void CambiaCursor(estadoCursor estado, modoCursor modo = NORMAL);
//----------------------------------------------------------------------------------------
/** @brief Función que cambia el color de fondo y el color del texto.
 *
 *  @param colorFondo El color que se desea en el fondo.
 *  @param colorTexto El color que se desea en el texto.
*/
void EstableceColor(miColor colorFondo, miColor colorTexto);
//----------------------------------------------------------------------------------------
/** @brief Función que controla el tablero del juego.
 *
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *  @param Tablero Arreglo del tablero.
 *  @param Destapa Arreglo de booleanos de casillas destapadas.
 *  @param Marca Arreglo de booleanos de casillas marcadas.
 *  @param minas El número de minas.
 *  @param Perder Booleano que indica cuándo pierde.
*/
void Controles(int x, int y, int ancho, int alto, int **Tablero, bool **Destapa, bool **Marca, int minas, bool &Perder);
//----------------------------------------------------------------------------------------
/** @brief Función que selecciona una casilla.
 *
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param Tablero Arreglo del tablero.
*/
void SeleccionCasilla(int x, int y, int **Tablero);
//----------------------------------------------------------------------------------------
/** @brief Función que destapa una casilla.
 *
 *  @param Tablero Arreglo del tablero.
 *  @param Destapa Arreglo de booleanos de casillas destapadas.
 *  @param i Índice de contenido.
 *  @param j Índice de contenido.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *  @param CasillasSinMina Contador de las casillas sin mina.
 *  @param Perder Booleano que indica cuándo pierde.
*/
void DestapaCasilla(int **Tablero, bool **Destapa, int i, int j, int x, int y, int ancho, int alto, int &CasillasSinMina, bool &Perder);
//----------------------------------------------------------------------------------------
/** @brief Función que revisa alrededor de la casilla.
 *
 *  @param i Índice de contenido.
 *  @param j Índice de contenido.
 *  @param ancho Ancho del tablero.
 *  @param alto Alto del tablero.
 *  @param x Posición en x.
 *  @param y Posición en y.
 *  @param Tablero Arreglo del tablero.
 *  @param Destapa Arreglo de booleanos de casillas destapadas.
 *  @param CasillasSinMina Contador de las casillas sin mina.
 *  @param Perder Booleano que indica cuándo pierde.
*/
void RevisaAlrededor(int i, int j, int ancho, int alto, int x, int y, int **Tablero, bool **Destapa, int &CasillasSinMina, bool &Perder);

#endif // CONSOLA_H_INCLUDED
