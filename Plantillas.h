/*
|* Nombre: Plantillas.h
|*
|* Autores: Christopher Arce D�az
|*     	    Nicole Castillo Machado
|*	        Mar�a Fernanda Dom�nguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripci�n: Archivo de cabecera con la funcion de Captura.
*/

#ifndef PLANTILLAS_H_INCLUDED
#define PLANTILLAS_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <new>

using namespace std;

//----------------------------------------------------------------------------------------
/** @brief Captura un n�mero (de cualquier tipo) de manera segura.
 *
 *  @param numero La variable donde se guardar� el n�mero capturado.
 *  @param solicitud El mensaje que se despliegar� para pedir un n�mero
 *                   al usuario.
 *
 *  @return El n�mero introducido por el usuario.
*/
template <typename tipo>
void CapturaNumero(tipo &numero, const char solicitud[])
{
    while(true){
        std::cout << solicitud;
        std::cin >> numero;

        if (std::cin.bad()){
            std::cout << "Ocurri\xA2 un error fatal. El programa se cerrar\xA0..." << std::endl;
            system ("pause");
            exit(1);
        }
        if (std::cin.fail()){
            std::cout << "Tipo de dato inv\xA0lido, no es un n\xA3mero." << std::endl << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (std::cin.good()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return;
        }
    }
}


#endif // PLANTILLAS_H_INCLUDED
