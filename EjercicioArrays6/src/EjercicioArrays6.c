/*
 ============================================================================
 Name        : EjercicioArrays6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SUELNUM 5

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int sueldos[SUELNUM];

	for(i=0; i<SUELNUM; i++)
	{
		printf("Ingrese el valor del sueldo: ");
		scanf("%d", &sueldos[i]);
	}

	printf("Listado de sueldos\n");

	//Impresión
	for(i=0; i<SUELNUM; i++)
	{
		printf("%d \n", sueldos[i]);
	}

	return EXIT_SUCCESS;
}
