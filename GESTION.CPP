/*
|* Nombre: Gestion.cpp
|* Autores: Christopher Arce Díaz
|*     	    Nicole Castillo Machado
|*	        María Fernanda Domínguez Acosta
|*
|* Fecha: 31/05/2018
|* Descripción: Gestiona las pantallas del menú principal y despliega la selección del usuario.
                Abre los créditos, instrucciones, o bien inicializa una partida.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <new>

#include "Impresion.h"
#include "Consola.h"
#include "Gestion.h"
#include "CreaDestruyeArreglo.h"
#include "GeneraArreglos.h"
#include "Plantillas.h"

using namespace std;

void GestionMenu()
{
    int x = 61, y = 12;
    char tecla;

    //CambiaCursor(APAGADO);
    ImprimirTitulo(45, 1);

    //Despliega las opciones del menú principal.
    gotoxy(77, 13);
    cout << "      _                        \n";
    gotoxy(77, 14);
    cout << "     | |_   _  __ _  __ _ _ __ \n";
    gotoxy(77, 15);
    cout << "  _  | | | | |/ _` |/ _` | '__|\n";
    gotoxy(77, 16);
    cout << " | |_| | |_| | (_| | (_| | |   \n";
    gotoxy(77, 17);
    cout << "  \\___/ \\__,_|\\__, |\\__,_|_|   \n";
    gotoxy(77, 18);
    cout << "              |___/            \n";

    gotoxy(62, 21);
    cout << "  ___           _                       _                       \n";
    gotoxy(62, 22);
    cout << " |_ _|_ __  ___| |_ _ __ _   _  ___ ___(_) ___  _ __   ___  ___ \n";
    gotoxy(62, 23);
    cout << "  | || '_ \\/ __| __| '__| | | |/ __/ __| |/ _ \\| '_ \\ / _ \\/ __|\n";
    gotoxy(62, 24);
    cout << "  | || | | \\__ \\ |_| |  | |_| | (_| (__| | (_) | | | |  __/\\__ \\\n";
    gotoxy(62, 25);
    cout << " |___|_| |_|___/\\__|_|   \\__,_|\\___\\___|_|\\___/|_| |_|\\___||___/\n";

    gotoxy(77, 29);
    cout << " _____              _ _ _            \n";
    gotoxy(77, 30);
    cout << "/  __ \\            | (_) |           \n";
    gotoxy(77, 31);
    cout << "| /  \\/_ __ ___  __| |_| |_ ___  ___ \n";
    gotoxy(77, 32);
    cout << "| |   | '__/ _ \\/ _` | | __/ _ \\/ __|\n";
    gotoxy(77, 33);
    cout << "| \\__/\\ | |  __/ (_| | | || (_) \\__ \\\n";
    gotoxy(77, 34);
    cout << " \\____/_|  \\___|\\__,_|_|\\__\\___/|___/\n";

    gotoxy(85, 37);
    cout << " _____       _ _      \n";
    gotoxy(85, 38);
    cout << "/  ___|     | (_)     \n";
    gotoxy(85, 39);
    cout << "\\ `--.  __ _| |_ _ __ \n";
    gotoxy(85, 40);
    cout << " `--. \\/ _` | | | '__|\n";
    gotoxy(85, 41);
    cout << "/\\__/ / (_| | | | |   \n";
    gotoxy(85, 42);
    cout << "\\____/ \\__,_|_|_|_|   \n";

    gotoxy(79,ALTOMAX-2);
    cout << "Utiliza las flechas para desplazar";
    gotoxy(80,ALTOMAX-1);
    cout << "Presiona Enter para seleccionar";

    EstableceColor(NEGRO, AMARILLO);
    MarcoSimple(67, 8, x, y);

    while(true){
        //Detecta el movimiento del cursor que usa el usuario para dar una selección.
        if(kbhit()){
            tecla = getch();

            if(y < 36 && (tecla == FLECHA_ABAJO || tolower(tecla) == 's')){
                EliminarMarcoSimple(67, 8, x, y);
                y += 8;
            }
            if(y > 12 && (tecla == FLECHA_ARRIBA || tolower(tecla) == 'w')){
                EliminarMarcoSimple(67, 8, x, y);
                y -= 8;
            }

            MarcoSimple(67, 8, x, y);

        }
        if(y == 36 && tecla == ENTER) break;
        if(y == 28 && tecla == ENTER){
            system("cls");
            GestionCreditos();
            break;
        }
        if(y == 20 && tecla == ENTER){
            system("cls");
            GestionInstrucciones();
            break;
        }
        if(y == 12 && tecla == ENTER){
            system("cls");
            GestionJugar();
            break;
        }
    }

    gotoxy(1, ALTOMAX);
}

void GestionJugar()
{
    //Despliega el menú de la selección del juego, y captura la elección del usuario.
    ImprimirTitulo(45,1);
    gotoxy(77, 9);
    cout << "Selecciona el nivel de dificultad";
    int x = 61, y = 11;
    char tecla;

    gotoxy(67, 12);
    cout << "______     _            _       _             _       \n";
    gotoxy(67, 13);
    cout << "| ___ \\   (_)          (_)     (_)           | |      \n";
    gotoxy(67, 14);
    cout << "| |_/ / __ _ _ __   ___ _ _ __  _  __ _ _ __ | |_ ___ \n";
    gotoxy(67, 15);
    cout << "|  __/ '__| | '_ \\ / __| | '_ \\| |/ _` | '_ \\| __/ _ \\\n";
    gotoxy(67, 16);
    cout << "| |  | |  | | | | | (__| | |_) | | (_| | | | | ||  __/\n";
    gotoxy(67, 17);
    cout << "\\_|  |_|  |_|_| |_|\\___|_| .__/|_|\\__,_|_| |_|\\__\\___|\n";
    gotoxy(67, 18);
    cout << "                         |_|                          \n";

    gotoxy(67, 21);
    cout << " _____      _                               _ _       \n";
    gotoxy(67, 22);
    cout << "|_   _|    | |                             | (_)      \n";
    gotoxy(67, 23);
    cout << "  | | _ __ | |_ ___ _ __ _ __ ___   ___  __| |_  ___  \n";
    gotoxy(67, 24);
    cout << "  | || '_ \\| __/ _ \\ '__| '_ ` _ \\ / _ \\/ _` | |/ _ \\ \n";
    gotoxy(67, 25);
    cout << " _| || | | | ||  __/ |  | | | | | |  __/ (_| | | (_) |\n";
    gotoxy(67, 26);
    cout << " \\___/_| |_|\\__\\___|_|  |_| |_| |_|\\___|\\__,_|_|\\___/ \n";

    gotoxy(72, 29);
    cout << "  ___                                _       \n";
    gotoxy(72, 30);
    cout << " / _ \\                              | |      \n";
    gotoxy(72, 31);
    cout << "/ /_\\ \\_   ____ _ _ __  ______ _  __| | ___  \n";
    gotoxy(72, 32);
    cout << "|  _  \\ \\ / / _` | '_ \\|_  / _` |/ _` |/ _ \\ \n";
    gotoxy(72, 33);
    cout << "| | | |\\ V / (_| | | | |/ / (_| | (_| | (_) |\n";
    gotoxy(72, 34);
    cout << "\\_| |_/ \\_/ \\__,_|_| |_/___\\__,_|\\__,_|\\___/ \n";

    gotoxy(ANCHOMAX, ALTOMAX);
    cout << "ESC: Regresar";

   MarcoSimple(67, 9, x, y);

    while(true){

        if(tecla == ESC){
            system("cls");
            GestionMenu();
            break;
        }

        if(kbhit()){
            tecla = getch();

            if(y < 20 && (tecla == FLECHA_ABAJO || tolower(tecla) == 's')){
                EliminarMarcoSimple(67, 9, x, y);
                y += 8;
            }
            if(y > 12 && (tecla == FLECHA_ARRIBA || tolower(tecla) == 'w')){
                EliminarMarcoSimple(67, 9, x, y);
                y -= 8;
            }

            MarcoSimple(67, 9, x, y);

        }
        if(y == 27 && tecla == ENTER){
            system("cls");
            GestionAvanzado();
            break;
        }
        if(y == 19 && tecla == ENTER){
            system("cls");
            GestionIntermedio();
            break;
        }
        if(y == 11 && tecla == ENTER){
            system("cls");
            GestionPrincipiante();
            break;
        }
    }

    gotoxy(1, ALTOMAX);
}

void GestionInstrucciones()
{
    //Imrpime en pantalla el archivo que describe las instrucciones del juego.
    ImprimirTitulo(45,1);
    char Regresar;
    ImprimeArchivo("Instrucciones.txt",1,10);
    Regresar = getch();
    if(Regresar == ESC){
        system("cls");
        GestionMenu();
    }
}

void GestionCreditos()
{
    //imprime en pantalla los créditos del juego.
    ImprimirTitulo(45,1);
    char Regresar;
    ImprimeArchivo("Creditos.txt",1,10);
    Regresar = getch();
    if(Regresar == ESC){
        system("cls");
        GestionMenu();
    }
}
void GestionPrincipiante()
{
    //Genera un juego del nivel principiante.
    int minas = 10, alto = 9, ancho = 9;
    bool Perder = false;

    ImprimirTitulo(45,1);

    //Imprime un tablero en pantalla de dimension principiante.
    ImprimeTablero(ancho, alto, ANCHOMAX/2, ALTOMAX/3);
    EstableceColor(NEGRO,AMARILLO);
    gotoxy(6,ALTOMAX);
    cout << "MINAS: " << minas;
    gotoxy(ANCHOMAX, ALTOMAX);
    cout << "ESC: Regresar";

    //Genera el arreglo que representará el tablero.
    int **Tablero = CreaArregloBi(alto, ancho);
    bool **Destapado =  NULL;

    Destapado = CreaArregloBoolBi(alto, ancho);

    bool **Marca =  NULL;
    Marca = CreaArregloBoolBi(alto, ancho);

    ArregloTablero(ancho, alto, minas, Tablero);
    //Manda los tableros a la gestión de los controles que se encargará de llevar a cabo el juego.
    Controles(ANCHOMAX/2, ALTOMAX/3, ancho, alto, Tablero, Destapado, Marca, minas, Perder);

    DestruyeArregloBi(Tablero);
    DestruyeArregloBoolBi(Destapado);
    DestruyeArregloBoolBi(Marca);
}

void GestionIntermedio()
{
    //Genera un tablero de nivel intermedio.
    int minas = 40, alto = 16, ancho = 16;
    bool Perder = false;

    ImprimirTitulo(45,1);
    ImprimeTablero(ancho, alto, (ANCHOMAX/2)-10, ALTOMAX/4);

    EstableceColor(NEGRO,AMARILLO);
    gotoxy(6,ALTOMAX);
    cout << "MINAS: " << minas;
    gotoxy(ANCHOMAX, ALTOMAX);
    cout << "ESC: Regresar";

    int **Tablero = CreaArregloBi(alto, ancho);
    bool **Destapado =  CreaArregloBoolBi(alto, ancho);

    bool **Marca =  NULL;
    Marca = CreaArregloBoolBi(alto, ancho);

    ArregloTablero(ancho, alto, minas, Tablero);
    //Le manda los parámetros del nivel intermedio a la función que controla el juego.
    Controles((ANCHOMAX/2)-10, ALTOMAX/4, ancho, alto, Tablero, Destapado, Marca, minas, Perder);

    //Libera la memoria.
    DestruyeArregloBi(Tablero);
    DestruyeArregloBoolBi(Destapado);
    DestruyeArregloBoolBi(Marca);
}

void GestionAvanzado()
{
    //Genera juego de nivel experto
    int minas = 99, alto = 24, ancho = 24;
    bool Perder = false;

    ImprimirTitulo(45,1);
    ImprimeTablero(ancho, alto, (ANCHOMAX/2)-15, ALTOMAX/7);

    EstableceColor(NEGRO,AMARILLO);
    gotoxy(6,ALTOMAX);
    cout << "MINAS: " << minas;
    gotoxy(ANCHOMAX, ALTOMAX);
    cout << "ESC: Regresar";

    int **Tablero = CreaArregloBi(alto, ancho);
    bool **Destapado =  NULL;
    Destapado = CreaArregloBoolBi(alto, ancho);

    bool **Marca =  NULL;
    Marca = CreaArregloBoolBi(alto, ancho);

    ArregloTablero(ancho, alto, minas, Tablero);
    //Le manda los parámetros del nivel experto e inicia el juego.
    Controles((ANCHOMAX/2)-15, ALTOMAX/7, ancho, alto, Tablero, Destapado, Marca, minas, Perder);

    //Libera la memoria.
    DestruyeArregloBi(Tablero);
    DestruyeArregloBoolBi(Destapado);
    DestruyeArregloBoolBi(Marca);
}
void GestionPerder()
{
    //Imprime mensaje al usuario que le informa que perdió la partida.
    ImprimirTitulo(45,1);
    gotoxy(75, 20);
    cout << "______            _ _     _                __\n";
    gotoxy(75, 21);
    cout << "| ___ \\          | (_)   | |          _   / /\n";
    gotoxy(75, 22);
    cout << "| |_/ /__ _ __ __| |_ ___| |_ ___    (_) | | \n";
    gotoxy(75, 23);
    cout << "|  __/ _ \\ '__/ _` | / __| __/ _ \\       | | \n";
    gotoxy(75, 24);
    cout << "| | |  __/ | | (_| | \\__ \\ ||  __/    _  | | \n";
    gotoxy(75, 25);
    cout << "\\_|  \\___|_|  \\__,_|_|___/\\__\\___|   (_) | | \n";
    gotoxy(75, 26);
    cout << "                                          \\_\\\n";

}

void GestionGanar()
{
    //Imprime mensaje ganador.
    ImprimirTitulo(45,1);
    gotoxy(75, 20);
    cout << " _____                       _              __  \n";
    gotoxy(75, 21);
    cout << "|  __ \\                     | |          _  \\ \\ \n";
    gotoxy(75, 22);
    cout << "| |  \\/ __ _ _ __   __ _ ___| |_ ___    (_)  | |\n";
    gotoxy(75, 23);
    cout << "| | __ / _` | '_ \\ / _` / __| __/ _ \\        | |\n";
    gotoxy(75, 24);
    cout << "| |_\\ \\ (_| | | | | (_| \\__ \\ ||  __/    _   | |\n";
    gotoxy(75, 25);
    cout << " \\____/\\__,_|_| |_|\\__,_|___/\\__\\___|   (_)  | |\n";
    gotoxy(75, 26);
    cout << "                                            /_/ \n";

}
