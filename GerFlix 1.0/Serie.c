#include <stdio.h>
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie series[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(series[i].estado == 1)
        {
            printf("%d %s %s %d\n",series[i].idSerie, series[i].nombre, series[i].genero, series[i].cantidadTemporadas);
        }
    }
}

int buscarLibreSerie(eSerie series[], int tam)
{
    int index=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(series[i].estado == 0)
        {
            index=i;
            break;
        }
    }

    return index;
}

int cargarSerie(eSerie series[], int tam)
{
    int index;
    index = buscarLibreSerie(series, tam);

    if(index!=-1)
    {
        printf("Ingrese ID: ");
        scanf("%d", &series[index].idSerie);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(series[index].nombre);
        printf("Ingrese genero: ");
        fflush(stdin);
        gets(series[index].genero);
        printf("Ingrese temporadas: ");
        scanf("%d", &series[index].cantidadTemporadas);
        series[index].estado=1;
    }

    return index;
}


int buscarIntSeries(eSerie series[], int tam, int cual)
{
    int indice = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(series[i].idSerie==cual)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int bajaSerie(eSerie series[], int tam)
{
    int numeroSerie;
    int index = -1;

    printf("Ingrese serie a dar de baja: ");
    scanf("%d", &numeroSerie);

    index = buscarIntSeries(series,tam,numeroSerie);

    if(index!=-1)
    {
        series[index].estado = 0;
    }
    return index;
}
