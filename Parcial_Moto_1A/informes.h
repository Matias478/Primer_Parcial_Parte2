#include "fecha.h"
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "moto.h"
#include "trabajo.h"
#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

int Informes(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS);

void MotosXColor(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void MotosXTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void MotosMayorCilindrada(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void ListarMotosPorTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void MotosXColorTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void ColorMasElegido(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC);

void TrabajosMotos(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS);

void TotalTrabajosMotos(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS);

void ListarServiciosXMotosFecha(eMoto motos[],int tamM,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS);



#endif // INFORMES_H_INCLUDED
