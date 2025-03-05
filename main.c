#include <stdio.h>
#include "nodo.h"

int main(){
Nodo* a = CrearNodo();
Nodo* b = CrearNodo();
Nodo* f = CrearNodo();
AsignarDato(a, 10);
AsignarDato(b, 12);
printf("Nodo a: %d", a -> dato);
if (BorrarNodo(a)) printf("\nSe borro el nodo\n");
else printf("No se borro el nodo\n");
printf("Dato en nodo b: %d\n", ObtenerDato(b));
printf("Referencia de f: %p\n", ObtenerRef(f));
AsignarRef(f, b);
printf("La referencia de f ahora es b\nDireccion b: %p\nContenido b: %d\n", ObtenerRef(f), ObtenerDato(ObtenerRef(f)));
}