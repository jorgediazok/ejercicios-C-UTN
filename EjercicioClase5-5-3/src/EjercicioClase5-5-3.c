/*
 ============================================================================
 Name        : EjercicioClase5-5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id_localidad;
	char localidad[20];
	char descripcion[20];
	int coditoPostal;
	int isEmpty;
}eLocalidad;

typedef struct
{
	int id_alumno;
	char nombre[20];
	eLocalidad localidad;
	int isEmpty;
}Alumno;

int main(void) {
	setbuf(stdout, NULL);
	return EXIT_SUCCESS;
}
