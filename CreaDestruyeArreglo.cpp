/*
|* Nombre: CreaDestruyeArreglo.cpp
|*
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Archivo para crear, destruir los arreglos bidimensionales dinámicos
                necesarios para el juego.
*/
#include <iostream>
#include <new>

using namespace std;

int **CreaArregloBi(int m, int n)
{
    int **arreglo = NULL;

    try{
        arreglo = new int *[m];
        arreglo[0] = new int[m*n];
        for(int i = 1 ; i < m ; ++i)
            arreglo[i] = arreglo[i-1]+n;

    }catch(bad_alloc &exc){
        delete [] arreglo[0];
        delete [] arreglo;
        throw "Error de asignaci\242n de memoria.\n";
    }
    return arreglo;
}
void DestruyeArregloBi(int **& arreglo)
{
    delete [] arreglo[0];
    delete [] arreglo;
    arreglo = NULL;
}

bool **CreaArregloBoolBi(int m, int n)
{
    bool **Arreglo = new (nothrow) bool *[m];
    Arreglo[0] = new (nothrow) bool[m*n];
    for(int i = 1 ; i < m ; ++i)
            Arreglo[i] = Arreglo[i-1]+n;
    for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                Arreglo[i][j] =  false;
    return Arreglo;
}

void DestruyeArregloBoolBi(bool **& arreglo)
{
    delete [] arreglo[0];
    delete [] arreglo;
    arreglo = NULL;
}
