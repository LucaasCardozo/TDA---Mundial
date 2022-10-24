#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#include "seleccion.h"
#define TAMJ 5

struct Seleccion{

    char nombre[30];
    int posc;
    JugadorP plantel[TAMJ];

};

SeleccionP cargarSeleccion(){

    SeleccionP s = malloc(sizeof(struct Seleccion));

    printf("\nPor favor ingresar el nombre de la seleccion:\n");
    fflush(stdin);
    gets(s->nombre);

    printf("\nPor favor ingresar la posicion de la seleccion:\n");
    scanf("%d", &(s->posc));

    for (int i=0; i<TAMJ; i++){
        (s->plantel)[i] = cargarJugadorVacio();
   }

    return s;

}

void mostrarSeleccion (SeleccionP s){

    printf("\n---------- SELECCION ----------\n");
    printf("Posc: %d -----> %s\n", s->posc, s->nombre);

    printf("\n\n--- JUGADORES ---\n");
    for (int i=0; i<TAMJ; i++){
        mostrarJugador(s->plantel[i]);
    }

}

int busquedaNum (SeleccionP s, int loQBusco){

    int posc = -1;

    for (int i =0; i<TAMJ; i++){
        if (getNum(s->plantel[i]) == loQBusco){
            posc = i;
            i = TAMJ+1;
        }
    }

    return posc;
}

void agregarJugador (SeleccionP s){

    int poscVacia = busquedaNum(s, -1);

    if (poscVacia != -1){
        s->plantel[poscVacia] = cargarJugador();
    }

}

void eliminarJugador (SeleccionP s, int n){

    int poscABorrar = busquedaNum(s, n);

    if (poscABorrar != -1){
        s->plantel[poscABorrar] = cargarJugadorVacio();
    }
}

void ordenarJugadores (SeleccionP s){

    JugadorP aux;

    for (int i=0; i<TAMJ; i++){

        for (int j=0; j<TAMJ-1; j++){

            if (getNum(s->plantel[j])>getNum(s->plantel[j+1])){

                aux = s->plantel[j];
                s->plantel[j] = s->plantel[j+1];
                s->plantel[j+1] = aux;

            }

        }
    }

}

void destruirSeleccion (SeleccionP s){

    for (int i=0; i<TAMJ; i++){
        destruirJugador(s->plantel[i]);
    }

    free(s);

}

int busquedaNombre (SeleccionP s, char lQBusco[20]){

    int posc = -1;

    for (int i=0; i<TAMJ; i++){

        int comparacion = strcmp((getNombre(s->plantel[i])), lQBusco);

        if (comparacion == 0){
             posc = i;
             i = TAMJ+1;
        }

    }

    return posc;

}

void mostrarBusqueda(SeleccionP s, char nombreABuscar[20]){

    int p = busquedaNombre(s, nombreABuscar);

    if (p != -1){
    printf("\nPosc --> %d\n", p+1);
    }
    else{
        printf("\nEL NOMBRE INGRESADO NO EXISTE\n");
    }

}
