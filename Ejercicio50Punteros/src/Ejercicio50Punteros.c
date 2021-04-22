/*
 ============================================================================
 Name        : Ejercicio50Punteros.c
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

	char c1= 'A';
	char c2= 'B';
	char *pc;

	pc = &c1;
	printf("%c \n", c1);  //Se imprime A

	*pc = 'a';
	printf("%c \n", c1); // Se imprime a


	c1 = 'z';
	printf("%c \n", *pc); //Se imprime z

	pc = &c2;
	printf("%c \n", *pc); //Se imprime B


	return EXIT_SUCCESS;
}
