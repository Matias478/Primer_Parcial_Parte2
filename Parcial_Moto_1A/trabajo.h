#include "fecha.h"
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "moto.h"
#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int id;
    int idMoto;
    int idServicio;
    eFecha fechaTrabajo;
    int isEmpty;
}eTrabajo;

/** \brief Indicar que todas las posciciones en el array estan vacias
 *
 * \param trabajos[] eTrabajo array de la lista de trabajos
 * \param tam int tamaño del array
 * \return int retorna -1 si hay un error y retorna 0 si esta todo ok
 *
 */
void InicializarTrabajos(eTrabajo trabajos[], int tam);

/** \brief Recibe una estructura que busca el id de un trabajo y devuelve si dicho id fue encontrado o no
 *
 * \param trabajos[] eTrabajos array de la lista de trabajos
 * \param tam int tamaño del array
 * \return int retorna -1 si hay algun error y sino retorna la variable index en la posicion i
 *
 */
int BuscarLibreTrabajo(eTrabajo trabajos[],int tam);

/** \brief añade en una lista existente de motos los valores recibidos como parámetros en la primera posición vacía
 *
 * \param trabajos[] eTrabajo array de la lista de trabajos
 * \param tamTr int tamanio del arra
 * \param motos[] eMoto array de la lista de motos
 * \param tamM int tamanio del array
 * \param tipos[] eTipo array de la lista de tipos
 * \param tamT int tamanio del array
 * \param colores[] eColores array de la lista de colores
 * \param tamC int tamanio del array
 * \param servicios[] eServicio array de la lista de servicios
 * \param tamS int tamanio del array
 * \param pId int*
 * \return int retorna 0 si hay algun error o no hay espacio y 1 si esta todo bien
 *
 */
int AltaTrabajo(eTrabajo trabajos[],int tamTr,eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eServicio servicios[],int tamS,int* pId);


/** \brief Muestra un trabajo
 *
 * \param eTrabajo unTrabajo
 * \param servicios[] eServicio array de la lista de servicios
 * \param tamS int tamanio del array
 * \param motos[] eMoto array de la lista de motos
 * \param tamM int tamanio del array
 * \return void
 *
 */
void MostrarTrabajo(eTrabajo unTrabajo,eServicio servicios[],int tamS,eMoto motos[],int tamM);


/** \brief Muestra la lista de todos las motos cargadas
 *
 * \param trabajos[] eTrabajo array de la lista de trabajos
 * \param tamTr int tamanio del arra
 * \param motos[] eMotos array de motos
 * \param tamM int tamaño del array
 * \param servicios[] eServicio array de la lista de servicios
 * \param tamS int tamanio del array
 * \return void
 *
 */
void MostrarTrabajos(eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS,eMoto motos[],int tamM);//,eTipo tipos[],int tamT,eColor colores[],int tamC);


#endif // TRABAJO_H_INCLUDED
