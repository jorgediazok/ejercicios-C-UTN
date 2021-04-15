/*
 ============================================================================
 Name        : EjercicioArray10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos
 Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo
 tamaño. Sumar componente a componente.
 ============================================================================
 */

#define TAMANO 4

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int vec1[TAMANO];
	int vec2[TAMANO];
	int vecSuma[TAMANO];

	printf("Carga del primer vector: \n");
	for(i=0;i<TAMANO;i++)
	{
		printf("Ingrese elemento: ");
		scanf("%d", &vec1[i]);
	}

	printf("Carga del segundo vector: \n");
		for(i=0;i<TAMANO;i++)
		{
			printf("Ingrese elemento: ");
			scanf("%d", &vec2[i]);
		}

	//Nuevo vector

	for(i=0;i<TAMANO;i++)
	{
		vecSuma[i] = vec1[i] + vec2[i];
	}

	printf("Vector resultante \n:");


	for(i=0;i<TAMANO;i++)
	{
	printf("%d - ", vecSuma[i]);
	}



	return EXIT_SUCCESS;
}
