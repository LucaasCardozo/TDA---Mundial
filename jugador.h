#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct Jugador;

typedef struct Jugador * JugadorP;

///PRE: Tener creada una variable jugadorP para guardar el retorno de la funci�n.
///PRO: Me devuelve un jugador vac�o.
JugadorP cargarJugadorVacio ();

///PRE: Tener creada una variable jugadorP para guardar el retorno de la funci�n.
///PRO: Me devuelve un jugador con los datos guardados.
JugadorP cargarJugador ();

///PRE: El jugador que vas a mostrar tiene que estar construido.
///PRO: Muestra por pantalla el jugador.
void mostrarJugador (JugadorP j);

void destruirJugador (JugadorP j);

int getNum (JugadorP j);

char* getNombre (JugadorP j);

#endif // JUGADOR_H_INCLUDED
