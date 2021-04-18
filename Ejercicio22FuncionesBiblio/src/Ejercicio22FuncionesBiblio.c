/*
 ============================================================================
 Name        : Ejercicio22FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ingresar por teclado dos nombres de personas y luego mostrarlos ordenados alfabeticamente
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

	printf("Nombres ordenados alfabéticamente:\n");
	if(strcmp(nombre1, nombre2)<0){
		printf("%s - %s", nombre1, nombre2);
	}else{
		printf("%s - %s", nombre2, nombre1);
	}

	return EXIT_SUCCESS;
}
