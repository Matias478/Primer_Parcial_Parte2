#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void TolowerToupperMarca(char brand[],char* marcas)
{
    char marca[51];//19
    char buffer[128];
    int len;
    printf("Ingrese su %s ",marcas);
    fflush(stdin);
    gets(buffer);
    while(isalpha(strlen(buffer)>51)==1)
    {
        printf("Reingrese su %s ",marcas);
        fflush(stdin);
        gets(buffer);
    }
    strcpy(marca,buffer);
    strlwr(marca);
    len = strlen(marca);
    marca[0]=toupper(marca[0]);
    for(int i=0; i<len; i++)
    {
        if(isspace(marca[i]))
        {
            marca[i+1]=toupper(marca[i+1]);
        }
    }
    strcpy(brand,marca);
}

void ActivarFlag(int* a)
{
    if(*a==0)
    {
        *a= *a+1;
    }
}


