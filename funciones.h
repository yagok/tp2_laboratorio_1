#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

void alta(EPersona lista[], int cant);
int buscarPorDni(EPersona lista[], int dni);
void borrado(EPersona lista[], int cant);
void impresord(EPersona lista[], int cant);
void impriGraf(EPersona lista[], int cant);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[],int cant);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */



#endif // FUNCIONES_H_INCLUDED
