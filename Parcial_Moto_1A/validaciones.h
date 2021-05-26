#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED


/** \brief comando por parámetro la primera letra del nombre se convierte en mayúsculas y el resto en minúsculas
 *
 * \param brand[] char
 * \param marcas char*
 * \return void
 *
 */
void TolowerToupperMarca(char brand[],char* marcas);

/** \brief Activa y cambia el valor de una bandera
 *
 * \param a int* Puntero a la bandera
 * \return void
 *
 */
void ActivarFlag(int* a);

#endif // VALIDACIONES_H_INCLUDED
