#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "informes.h"

void MotosXColor(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int idColor;
    int index;

    system("cls");
    printf("********* Informe de motos segun color *********\n");
    MostrarColores(colores,tamC);
    printf("\nIngresar el id del color: \n");
    scanf("%d", &idColor);
    index=BuscarColor(idColor,colores,tamC);

    while(index==-1)
    {
        printf("\nIngreso un id invalido .Reingresar el id del color: \n");
        scanf("%d", &idColor);
        index=BuscarColor(idColor,colores,tamC);
    }
    printf("*****************Lista de Motos segun color*******************\n");
    printf("ID \t     Marca \t  Tipo  \t   Color \t  Cilindrada \n");
    for(int i=0;i<tamM;i++)
    {
        if(motos[i].isEmpty==0 && motos[i].idColor==idColor)
        {
            MostrarStructMoto(motos[i],tipos,tamT,colores,tamC);
        }
    }
}

void MotosXTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int idTipos;
    int index;

    system("cls");
    printf("********* Informe de motos segun tipo *********\n");
    MostrarTipos(tipos,tamT);
    printf("\nIngresar el id del tipo: \n");
    scanf("%d", &idTipos);
    index=BuscarTipo(idTipos,tipos,tamT);

    while(index==-1)
    {
        printf("\nIngreso un id invalido .Reingresar el id del tipo: \n");
        scanf("%d", &idTipos);
        index=BuscarTipo(idTipos,tipos,tamT);
    }
    printf("*****************Lista de Motos segun tipo*******************\n");
    printf("ID \t     Marca \t  Tipo  \t   Color \t  Cilindrada \n");
    for(int i=0;i<tamM;i++)
    {
        if(motos[i].isEmpty==0 && motos[i].idTipo==idTipos)
        {
            MostrarStructMoto(motos[i],tipos,tamT,colores,tamC);
        }
    }
}

void MotosMayorCilindrada(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)// tratar de mejorarlo
{
    int mayor;
    int mayorCilindrada=0;
    int totales[tamT];
    int flag=0;
    system("cls");
    printf("       Motos de mayor cilindradas      \n");

    for(int j=0;j<tamT;j++)
    {
        for(int i=0;i<tamM;i++)
        {
            if(motos[i].isEmpty==0 && motos[i].idTipo==tipos[j].id)
            {
                mayorCilindrada=motos[i].cilindrada;
            }
        }
        totales[j]=mayorCilindrada;
    }

    for(int i=0;i<tamT;i++)
    {
        if(flag==0 || totales[i]>mayor)
        {
            mayor=totales[i];
            flag=1;
        }
    }
    for(int i=0;i<tamT;i++)
    {
        if(mayor==totales[i])
        {
            printf("\n La moto con mayor cilindrada es:  %s   \n",tipos[i].descripcion);
        }
    }

}

void ListarMotosPorTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int flag;
    system("cls");
    printf("    Listado de motos por tipo    \n");
    for(int i=0;i<tamT;i++)
    {
        printf("\nTipo: %s\n",tipos[i].descripcion);
        flag=1;
        for(int j=0;j<tamM;j++)
        {
            if(motos[j].isEmpty==0 && motos[j].idTipo==tipos[i].id)
            {
                MostrarStructMoto(motos[j],tipos,tamT,colores,tamC);
                flag=0;
            }
        }
        if(flag)//sino entra al segundo for la bandera sigue valiendo 1
        {
            printf("No hay empleados\n");
        }
        printf("\n-----------------------------------------------------------------------------\n");
    }
}

