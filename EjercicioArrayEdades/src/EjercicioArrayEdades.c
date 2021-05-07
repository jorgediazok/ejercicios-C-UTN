/*
 ============================================================================
 Name        : EjercicioArrayEdades.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int edades[EDADESSIZE];
	int i;

	//Recorro para cargar en forma secuencial

	for(i=0; i<EDADESSIZE; i++)
	{
		if(utn_getNumero(&edad, "Ingrese Edad: \n", "Esta edad no va.\n", 1, 120, 3) == 0)
		{
		edades[i] = edad;
		}
		else
		{
		printf("Sonaste, no tenés idea lo que es una edad.\n");
		}
	}

	//Recorro para imprimir

	for(i=0; i<EDADESSIZE; i++)
	{
		printf("%d ", edades[i]);
	}

	return EXIT_SUCCESS;
}
