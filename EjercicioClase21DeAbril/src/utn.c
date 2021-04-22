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
