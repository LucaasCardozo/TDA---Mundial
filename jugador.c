#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct Jugador{

    char nombreYApellido[50];
    int numero;
};

JugadorP cargarJugadorVacio (){

    JugadorP j = malloc(sizeof(struct Jugador));

    strcpy(j->nombreYApellido, " LIBRE");

    j->numero = -1;

    return j;

}

JugadorP cargarJugador (){

    JugadorP j = malloc(sizeof(struct Jugador));

    printf("\nPor favor ingrese el nombre y apellido del jugador:\n");
    fflush(stdin);
    gets(j->nombreYApellido);

    printf("\nPor favor ingrese el numero del jugador\n");
    scanf("%d", &(j->numero));

    return j;

}

void mostrarJugador(JugadorP j){

    if (j->numero != -1){
    printf("%s (%d)\n", j->nombreYApellido, j->numero);
    }

}

void destruirJugador (JugadorP j){
    free(j);
}

int getNum(JugadorP j){
    return j->numero;
}

char* getNombre (JugadorP j){
    return j->nombreYApellido;
}
