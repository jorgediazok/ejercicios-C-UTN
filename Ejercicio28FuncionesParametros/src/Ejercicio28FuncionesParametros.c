/*
 ============================================================================
 Name        : Ejercicio28FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar una función que reciba como parámetro un caracter. Si llega una "h" mostrar por
 pantalla el mensaje "hombre", si llega una "m" mostrar el mensaje "mujer". Llamar desde la funcion
 main pasando una vez una "h" y otra vez una "m"
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarGenero(char tipo);


int main(void) {
	setbuf(stdout, NULL);

	mostrarGenero('h');
	mostrarGenero('m');

	return EXIT_SUCCESS;
}

void mostrarGenero(char tipo)
{
	if(tipo == 'h')
	{
		printf("Hombre\n");
	}

	if(tipo == 'm')
		{
			printf("Mujer\n");
		}
}
