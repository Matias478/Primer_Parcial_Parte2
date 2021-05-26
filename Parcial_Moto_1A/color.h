#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;//comienza en 10000
    char nombreColor[20];
}eColor;

/** \brief enlaza el idColor con el nombre color
 *
 * \param id int
 * \param colores[] eColor
 * \param tam int
 * \param desc[] char
 * \return int retorna 0 si hay algun error y 1 si esta todo ok
 *
 */
int CargarDescripcionColor(int id, eColor colores[],int tam, char desc[]);

/** \brief Muestra la lista de todos las colores cargados
 *
 * \param colores[] eColor array de colores
 * \param tam int tamaño del array
 * \return void
 *
 */
void MostrarColores(eColor colores[],int tam);

/** \brief Muestra un color
 *
 * \param  eColor color
 * \return void
 *
 */
void MostrarColor(eColor color);

/** \brief encuentra un color por Id
 *
 * \param colores[] eColor array de colores
 * \param tam int tamaño del array
 * \param id int recibe un id para compararlo
 * \return int retorna la posicion i en el array
 *
 */
int BuscarColor(int id, eColor colores[],int tam);

#endif // COLOR_H_INCLUDED
