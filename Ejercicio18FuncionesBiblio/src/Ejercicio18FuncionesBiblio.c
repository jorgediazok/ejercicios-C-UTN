/*
 ============================================================================
 Name        : Ejercicio18FuncionesBiblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar dos nombres por teclado. Mostrar un mensaje si son iguales y sino mostrar
 el que es mayor alfabéticamente.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre1[31];
	char nombre2[31];
	printf("Ingrese un nombre: \n");
	gets(nombre1);
	printf("Ingrese otro nombre: \n");
	gets(nombre2);

	if(strcmp(nombre1, nombre2) == 0)
	{
		printf("Los dos nombres son exactamente iguales");
	}else{
		if(strcmp(nombre1, nombre2)> 0){
			printf("%s es mayor alfabéticamente", nombre1);
		}else{
			printf("%s es mayor alfabéticamente", nombre2);
		}
	}

	return EXIT_SUCCESS;
}
