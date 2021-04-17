/*
 ============================================================================
 Name        : Ejercicio19FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 STRCPY cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres.
 Almacenar en un tercer vector de caracteres el nombre que tenga más caracteres. Luego imprimir dicho vector.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre1[31];
	char nombre2[31];
	char nombreMasLargo[31];

	printf("Ingrese un nombre: \n");
	gets(nombre1);

	printf("Ingrese otro nombre: \n");
	gets(nombre2);

	//Ver cual tiene más caracteres

	if(strlen(nombre1) > strlen(nombre2)){
		strcpy(nombreMasLargo, nombre1); //digo que el mas largo es nombre 1 y lo guardo en nombre mas largo
		printf("El nombre más largo es: %s", nombre1);
	}else{
		strcpy(nombreMasLargo, nombre2);
		printf("El nombre más largo es: %s", nombre2); //digo que el mas largo es nombre 2 y lo guardo en nombre mas largo
	}




	return EXIT_SUCCESS;
}
