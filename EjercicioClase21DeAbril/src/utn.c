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
		strcpy(array[i], " ");
	}
}


//Para cargar los arrays

int cargaArrayEntero(int array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		printf("Ingrese número: \n");
		scanf("%d", &array[i]);
	}
	return 0;
}

int cargaArrayFloat(float array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		printf("Ingrese número: \n");
		scanf("%f", &array[i]);
	}
	return 0;
}

int cargaArrayChar(char array[], int lenArray)
{
	int i;
	for(i=0;i<lenArray;i++)
	{
		fflush(stdin);
		printf("Ingrese sexo: m/f \n");
		scanf("%c", &array[i]);
	}
	return 0;
}

int cargaArrayString(char array[][20], int lenArray)
{
	int i;
	for(i=0; i<lenArray;i++)
	{
		printf("Ingrese palabra/s: \n");
		fflush(stdin);
		scanf("%s", array[i]);
	}
	return 0;
}
