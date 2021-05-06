/*
 ============================================================================
 Name        : BibliotecaUtn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int edad;
	int peso;
	int altura;
	char sexo;
	int respuesta;

	respuesta = utn_getNumeroFlotante(&altura, "Altura?\n", "Error. Debe ingresar una altura entre 1.2 y 2.5\n", 1.2, 2.5, 1);


	respuesta = utn_getCaracter(&sexo, "Sexo? m/f\n", "Error. El sexo debe ser m o f.\n", 'f', 'm', 1);

	if(respuesta == 0)
	{
		printf("El sexo es: %c\n", sexo);
	}
	else
	{
		printf("\nERROR\n");
	}


	respuesta =  utn_getNumero(&edad, "Edad?\n", "Error. La edad debe ser entre 1 y 99.\n",1,99,2);

	if(respuesta==0)
	{
		printf("La edad es: %d\n\n", edad);
	}
	else
	{
		printf("\nERROR\n");
	}

	respuesta =  utn_getNumero(&peso, "Peso?\n", "Error. El peso debe ser de 0 a 500.\n",0,500,2);

	if(respuesta==0)
	{
		printf("El peso es: %i\n", peso);
	}
	else
		printf("\nERROR.\n");


	return EXIT_SUCCESS;
}
