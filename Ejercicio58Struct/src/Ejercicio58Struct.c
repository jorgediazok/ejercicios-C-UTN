/*
 ============================================================================
 Name        : Ejercicio58Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pais{
	char nombre[40];
	int cantidadHabitantes;
};

int main(void) {
	setbuf(stdout, NULL);

	struct pais pais1, pais2, pais3;

	printf("Ingrese el nombre del país: \n");
	gets(pais1.nombre);
	printf("Ingrese la cantidad de habitantes: \n");
	scanf("%d", &pais1.cantidadHabitantes);
	fflush(stdin);

	printf("Ingrese el nombre del país: \n");
	gets(pais2.nombre);
	printf("Ingrese la cantidad de habitantes: \n");
	scanf("%d", &pais2.cantidadHabitantes);
	fflush(stdin);

	printf("Ingrese el nombre del país: \n");
	gets(pais3.nombre);
	printf("Ingrese la cantidad de habitantes: \n");
	scanf("%d", &pais3.cantidadHabitantes);

	if(pais1.cantidadHabitantes > pais2.cantidadHabitantes && pais1.cantidadHabitantes > pais3.cantidadHabitantes)
	{
		printf("País con mayor cantidad de habitantes: %s", pais1.nombre);
	}
	else
		if(pais2.cantidadHabitantes > pais3.cantidadHabitantes)
		{
			printf("País con mayor cantidad de habitantes: %s", pais2.nombre);
		}
		else
		{
			printf("País con mayor cantidad de habitantes: %s", pais3.nombre);
		}
	return EXIT_SUCCESS;
}
