/*
 ============================================================================
 Name        : EjercicioEnClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);

	char texto[] = "Nona Mama";

//	printf("\nEl texto es : %s", texto);
//
//	strcpy(texto, "JorgeDV");
//
//	printf("\nEl texto es : %s", texto);


	//Cuenta un caracter de más

	printf("Texto: %s Tamanio: %d \n", texto, sizeof(texto)); //Da 10 porque al final el array agrega siempre un \0 y lo cuenta el sizeof
	printf("Longitud de la cadena = %d \n", strlen(texto)); //Da 9  la longitud de cadena, el strlen solamente cuenta el contenido

	return EXIT_SUCCESS;
}
