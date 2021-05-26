#include "tipo.h"
#include "color.h"
#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int cilindrada;//Las cilindradas pueden ser: 50, 125, 500, 600, 750
    int isEmpty;
}eMoto;

/** \brief Indicar que todas las posciciones en el array estan vacias
 *
 * \param motos[] eMoto array de la lista de motos
 * \param tam int tamaño del array
 * \return int retorna -1 si hay un error y retorna 0 si esta todo ok
 *
 */
void InicializarMotos(eMoto motos[], int tam);

/** \brief Muestra una moto
 *
 * \param eMoto unaMoto
 * \return void
 *
 */
void MostrarStructMoto(eMoto unaMoto, eTipo tipos[],int tamT,eColor colores[],int tamC);

/** \brief Muestra la lista de todos las motos cargadas
 *
 * \param motos[] eMotos array de motos
 * \param tamM int tamaño del array
 * \param tipos[] eTipo array de la lista de tipos
 * \param tamT int tamanio del array
 * \param colores[] eColores array de la lista de colores
 * \param tamC int tamanio del array
 * \return void
 *
 */
void MostrarMotos(eMoto motos[],int tamM,eTipo tipos[], int tamT,eColor colores[],int tamC);

/** \brief Recibe una estructura que busca el id de una moto y devuelve si dicho id fue encontrado o no
 *
 * \param moto[] eMoto array de la lista de motos
 * \param tam int tamanio del array
 * \return int retorna -1 si hay algun error y sino retorna la variable index en la posicion i
 *
 */
int BuscarLibre(eMoto motos[],int tam);

/** \brief encuentra una moto por Id
 *
 * \param motos[] eMoto array de la lista de motos
 * \param tam int tamaño del array
 * \param id int recibe un id para compararlo
 * \return int retorna la posicion i en el array
 *
 */
int BuscarMoto(eMoto motos[], int tam, int id);

/** \brief Ordena por el idTipo de forma ascendente y cuando hay dos id iguales ordena por id de motos
 *
 * \param motos[] eMoto array de motos
 * \param tam int tamaño del array
 * \return int devuelve 0 si hay algun error y 1 si esta todo ok
 *
 */
int OrdenarMotos(eMoto motos[],int tam);

/** \brief añade en una lista existente de motos los valores recibidos como parámetros en la primera posición vacía
 *
 * \param motos[] eMoto array de la lista de motos
 * \param tamM int tamanio del array
 * \param tipos[] eTipo array de la lista de tipos
 * \param tamT int tamanio del array
 * \param colores[] eColores array de la lista de colores
 * \param tamC int tamanio del array
 * \param pId int*
 * \return int retorna 0 si hay algun error o no hay espacio y 1 si esta todo bien
 *
 */
int AltaMotos(eMoto motos[], int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,int* pId);

/** \brief Modifica los datos de una moto por id
 *
 * \param motos[] eMoto array de motos
 * \param tamM int tamaño del array
 * \param tipos[] eTipo array de la lista de tipos
 * \param tamT int tamanio del array
 * \param colores[] eColores array de la lista de colores
 * \param tamC int tamanio del array
 * \return int retorna 0 si hay algun error o no hay espacio y 1 si esta todo bien
 *
 */
int ModificarMotos(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

/** \brief remueve una moto por id (y coloca el isEmpty en 1)
 *
 * \param motos[] eMoto array de Motos
 * \param tamM int tamaño del array
 * \param tipos[] eTipo array de la lista de tipos
 * \param tamT int tamanio del array
 * \param colores[] eColores array de la lista de colores
 * \param tamC int tamanio del array
 * \return int retorna 0 si hay algun error o no hay espacio y 1 si esta todo bien
 *
 */
int BajaMotos(eMoto motos[],int tamM, eTipo tipos[],int tamT,eColor colores[],int tamC);


/** \brief  enlaza el id de idMoto con el nombre de la marca en si
 *
 * \param id int  idMoto de la estructura trabajos
  * \param motos[] eMoto array de Motos
 * \param tamM int tamaño del array
 * \param marca[] char
 * \return int retorna 0 si hay algun error y 1 si esta todo ok
 *
 */
int CargarMarcaMoto(int id, eMoto motos[],int tam, char marca[]);

#endif // MOTO_H_INCLUDED
