#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* CrearNodo(){
    Nodo* nuevo=(Nodo*)malloc(sizeof(Nodo));
    nuevo -> sig = NULL;
    nuevo -> dato = 0;
    return nuevo; 
}
bool BorrarNodo(Nodo *n){
    if(n != NULL){
        free(n);
        return true;
        }
        return false;
}
void AsignarDato(Nodo *n, DATO d){
    if(n != NULL){
        n -> dato = d;
    }
}
DATO ObtenerDato(Nodo *n){
    if(n == NULL){
        printf("No hay datos\n");
        return -1;
    }
    return n->dato;
}
void AsignarRef(Nodo *n, Nodo* e){
    if (n != NULL){
        n -> sig = e;
    }
}
Nodo* ObtenerRef(Nodo *n){
    if(n != NULL){
        return n -> sig;
    } else {
        return NULL; 
    }
}
