/*
|* Nombre: CreaDestruyeArreglo.h
|*
|* Autores: Christopher Arce D�az
|*     	    Nicole Castillo Machado
|*	        Mar�a Fernanda Dom�nguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripci�n: Archivo de cabecera con los prototipos de las funciones para crear, destruir los arreglos bidimensionales
                din�micos necesarios para el juego.
*/

#ifndef CREADESTRUYEARREGLO_H_INCLUDED
#define CREADESTRUYEARREGLO_H_INCLUDED

//----------------------------------------------------------------------------------------
/** @brief Funci�n que crea un arreglo bidimensional de enteros.
 *
 *  @param m El n�mero de renglones.
 *  @param n El n�mero de columnas.
*/
int **CreaArregloBi(int m, int n);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que destruye un arreglo bidimensional
 *
 *  @param arreglo El arreglo que se desea destruir.
 *
*/
void DestruyeArregloBi(int **& arreglo);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que crea un arreglo bidimensional de booleanos.
 *
 *  @param m El n�mero de renglones.
 *  @param n El n�mero de columnas.
*/
bool **CreaArregloBoolBi(int m, int n);
//----------------------------------------------------------------------------------------
/** @brief Funci�n que destruye un arreglo bidimensional de booleanos.
 *
 *  @param arreglo El arreglo que se desea destruir.
 *
*/
void DestruyeArregloBoolBi(bool **& arreglo);

#endif // CREADESTRUYEARREGLO_H_INCLUDED
