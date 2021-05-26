#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

typedef struct
{
  int dia;
  int mes;
  int anio;
}eFecha;

int ComparaFechas(eFecha f1,eFecha f2);

#endif // FECHA_H_INCLUDED
