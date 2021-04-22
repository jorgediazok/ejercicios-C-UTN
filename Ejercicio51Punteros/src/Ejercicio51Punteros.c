/*
 ============================================================================
 Name        : Ejercicio51Punteros.c
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

	int f;
	int *pe;
	pe = &f;

	for(*pe=1; *pe <= 10; *pe = *pe+1)
	{
		printf("%d \n", f);  //Se imprime 1 2 3 4 5 6 7 8 9 10
	}

	return EXIT_SUCCESS;
}