void MotosXColorTipo(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
    int index;
    int idColor;
    int idTipos;
    int contador=0;

    system("cls");
    printf("********* Informe de motos segun color y tipo *********\n");
    MostrarColores(colores,tamC);
    printf("\nIngresar el id del color: \n");
    scanf("%d", &idColor);
    index=BuscarColor(idColor,colores,tamC);
     while(index==-1)
    {
        printf("\nIngreso un id invalido .Reingresar el id del color: \n");
        scanf("%d", &idColor);
        index=BuscarColor(idColor,colores,tamC);
    }

    MostrarTipos(tipos,tamT);
    printf("\nIngresar el id del tipo: \n");
    scanf("%d", &idTipos);
    index=BuscarTipo(idTipos,tipos,tamT);
    while(index==-1)
    {
        printf("\nIngreso un id invalido .Reingresar el id del tipo: \n");
        scanf("%d", &idTipos);
        index=BuscarTipo(idTipos,tipos,tamT);
    }
   printf("*****************Lista de Motos segun tipo y color*******************\n");
   printf("ID \t     Marca \t  Tipo  \t   Color \t  Cilindrada \n");
    for(int i=0;i<tamM;i++)
    {
        if(motos[i].isEmpty==0 && motos[i].idTipo==idTipos && motos[i].idColor==idColor)
        {
            MostrarStructMoto(motos[i],tipos,tamT,colores,tamC);
            contador++;
        }
    }

    printf("\nLa cantidad de motos de dicho tipo y color es: %d\n",contador);

}

void ColorMasElegido(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC)
{
   int contadores[tamC];
   int idColor;
   int mayor;

    for(int c=0;c<tamC;c++)
    {
        contadores[c]=0;
        for(int i=0;i<tamM;i++)
        {
            idColor=colores[c].id;
            if(motos[i].isEmpty==0 && motos[i].idColor==idColor)
            {
                        contadores[c]++;
            }
        }
    }
      for(int c=0;c<tamC;c++)
        {
            if(c==0 || contadores[c]>mayor)
            {
                mayor=contadores[c];
            }
        }
        printf("\nColor/es mas elegidos:  ");
        for(int c=0;c<tamC;c++)
        {
            if(contadores[c]==mayor)
            {
                printf("%s\n",colores[c].nombreColor);
            }
        }

}

void TrabajosMotos(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS)
{
    int id;
    int flag=1;
    printf("\nInforme de trabajos que se realizan a una moto\n");
    MostrarMotos(motos,tamM,tipos,tamT,colores,tamC);
    printf("\nIngrese ID de una moto:");
    scanf("%d",&id);
    while(BuscarMoto(motos,tamM,id)==-1)
    {
        printf("No existe una moto con ese ID.Reingrse ID:\n");
        scanf("%d",&id);
    }
    for(int i=0;i<tamTr;i++)
    {
        if(trabajos[i].isEmpty==0 && trabajos[i].idMoto==id)
        {
            //MostrarTrabajos(trabajos[i],tamTr,servicios,tamS,motos,tamM);
            MostrarTrabajo(trabajos[i],servicios,tamS,motos,tamM);
            flag=0;
        }
    }
    if(flag)
    {
        printf("\nLa moto de ID %d no registra trabajo", id);
    }
    printf("\n\n");
}

