#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dataBank.h"

char marca[6][20]={
            "Yamaha",
            "Honda",
            "Kawasaki",
            "BMW",
            "Motomel",
            "Hardley",
            };

int idColores[6]={10002,10003,10004,10003,10000,10001};

int idTipo[6]={1002,1003,1002,1003,1000,1001};

int cilindrada[6]={600,750,500,50,125,600};

int HardcodearMoto(eMoto motos[],int tam, int cant,int* pId)
{
    int cantidad=0;
    if(motos!=NULL && tam >0 && cant >=0 && cant <= tam && pId!=NULL)
    {
        for(int i=0;i<cant;i++)
        {
            motos[i].id= *pId;
            (*pId)++;
            strcpy(motos[i].marca, marca[i]);
            motos[i].idColor=idColores[i];
            motos[i].idTipo=idTipo[i];
            motos[i].cilindrada=cilindrada[i];
            motos[i].isEmpty=0;
            cantidad++;
        }
    }
    return cantidad;
}
//                                         Trabajos !!!!!

int idServicios[6]={20000,20002,20003,20001,20000,20003};

int idMoto[6]={2003,2004,2000,2001,2002,2005};

eFecha fecha[12]={
    {1,1,2021},
    {1,1,2021},
    {1,1,2021},
    {1,1,2021},
    {1,1,2021},
    {1,1,2021},
    {2,1,2021},
    {2,1,2021},
    {2,1,2021},
    {2,1,2021},
    {2,1,2021},
    {2,1,2021}};


int HardcodearTrabajos(eTrabajo trabajos[],int tam, int cant,int* pIdTrabajo)
{
    int cantidad=0;
    if(trabajos!=NULL && tam >0 && cant >=0 && cant <= tam && pIdTrabajo!=NULL)
    {
        for(int i=0;i<cant;i++)
        {
            trabajos[i].id= *pIdTrabajo;
            (*pIdTrabajo)++;
            trabajos[i].idServicio=idServicios[i];
            trabajos[i].idMoto=idMoto[i];
            trabajos[i].fechaTrabajo=fecha[i];
            trabajos[i].isEmpty=0;
            cantidad++;
        }
    }
    return cantidad;
}

