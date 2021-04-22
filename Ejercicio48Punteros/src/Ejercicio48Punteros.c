/*
 ============================================================================
 Name        : Ejercicio48Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir dos variables enteras y almacenar valores por asignación. Definir una variable puntero a
 entero y guardar sucesivamente las direcciones de dichas dos variables y acceder a sus valores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int valor1=10;
	int valor2=20;

	int *pe;
	pe= &valor1;

	printf("Lo apuntado por pe es: %d \n", *pe);
	printf("La dirección que almacena pe es: %p \n", pe);

	pe=&valor2;
	printf("Lo apuntado por pe es: %d \n", *pe);
	printf("La dirección que almacena pe es: %p \n", pe);



	return EXIT_SUCCESS;
}
