/*
 ============================================================================
 Name        : EjercicioClase22AbrilEstructuras2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct datosPersonales{
	char nombre[20];
	char apellido[20];
	char calle[20];
	int numero;
};

int main(void) {
	setbuf(stdout, NULL);

	struct datosPersonales agenda;

	printf("Ingrese el Nombre: \n");
	gets(agenda.nombre);
	fflush(stdin);

	printf("Ingrese el Apellido: \n");
	gets(agenda.apellido);
	fflush(stdin);

	printf("Ingrese Calle: \n");
	gets(agenda.calle);
	fflush(stdin);

	printf("Ingrese Numero de Calle: \n");
	scanf("%d", &agenda.numero);

	//Mostrar datos

	printf("\nDatos Personales: \n \n");
	printf("%s \n", agenda.nombre);
	printf("%s \n", agenda.apellido);
	printf("%s \n", agenda.calle);
	printf("%d", agenda.numero);


	return EXIT_SUCCESS;
}
