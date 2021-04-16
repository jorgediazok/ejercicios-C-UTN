/*
 ============================================================================
 Name        : Ejercicio15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el operaor
 ingresa solo un caracter en blanco entre palabras. Imprimir por pantalla la cantidad
 de palabras que tiene la oración.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int palabras;
	char oracion[201];
	printf("Ingrese una oración: ");
	gets(oracion);

	int i=0;
	int espaciosEnBlanco = 0;

	while(oracion[i] != '\0')
	{
		if(oracion[i] == ' ')
		{
			espaciosEnBlanco++;
		}

		i++;
	}

	palabras = espaciosEnBlanco + 1;
	printf("La cantidad de palabras es %d", palabras);

	return EXIT_SUCCESS;
}
