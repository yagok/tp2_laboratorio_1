#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>


int main()
{
    char seguir='s';
    int opcion=0;
    int cant;
    EPersona lista[50];

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                   alta(lista, cant);
                break;
            case 2:
                   borrado(lista, cant);
                break;
            case 3:
                   impresord(lista, cant);
                break;
            case 4:
                   impriGraf(lista,cant);
                   system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }
        system("cls");
    }

    return 0;
}
