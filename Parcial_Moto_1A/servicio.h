#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int id;//(comienza en 20000)
    char descripcion[25];
    float precio;
    int isEmpty;
}eServicio;

/** \brief Muestra la lista de todos las servicios cargados
 *
 * \param servicios[] eServicio array de servicios
 * \param tam int tamaño del array
 * \return void
 *
 */
void MostrarServicios(eServicio servicios[],int tam);

/** \brief Muestra un servicio
 *
 * \param  eServicio servicios
 * \return void
 *
 */
void MostrarServicio(eServicio servicios);

/** \brief
 *
 * \param id int
 * \param servicios[] eServicio
 * \param tam int
 * \return int
 *
 */
int ValidarIdServicio(int id, eServicio servicios[],int tam);

/** \brief enlaza el idservicio con la descripcion del mismo
 *
 * \param id int
 * \param servicios[] eServicio
 * \param tam int
 * \param desc[] char
 * \return int retorna 0 si hay algun error y 1 si eta todo ok
 *
 */
int CargarDescripcionServicios(int id, eServicio servicios[],int tam, char desc[]);

/** \brief encuentra un servicio por Id
 *
 * \param servicios[] eServicio array de servicios
 * \param tam int tamaño del array
 * \param id int recibe un id para compararlo
 * \return int retorna la posicion i en el array
 *
 */
int BuscarServicio(eServicio servicios[], int tam, int id);


#endif // SERVICIO_H_INCLUDED
