
#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);
void mostrarSerieConSusUsuarios(eSerie[], int, eUsuario[], int);
int buscarLibreUsuario(eUsuario[], int);
int cargarUsuario(eUsuario[], int);
int buscarIntUsuarios(eUsuario[], int, int);
int bajaUsuario(eUsuario[], int);
