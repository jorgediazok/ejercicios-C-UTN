/*
 ============================================================================
 Name        : Ejercicio49Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir dos variables enteras y no inicializarlas. Definir una variable puntero a entero,
 hacer que apunte sucesivamente a los dos variables enteras definidas previamente y cargue
 sus contenidos. Imprimir las dos variables enteras.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int x1;
	int x2;
	int *pe;

	pe = &x1; //Guarda la dirección de la variable x1 , no puedo hacer pe = 100 porque estamos trabajando con punteros
	*pe = 100; //Ahora en la dirección de variable x1 le guardo el 100

	pe = &x2; //Ahora pe apunta a la dirección de la variable x2;
	*pe = 200; //Y le pongo el valor 200


	printf("Primer variable entera: %d \n", x1);
	printf("Segunda variable entera: %d", x2);




	return EXIT_SUCCESS;
}