void TotalTrabajosMotos(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS)
{
    int id;
    int flag=1;
    float total=0;
    printf("\nInforme de trabajos que se realizan a una moto\n");
    MostrarMotos(motos,tamM,tipos,tamT,colores,tamC);
    printf("\nIngrese ID de una moto:");
    scanf("%d",&id);
    while(BuscarMoto(motos,tamM,id)==-1)
    {
        printf("No existe una moto con ese ID.Reingrse ID:\n");
        scanf("%d",&id);
    }
    for(int i=0;i<tamTr;i++)
    {
        if(trabajos[i].isEmpty==0 && trabajos[i].idMoto==id)
        {
            for(int s=0;s<tamS;s++)
            {
                if(servicios[s].id==trabajos[i].idServicio)
                {
                    total+=servicios[s].precio;
                }
            }
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("\nLa moto de ID %d no registra trabajo", id);
    }else
    {
        printf("Total trabajos de moto ID %d: $%.2f",id,total);
    }
    printf("\n\n");

}

void ListarServiciosXMotosFecha(eMoto motos[],int tamM,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS)
{
    int id;
    int flag=1;
    printf("\nInforme de servicios que se realizan a una moto \n");
    MostrarServicios(servicios,tamS);
    printf("\nIngrese ID de un servicio:");
    scanf("%d",&id);
    while(BuscarServicio(servicios,tamS,id)==-1)
    {
        printf("No existe un servicio con ese ID.Reingrse ID:\n");
        scanf("%d",&id);
    }

    for(int i=0;i<tamTr;i++)
    {
        if(trabajos[i].isEmpty==0 && trabajos[i].idServicio==id)
        {
            //MostrarTrabajos(trabajos[i],tamTr,servicios,tamS,motos,tamM);
            MostrarTrabajo(trabajos[i],servicios,tamS,motos,tamM);
            flag=0;
        }
    }
     if(flag==1)
    {
        printf("\nLa moto de ID %d no registra trabajo", id);
    }

}

void ListarServiciosXFecha(eTrabajo trabajos[], int tamTr, eServicio servicios[], int tamS,eMoto motos[],int tamM)
{
    eFecha fecha;
    int cant;

    printf("\nServicio segun fecha\n");

    printf("Ingrese fecha dd/mm/aaaa:");
    cant=scanf("%d/%d/%d", &fecha.dia,&fecha.mes,&fecha.anio);
    while(cant!=3)
    {
        printf("Fecha incorrecta. Reingrese fecha dd/mm/aaaa:");
        cant=scanf("%d/%d/%d", &fecha.dia,&fecha.mes,&fecha.anio);
    }

    for(int s=0;s<tamS;s++)
    {
        for(int t=0;t<tamTr;t++)
        {
            if(trabajos[t].isEmpty==0 && ComparaFechas(fecha,trabajos[t].fechaTrabajo)&& servicios[s].id ==trabajos[t].idServicio)
            {
                MostrarTrabajo(trabajos[t],servicios,tamS,motos,tamM);
                //MostrarServicio(servicios[s]);
            }
        }
    }
}


int Informes(eMoto motos[],int tamM,eTipo tipos[],int tamT,eColor colores[],int tamC,eTrabajo trabajos[],int tamTr,eServicio servicios[],int tamS)
{
    int todoOk=0;
    int opcion;
    if(motos!=NULL && tamM>0 && tipos!=NULL && tamT>0 && colores!=NULL && tamC>0 && trabajos!=NULL && tamTr>0 && servicios!=NULL && tamS>0)
    {
        do{
            system("cls");
            printf("\n************Informes************\n");
            printf("\n1. Mostrar lista de motos segun color");
            printf("\n2. Mostrar lista de motos segun tipo");
            printf("\n3. Tipo de moto con mayor cilindrada");
            printf("\n4. Listar motos separadas por tipo ");
            printf("\n5. Cantidad de motos por tipo y color ");
            printf("\n6. Color/es mas elegidos por el cliente  ");
            printf("\n7. Mostrar trabajos de una moto  ");
            printf("\n8. Trabajos de una moto ");
            printf("\n9. Total de trabajos de una moto ");
            printf("\n10. Listar motos segun servicio ");
            printf("\n11. Listar servicios segun una fecha ");
            printf("\n12. Salir de Informes\n");
            printf("\nIngrese su opcion:");
            scanf("%d", &opcion);
            switch(opcion)
            {
                case 1:
                    MotosXColor(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
                case 2:
                    MotosXTipo(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
                case 3:
                    MotosMayorCilindrada(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
                 case 4:
                    ListarMotosPorTipo(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
               case 5:
                    MotosXColorTipo(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
                case 6:
                    ColorMasElegido(motos,tamM,tipos,tamT,colores,tamC);
                    system("pause");
                    break;
                case 7:
                    TrabajosMotos(motos,tamM,tipos,tamT,colores,tamC,trabajos,tamTr,servicios,tamS);
                    system("pause");
                    break;
                case 8:
                    TrabajosMotos(motos,tamM,tipos,tamT,colores,tamC,trabajos,tamTr,servicios,tamS);
                    system("pause");
                    break;
                case 9:
                    TotalTrabajosMotos(motos,tamM,tipos,tamT,colores,tamC,trabajos,tamTr,servicios,tamS);
                    system("pause");
                    break;
                case 10:
                    ListarServiciosXMotosFecha(motos,tamM,trabajos,tamTr,servicios,tamS);
                    system("pause");
                    break;
                case 11:
                    ListarServiciosXFecha(trabajos,tamTr,servicios,tamS,motos,tamM);
                    system("pause");
                    break;
                case 12:
                    printf("\nSaliendo de Informes\n");
                    break;
            }
        }while(opcion!=12);
        todoOk=1;
    }
    return todoOk;
}

