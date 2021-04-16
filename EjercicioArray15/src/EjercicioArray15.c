/*
 ============================================================================
 Name        : EjercicioArray15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad
 de caracteres que tiene dicha palabra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char palabra[40];
	printf("Ingrese una palabra: \n");
	gets(palabra);
	int x = 0;

	while(palabra[x] != '\0')
	{
		x++;
	}

	printf("La palabra %s tiene %d caracteres", palabra, x);

	return EXIT_SUCCESS;
}
