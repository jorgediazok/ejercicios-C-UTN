/*
 * utn.c
 *
 *  Created on: 8 abr. 2021
 *      Author: Jorge
 */


#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos){
	int retorno = -1; //si sale todo mal
	int bufferInt; //Intercambio con el usuario

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
	while(reintentos >= 0)
	{
		printf("%s", mensaje);
		scanf("%d", &bufferInt);
		if(bufferInt >= minimo && bufferInt <= maximo){
		 *pResultado = bufferInt;
		  retorno = 0;  //Si sale todo bien, guardo el bufferInt en el espacio de memoria *pResultado
		  break;
	}
	else
	{
			printf("%s", mensajeError);
			reintentos--;
	}
	}
}
	return retorno;
}
