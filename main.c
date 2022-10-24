#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
#include "seleccion.h"

int main()
{

    SeleccionP s1 = cargarSeleccion();

    agregarJugador(s1);
    agregarJugador(s1);
    agregarJugador(s1);

    mostrarSeleccion(s1);

    //ordenarJugadores(s1);

    //mostrarSeleccion(s1);

    mostrarBusqueda(s1, "Lucas");

    destruirSeleccion(s1);

    return 0;
}
