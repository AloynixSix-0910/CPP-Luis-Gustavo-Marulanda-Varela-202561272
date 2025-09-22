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
    char jugador = 'X';
    int fila, columna;
    bool win = false;

    //El bucle principal se repite 9 veces (el máximo de turnos).
    for (int turno = 0; turno < 9; turno++) {

        cout << "   0   1   2" << endl;

        cout << "0 " << tablero[0][0] << "  |  " << tablero[0][1] << "|  " << tablero[0][2] << endl;

        cout << "  ---|---|---" << endl;
        cout << "1 " << tablero[1][0] << "  |  " << tablero[1][1] << "|  " << tablero[1][2] << endl;


        cout << "  ---|---|---"<< endl;

        cout << "2 " << tablero[2][0] << "  |  " << tablero[2][1] << "|  " << tablero[2][2] << endl;


        cout << "Turno del Jugador\n '" << jugador << "'. Ingresa fila y columna (ej 1 presione enter y luego 2 y presione enter): ";
        cin >> fila >> columna;



        //Se Coloca el simbolo del jugador si la casilla está libre
        if (fila >= 0 &&
            fila < 3 &&
            columna >= 0 &&
            columna < 3 &&
            tablero[fila][columna] == ' ') {
            tablero[fila][columna] = jugador;


            // Revisa filas
            if ((tablero[fila][0] == jugador &&
            tablero[fila][1] == jugador &&
            tablero[fila][2] == jugador) ||

            // Reviso columnas
                (tablero[0][columna] == jugador &&
                tablero[1][columna] == jugador &&

                tablero[2][columna] == jugador) ||

            // Reviso diagonal 1
                (tablero[0][0] == jugador &&
                tablero[1][1] == jugador &&
                tablero[2][2] == jugador) ||

            // Revisa diagonal 2
                (tablero[2][0] == jugador &&
                tablero[1][1] == jugador &&
                tablero[0][2] == jugador))
            {
                win = true;
                break; //
            }


            if (jugador == 'X') {
                jugador= 'O';

            } else {
                jugador = 'X';
            }

        } else {
            cout << "\nCasilla ocupada o inválida. Intenta de nuevo." << endl;
            turno--; // Repite el turno si la jugada estuvo mal
        }
    }

    // 7.resultado final
    cout << "\n---FIN DEL JUEGO ---" << endl;
    if (win) {
        cout << "¡El jugador '" << jugador<< "' ha ganado!" << endl;
    } else {
        cout << "¡Es un empate!" << endl;
    }

    return 0;
}
