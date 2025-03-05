#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;
struct _Nodo{
   DATO dato;
   Nodo* sig;
};

Nodo *CrearNodo();
bool BorrarNodo(Nodo*);
void AsignarDato(Nodo*, DATO);
DATO ObtenerDato(Nodo*);
void AsignarRef(Nodo*, Nodo*);
Nodo* ObtenerRef(Nodo*);

#endif