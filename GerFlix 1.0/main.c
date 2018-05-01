#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);


    int opcion;
    int index;
    do
    {
        printf("1. ALTAS SERIES\n2. ALTAS USUARIOS\n3. MODIFICAR SERIE\n4. MODIFICAR USUARIO\n5. MOSTRAR\n6. BAJAS SERIES\n7. BAJAS USUARIOS\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarSerie(listaDeSeries, TAMSERIE);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Serie ingresada\n");
            }
            break;
        case 2:

        index=cargarUsuario(listaDeUsuarios, TAMUSUARIO);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Usuario ingresado\n");
            }
        break;

        case 3:
            //index=modificarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("Legajo no encontrado\n");
            }
            else
            {
                printf("Alumno modificado\n");
            }
            break;

        case 4:
            //index=bajaAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("Legajo no encontrado\n");
            }
            else
            {
                printf("Alumno dado de baja\n");
            }
            break;

        case 5:
            mostrarListaSeries(listaDeSeries, TAMSERIE);
            printf("\n");
            mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
            printf("\n");
            mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
            printf("\n");
            mostrarSerieConSusUsuarios(listaDeSeries, TAMSERIE, listaDeUsuarios, TAMUSUARIO);
            break;
        case 6:
            index = bajaSerie(listaDeSeries, TAMSERIE);
            if(index == -1)
            {
                printf("Serie no encontrada\n");
            }
            else
            {
                printf("Serie dada de baja\n");
            }
            break;

        case 7:
            index = bajaUsuario(listaDeUsuarios, TAMUSUARIO);
            if(index == -1)
            {
                printf("Usuario no encontrado\n");
            }
            else
            {
                printf("Usuario dado de baja\n");
            }
            break;

        }

    }
    while(opcion!=9);



    return 0;
}
