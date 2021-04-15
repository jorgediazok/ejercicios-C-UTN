/*
 ============================================================================
 Name        : EjercicioArray9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
 El valor acumulado de todos los elementos del vector
 El valor acumulado de los elementos del vector mayores a 36.
 Cantidad de valores mayores a 50.
  ============================================================================
 */

#define CANTIDAD 8

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int vec[CANTIDAD];
	int i;
	int suma = 0;
	int sumaMayores36 = 0;
	int cantidadMayores50 = 0;

	for(i=0; i<CANTIDAD; i++)
	{
		printf("Ingrese elemento: \n");
		scanf("%d", &vec[i]);
	}

	for(i=0;i<CANTIDAD; i++)
	{
		suma+=vec[i];
	}

	printf("La suma de los 8 elementos es %d \n", suma);

	for(i=0;i<CANTIDAD; i++)
	{
		if(vec[i] > 36)
		{
			sumaMayores36+=vec[i];
		}
	}

	printf("Suma de elementos mayores a 36: %d \n", sumaMayores36);

	for(i=0;i<CANTIDAD;i++)
	{
		if(vec[i] > 50){
		cantidadMayores50++;
		}
	}
	printf("Cantidad de elementos mayores a 50: %d", cantidadMayores50);

	return EXIT_SUCCESS;
}
