/*
 ============================================================================
 Name        : Ejercicio16CadenaCaracteres.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Confeccionar un programa que permita ingresar una palabra y luego muestre un mensaje
 si empieza con vocal A o a mayuscula o minuscula.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char palabra[50];

	printf("Ingrese una palabra: \n");
	gets(palabra);

	if(palabra[0] == 'A' || palabra[0] == 'a'){
		printf("La palabra comienza con la letra 'A' o 'a' ");
	}else{
		printf("La palabra no comienza con la letra 'A' o 'a'");

	}

	return EXIT_SUCCESS;
}
