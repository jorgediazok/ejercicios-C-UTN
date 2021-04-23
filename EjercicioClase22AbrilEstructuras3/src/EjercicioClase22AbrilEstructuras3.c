/*
 ============================================================================
 Name        : EjercicioClase22AbrilEstructuras3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargando una struct de varios arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosPersonales{
	char nombre[20];
	char apellido[20];
	char calle[20];
	int numero;
};

int main(void) {
	setbuf(stdout, NULL);

	struct datosPersonales vecAgenda[3];
	int i;

	for(i=0;i<3;i++)
	{
		printf("Ingrese nombre: \n");
		gets(vecAgenda[i].nombre);

		printf("Ingrese apellido: \n");
		gets(vecAgenda[i].apellido);

		printf("Ingrese calle: \n");
		gets(vecAgenda[i].calle);

		printf("Ingrese número de calle: \n");
		scanf("%d", &vecAgenda[i].numero);

		fflush(stdin);
	}

	//Mostrar elementos de la estructura

	for(i=0; i<3; i++)
	{
		printf("\nNombre: %s \n", vecAgenda[i].nombre);
		printf("Apellido: %s \n", vecAgenda[i].apellido);
		printf("Calle: %s \n", vecAgenda[i].calle);
		printf("Numero: %d \n", vecAgenda[i].numero);
	}


	return EXIT_SUCCESS;
}
