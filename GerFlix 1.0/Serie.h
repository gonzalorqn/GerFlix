
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);
int buscarLibreSerie(eSerie[], int);
int cargarSerie(eSerie[], int);
int buscarIntSeries(eSerie[], int, int);
int bajaSerie(eSerie[], int);
