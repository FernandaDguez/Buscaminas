/*
|* Nombre: Gestion.h
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo de cabecera con los prototipos de la funciones de gestión.
*/

#ifndef GESTION_H_INCLUDED
#define GESTION_H_INCLUDED

void GestionMenu();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la opción de jugar.
 *
*/
void GestionJugar();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la opción de instrucciones.
 *
*/
void GestionInstrucciones();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la opción de créditos.
 *
*/
void GestionCreditos();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la dificultad principiante.
 *
*/
void GestionPrincipiante();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la dificultad intermedio.
 *
*/
void GestionIntermedio();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la dificultad avanzado.
 *
*/
void GestionAvanzado();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la dificultad personalizada.
 *
*/
void GestionPersonalizado();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la pantalla de perder.
 *
*/
void GestionPerder();
//----------------------------------------------------------------------------------------
/** @brief Función que gestiona la pantalla de ganar.
 *
*/
void GestionGanar();

#endif // GESTION_H_INCLUDED
