/*
 ============================================================================
 Name        : Ejercicio53Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar una funci�n que reciba como par�metros las direcciones de dos variables enteras
 y le cargue a lo apuntado por dichas variables dos enteros.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int *pe1, int *pe2);


int main(void) {
	setbuf(stdout, NULL);

	int valor1;
	int valor2;
	cargar(&valor1, &valor2);
	printf("%d   %d", valor1, valor2);

	return EXIT_SUCCESS;
}

void cargar(int *pe1, int *pe2)
{
	*pe1 = 100;
	*pe2= 200;
}
