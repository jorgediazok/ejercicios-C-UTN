/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 7-1:Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y
 otra para el apellido). Ninguna de las dos variables se puede modificar.Debemos lograr guardar en una
 tercer variable el apellido y el nombre con el siguiente  formato:Por ejemplo: Si el nombre es juan
 ignacio y el apellido es gOmEz, la salida debería ser:Gomez, Juan Ignacio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 30
#define MAXNOMYAPE 50

int main(void) {
	setbuf(stdout, NULL);

	char nombre[MAX];
	char apellido[MAX];
	char nombreYApellido[MAXNOMYAPE];

	//Ingreso de nombre
	printf("Ingrese su nombre: \n ");
	fflush(stdin);
	gets(nombre);
	strlwr(nombre);
	nombre[0] = toupper(nombre[0]);
	printf("Su nombre es: %s \n", nombre);

	//Ingreso de apellido
	printf("\nIngrese su apellido: \n ");
	fflush(stdin);
	gets(apellido);
	strlwr(apellido);
	apellido[0] = toupper(apellido[0]);
	printf("\nSu apellido es: %s \n", apellido);

	//Ultimo paso
	strcpy(nombreYApellido, apellido);
	strcat(nombreYApellido, ", ");
	strcat(nombreYApellido, nombre);

	printf("\nSu nombre es %s", nombreYApellido);

	return EXIT_SUCCESS;
}
