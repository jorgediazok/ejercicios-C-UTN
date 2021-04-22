/*
 ============================================================================
 Name        : Ejercicio54Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Elaborar una funci�n que se le pase la direcci�n de una variable entera e incremente en 1
 lo apuntado por dicha variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void incrementar(int *pe);


int main(void) {
	setbuf(stdout, NULL);

	int valor = 0;
	int z = 10;

	printf("%d \n", valor);
	incrementar(&valor);
	printf("%d \n", valor); //Ahora vale 1
	incrementar(&valor);
	printf("%d \n", valor); //Ahora vale 2
	incrementar(&z);
	printf("%d \n", z); //Devuelve 11



	return EXIT_SUCCESS;
}

void incrementar(int *pe)
{
	*pe = *pe +1;
}
