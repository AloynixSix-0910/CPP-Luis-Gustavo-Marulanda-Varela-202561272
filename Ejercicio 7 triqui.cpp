//Ejercicio 7 triqui o 3 en raya


#include <iostream>
#include <iomanip>
#include <string>



using namespace std;
int main(){

    char tablero[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char jugador_actual = 'X';
    int fila, columna;
    bool ganado = false;

    //El bucle principal se repite 9 veces (el máximo de turnos).
    for (int turno = 0; turno < 9; turno++) {

        // Dibujar el tablero en cada turno que pasa
        cout << "   0   1   2" << endl;

        cout << "0 " << tablero[0][0] << "  |  " << tablero[0][1] << "|  " << tablero[0][2] << endl;

        cout << "  ---|---|---" << endl;
        cout << "1 " << tablero[1][0] << "  |  " << tablero[1][1] << "|  " << tablero[1][2] << endl;


        cout << "  ---|---|---"<< endl;

        cout << "2 " << tablero[2][0] << "  |  " << tablero[2][1] << "|  " << tablero[2][2] << endl;





        //Pide la jugada

        cout << "Turno del Jugador\n '" << jugador_actual << "'. Ingresa fila y columna (ej 1 presione enter y luego 2 y presione enter): ";
        cin >> fila >> columna;



        //Se Coloca el simbolo del jugador si la casilla está libre
        if (fila >= 0 &&
            fila < 3 &&
            columna >= 0 &&
            columna < 3 &&
            tablero[fila][columna] == ' ') {
            tablero[fila][columna] = jugador_actual;

            // 5. Reviso si alguien ganó

            // Revisa filas
            if ((tablero[fila][0] == jugador_actual &&
            tablero[fila][1] == jugador_actual &&
            tablero[fila][2] == jugador_actual) ||

            // Reviso columnas
                (tablero[0][columna] == jugador_actual &&
                tablero[1][columna] == jugador_actual &&

                tablero[2][columna] == jugador_actual) ||

            // Reviso diagonal n1
                (tablero[0][0] == jugador_actual &&
                tablero[1][1] == jugador_actual &&
                tablero[2][2] == jugador_actual) ||

            // Revisa diagonal 2
                (tablero[2][0] == jugador_actual &&
                tablero[1][1] == jugador_actual &&
                tablero[0][2] == jugador_actual))
            {
                ganado = true;
                break; // Si alguien gana,se rompe el bucle
            }


            // 6. Cambio el turno al otro jugador(aqui me perdi)
            if (jugador_actual == 'X') {
                jugador_actual = 'O';

            } else {
                jugador_actual = 'X';
            }

        } else {
            cout << "\nCasilla ocupada o inválida. Intenta de nuevo." << endl;
            turno--; // Repite el turno si la jugada estuvo mal
        }
    }

    // 7.resultado final
    cout << "\n---FIN DEL JUEGO ---" << endl;
    if (ganado) {
        cout << "¡El jugador '" << jugador_actual << "' ha ganado!" << endl;
    } else {
        cout << "¡Es un empate!" << endl; //me cae mal ese jugador
    }

    return 0;
}
