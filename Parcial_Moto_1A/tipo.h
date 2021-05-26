#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED


typedef struct
{
    int id;//comienza en 1000
    char descripcion[20];
}eTipo;


/** \brief enlaza el idTipo con la descripcion del tipo
 *
 * \param id int idTipo de la estructura moto
 * \param tipos[] eTipos array de tipos
 * \param tam int tamaño del array
 * \param desc[] char
 * \return int retorna 0 si hay algun error y 1 si esta todo OK
 *
 */
int CargarDescripcionTipo(int id, eTipo tipos[],int tam, char desc[]);

/** \brief Muestra la lista de todos las tipos cargados
 *
 * \param tipos[] eTipos array de tipos
 * \param tam int tamaño del array
 * \return void
 *
 */
void MostrarTipos(eTipo tipos[],int tam);

/** \brief Muestra un tipo
 *
 * \param eTipo tipo
 * \return void
 *
 */
void MostrarTipo(eTipo tipo);

/** \brief encuentra un tipo por Id
 *
 * \param tipos[] eTipos array de tipos
 * \param tam int tamaño del array
 * \param id int recibe un id para compararlo
 * \return int retorna la posicion i en el array
 *
 */
int BuscarTipo(int id, eTipo tipos[],int tam);

#endif // TIPO_H_INCLUDED
