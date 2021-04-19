/*
 ============================================================================
 Name        : Ejercicio31FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar
 un mensaje si es una vocal o no es una vocal. Debe funcionar tanto con mayúsculas como minúsculas.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void esVocal(char letra);


int main(void) {
	setbuf(stdout, NULL);

	char c;
	for(c='a'; c<='z'; c++)
	{
		esVocal(c);
	}

	return EXIT_SUCCESS;
}

void esVocal(char letra)
{
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
	{
		printf("El caracter %c es una vocal. \n", letra);
	}
	else
	{
		printf("El caracter %c NO es una vocal. \n", letra);
	}
}
