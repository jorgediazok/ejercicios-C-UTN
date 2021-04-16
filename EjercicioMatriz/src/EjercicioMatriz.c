/*
 ============================================================================
 Name        : EjercicioMatriz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANTIDAD_CLIENTES 4
#define MSG_INGRESONOM "Ingrese un nombre: "
#define MSG_INGRESOAP "Ingrese un apellido: "

int main(void) {
	setbuf(stdout, NULL);

	int i;
	char arrayNombres[CANTIDAD_CLIENTES][20];
	char arrayApellidos[CANTIDAD_CLIENTES][20];
	char auxNombre[20];
	char auxApellido[20];

	//Cargar los nombres

	for(i=0;i<CANTIDAD_CLIENTES;i++)
	{
		getString(MSG_INGRESONOM, auxNombre);

		strcpy(arrayNombres[i], auxNombre);
	}

	printArrayStr(arrayNombres, CANTIDAD_CLIENTES);

	//Cargar los apellidos

	for(i=0;i<CANTIDAD_CLIENTES;i++)
	{
		getString(MSG_INGRESOAP, auxApellido);

		strcpy(arrayApellidos[i], auxApellido);
	}

	//Ordenar 2 arrays





	return EXIT_SUCCESS;
}
