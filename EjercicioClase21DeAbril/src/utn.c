/*
 * utn.c
 *
 *  Created on: 21 abr. 2021
 *      Author: Jorge
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Para inicializar los arrays

void limpiarArrayEntero(int array[], int lenArray)
{
	int i;
	for(i=0; i<lenArray; i++)
	{
		array[i]=0;
	}
}


void limpiarArrayFloat(float array[], int lenArray)
{
	int i;
	for(i=0; i<lenArray;i++)
	{
		array[i]=0;
	}

}

void limpiarArrayChar(char array[], int lenArray)
{
	int i;
	for(i=0; i<lenArray;i++)
	{
		array[i] =  ' ';
	}
}


void limpiarArrayString(char array[], int lenArray)
{
	int i;

	for(i=0;i<lenArray;i++)
	{
		strcpy(array[i], ' ');
	}
}


//Para cargar los arrays

void cargaArrayEntero(int array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		printf("Ingrese número: \n");
		scanf("%d", &array[i]);
	}
}

void cargaArrayFloat(float array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		printf("Ingrese número: \n");
		scanf("%f", &array[i]);
	}
}

void cargaArrayChar(char array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		printf("Ingrese sexo: m/f \n");
		scanf("%c", &array[i]);
	}
}

void cargaArrayString(char array[][20], int lenArray)
{
	int i;
	for(i=0; i<lenArray;i++)
	{
		printf("Ingrese apellido: \n");
		fflush(stdin);
		scanf("%s", array[i]);
	}
}
