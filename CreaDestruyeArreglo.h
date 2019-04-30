/*
|* Nombre: CreaDestruyeArreglo.h
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo de cabecera con los prototipos de las funciones para crear, destruir los arreglos bidimensionales
                dinámicos necesarios para el juego.
*/

#ifndef CREADESTRUYEARREGLO_H_INCLUDED
#define CREADESTRUYEARREGLO_H_INCLUDED

//----------------------------------------------------------------------------------------
/** @brief Función que crea un arreglo bidimensional de enteros.
 *
 *  @param m El número de renglones.
 *  @param n El número de columnas.
*/
int **CreaArregloBi(int m, int n);
//----------------------------------------------------------------------------------------
/** @brief Función que destruye un arreglo bidimensional
 *
 *  @param arreglo El arreglo que se desea destruir.
 *
*/
void DestruyeArregloBi(int **& arreglo);
//----------------------------------------------------------------------------------------
/** @brief Función que crea un arreglo bidimensional de booleanos.
 *
 *  @param m El número de renglones.
 *  @param n El número de columnas.
*/
bool **CreaArregloBoolBi(int m, int n);
//----------------------------------------------------------------------------------------
/** @brief Función que destruye un arreglo bidimensional de booleanos.
 *
 *  @param arreglo El arreglo que se desea destruir.
 *
*/
void DestruyeArregloBoolBi(bool **& arreglo);

#endif // CREADESTRUYEARREGLO_H_INCLUDED
