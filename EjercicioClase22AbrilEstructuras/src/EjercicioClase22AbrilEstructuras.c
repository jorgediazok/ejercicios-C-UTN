/*
 ============================================================================
 Name        : EjercicioClase22AbrilEstructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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

	struct datosPersonales agenda;

	agenda.numero = 750;
	strcpy(agenda.nombre, "Jorge");
	strcpy(agenda.apellido, "DV");
	strcpy(agenda.calle, "Avenida Siempreviva");

	printf("El nombre es: %s \n", agenda.nombre);
	printf("El apellido es: %s ", agenda.apellido);

	return EXIT_SUCCESS;
}
