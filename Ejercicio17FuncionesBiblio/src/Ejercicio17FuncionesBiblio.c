/*
 ============================================================================
 Name        : Ejercicio17CadenaCaracteres.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 STRLEN

 Intresar por teclado una palabra. Mostrar luego por pantalla la cantidad de letras que tiene.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char palabra[31];
	printf("Ingrese una palabra: ");
	gets(palabra);

	int cant = strlen(palabra);
	printf("La palabra %s tiene %d letras", palabra, cant);


	return EXIT_SUCCESS;
}
