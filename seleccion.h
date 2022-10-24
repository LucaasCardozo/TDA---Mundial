#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

struct Seleccion;

typedef struct Seleccion * SeleccionP;

///PRE: Tener creada una variable seleccionP para guardar el retorno de la función.
///PRO: Me devuelve una selección con los jugadores vacíos.
SeleccionP cargarSeleccion ();

///PRE: La selección que vas a mostrar tiene que estar construída.
///PRO: Muestra por pantalla la selección.
void mostrarSeleccion (SeleccionP s);

void agregarJugador (SeleccionP s);

void eliminarJugador (SeleccionP s, int n);

void ordenarJugadores (SeleccionP s);

void destruirSeleccion (SeleccionP s);

void mostrarBusqueda (SeleccionP s, char nombreABuscar[20]);

#endif // SELECCION_H_INCLUDED
