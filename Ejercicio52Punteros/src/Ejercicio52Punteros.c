/*
 ============================================================================
 Name        : Ejercicio52Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	float z1;
	float z2;
	float *pf;

	pf = &z1;
	*pf = 10.2;

	pf = &z2;
	*pf = 20.90;

	printf("%.2f \n%.2f", z1, z2); //Se imprime




	return EXIT_SUCCESS;
}
