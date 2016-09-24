#include "funciones.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void alta(EPersona lista[], int cant)
{
    int i;
    for(i=0; i< cant; i++)
    {
        if(lista[i].estado != 1)
        {
           printf("Ingrese nombre: ");
           fflush(stdin);
           gets(lista[i].nombre);

           printf("Ingrese edad: ");
           scanf("%d", &lista[i].edad);

           printf("Ingrese dni: ");
           scanf("%d", &lista[i].dni);
           lista[i].estado=1;
           break;
        }
    }


}

int buscarPorDni(EPersona lista[], int cant)
{
    int auxi;
    int i;

    printf("Ingrese documento a buscar: ");
    scanf("%d", &auxi);
    for(i=0; i<cant; i++)
    {
        if(auxi== lista[i].dni)
        {
         printf("%d\t %s\t %d\t\n", lista[i].dni , lista[i].nombre, lista[i].edad);
         return i;
        }
    }

}
void borrado(EPersona lista[], int cant)
{
    buscarPorDni(lista, 20);

    int pos;
    int flag=0;
    char opcion;

    printf("Desea dar de baja a esta persona? [s/n]: ");
    fflush(stdin);
    scanf("%c", &opcion);

    switch(opcion)
    {
      case 's':
             lista[pos].estado=0;
             printf("Se ha dado de baja");
             break;
      case 'n':
             printf("Operacion rechazada\n");
             break;
      default:
             printf("Error, valor invalido");
             break;
    }
     if(flag==0)
     {
         printf("El DNI es invalido");
     }
}

int obtenerEspacioLibre(EPersona lista[],int cant)
{
  int i;
   for(i=0; i<cant; i++)
   {
       if(lista[i].estado==0)
       {
           printf("Espacio libre en la posicion \n");
       }

   }
   return i;
}

void impresord(EPersona lista[], int cant)
{
    int i,j;
    EPersona aux;

    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(stricmp(lista[i].nombre, lista[j].nombre)>0)
            {
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
     printf("Nombre\t  Dni\t\t Edad\n");
     for(i=0 ; i<cant ; i++)
     {
         if(lista[i].estado==1)
         {
            printf("%s\t %d\t\t %d\n",lista[i].nombre,lista[i].dni,lista[i].edad);
         }
     }
}

void impriGraf(EPersona lista[], int cant)
{
    int i, j, h18=0, de19a35=0, mayorDe35=0, flag=0, mayor;

    for(j=0; j<20; j++)
    {
        if(lista[j].estado==1)
        {
            if(lista[j].edad <=18)
            {
                h18++;
            }
            else
            {
                if(lista[j].edad >=19 && lista[j].edad<=35)
                {
                    de19a35++;
                }
                else
                {
                    mayorDe35++;
                }
            }
        }
    }

    if(h18 >= de19a35 && h18 >= mayorDe35)
        {
        mayor = h18;
        }
    else
        {
        if(de19a35 >= h18 && de19a35 >= mayorDe35)
         {
            mayor = de19a35;
         }
        else
          {
        mayor = mayorDe35;
          }
        }

    for(i=mayor; i>0; i--)
        {
        if(i<10)
           {
            printf("%02d|",i);
           }
        else
          {
            printf("%02d|",i);
          }

        if(i<= h18)
            {
            printf("*");
            }
        if(i<= de19a35)
             {
            flag=1;
            printf("\t*");
             }
        if(i<= mayorDe35)
              {
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

              }
        printf("\n");
        }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d \n", h18, de19a35, mayorDe35);

}


