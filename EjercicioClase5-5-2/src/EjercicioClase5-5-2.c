/*
 ============================================================================
 Name        : EjercicioClase5-5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id_raza;
	int tamanio;
	float peso;
}eRaza;

typedef struct
{
	int id_mascota;
	int id_duenio;
	char nombreMascota[20];
	eRaza razaMascota;
	char sexoMascota;
	int isEmpty;

}Mascota;

typedef struct
{
	int id_duenio;
	char nombreDuenio[20];
	int edad;
	char sexoDuenio;
	int isEmpty;

}Duenio;

int main(void) {
	setbuf(stdout, NULL);
	return EXIT_SUCCESS;
}
