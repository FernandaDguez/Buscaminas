/*
|* Nombre: Gestion.h
|*
|* Autores: Christopher Arce D�az
|*     	    Nicole Castillo Machado
|*	        Mar�a Fernanda Dom�nguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripci�n: Archivo de cabecera con los prototipos de la funciones de gesti�n.
*/

#ifndef GESTION_H_INCLUDED
#define GESTION_H_INCLUDED

void GestionMenu();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la opci�n de jugar.
 *
*/
void GestionJugar();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la opci�n de instrucciones.
 *
*/
void GestionInstrucciones();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la opci�n de cr�ditos.
 *
*/
void GestionCreditos();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la dificultad principiante.
 *
*/
void GestionPrincipiante();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la dificultad intermedio.
 *
*/
void GestionIntermedio();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la dificultad avanzado.
 *
*/
void GestionAvanzado();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la dificultad personalizada.
 *
*/
void GestionPersonalizado();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la pantalla de perder.
 *
*/
void GestionPerder();
//----------------------------------------------------------------------------------------
/** @brief Funci�n que gestiona la pantalla de ganar.
 *
*/
void GestionGanar();

#endif // GESTION_H_INCLUDED
