/*
 ============================================================================
 Name        : Ejercicio23FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene
 más caracteres y luego el que tiene menos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre1[31];
	char nombre2[32];

	printf("Ingrese un nombre: \n");
	gets(nombre1);

	printf("Ingrese otro nombre: \n");
	gets(nombre2);

	if(strlen(nombre1)>strlen(nombre2))
	{
		printf("%s\n%s", nombre1,nombre2);
	}else{
		printf("%s\n%s", nombre2,nombre1);
	}

	return EXIT_SUCCESS;
}
