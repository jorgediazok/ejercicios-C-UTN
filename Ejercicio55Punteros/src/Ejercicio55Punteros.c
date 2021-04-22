/*
 ============================================================================
 Name        : Ejercicio55Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Implementar una función que intercambie el contenido de dos variables enteras, utilizar punteros
 para solucionarlo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *pe1, int *pe2);


int main(void) {
	setbuf(stdout, NULL);

	int valor1 = 10;
	int valor2 = 20;

	printf("%d - %d \n", valor1, valor2);
	intercambiar(&valor1, &valor2);
	printf("%d - %d \n", valor1, valor2);

	return EXIT_SUCCESS;
}

void intercambiar(int *pe1, int *pe2)
{
	int aux = *pe1;
	*pe1 = *pe2;  //Cambio por lo que está en p2
	*pe2 = aux;  //Parecido al burbujeo
}
