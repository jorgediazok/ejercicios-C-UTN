/*
 ============================================================================
 Name        : EjercicioArray14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la
 cantidad de vocales que tienen dicha palabra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char palabra[30];
	printf("Ingrese una palabra en minusculas: \n");
	gets(palabra);

	int contador = 0;
	int x = 0;

	while(palabra[x] != '\0')
	{
		if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u')
		{
			contador++;
		}

		x++;
	}

	printf("La cantidad de vocales que tiene la palabra es: %d", contador);


	return EXIT_SUCCESS;
}
