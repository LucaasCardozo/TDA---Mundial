#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

struct Seleccion;

typedef struct Seleccion * SeleccionP;

///PRE: Tener creada una variable seleccionP para guardar el retorno de la funci�n.
///PRO: Me devuelve una selecci�n con los jugadores vac�os.
SeleccionP cargarSeleccion ();

///PRE: La selecci�n que vas a mostrar tiene que estar constru�da.
///PRO: Muestra por pantalla la selecci�n.
void mostrarSeleccion (SeleccionP s);

void agregarJugador (SeleccionP s);

void eliminarJugador (SeleccionP s, int n);

void ordenarJugadores (SeleccionP s);

void destruirSeleccion (SeleccionP s);

void mostrarBusqueda (SeleccionP s, char nombreABuscar[20]);

#endif // SELECCION_H_INCLUDED
