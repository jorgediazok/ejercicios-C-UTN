/*
 ============================================================================
 Name        : Ejercicio32FuncionesRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar una función que le enviemos como parámerto el valor del lado de un
 cuadrado y retorne su superficie
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int retornarSuperficie(int lado);

int main(void) {
	setbuf(stdout, NULL);

	int valor;
	int sup;

	printf("Ingrese el valor del lado del cudrado: \n");
	scanf("%d", &valor);

	sup = retornarSuperficie(valor);
	printf("La superficie es %d", sup);

	return EXIT_SUCCESS;
}

int retornarSuperficie(int lado)
{
 int superficie = lado*lado;

 return superficie;
}
