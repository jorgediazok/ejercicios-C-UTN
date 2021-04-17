/*
 ============================================================================
 Name        : Ejercicio20FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 STRCAT: cargar por teclado en dos variables de tipo string el nombre y apellido de una persona. Definir un tercer string
 y guardar la concatenación del nombre y apellido.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre[31];
	char apellido[31];
	char nombreYApellido[62];

	printf("Ingrese un nombre: \n");
	gets(nombre);

	printf("Ingrese un apellido: \n");
	gets(apellido);

	strcpy(nombreYApellido, nombre);
	strcat(nombreYApellido, " "); //Le concatenamos el apellido y dejamos un espacio blanco en el medio
	strcat(nombreYApellido, apellido);

	printf("El nombre y apellido completo es: %s", nombreYApellido);


	return EXIT_SUCCESS;
}
