/*
 ============================================================================
 Name        : EjerciioDelParcial3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct{
	int legajo;
	char nombre;
	int edad;
	float altura;
}eEmpleado;

int imprimirUnEmpleado(eEmpleado unEmpleado);

int main(void) {
	setbuf(stdout, NULL);

	int i, retorno;

	eEmpleado personal[TAM] = { { 1000, 'B', 23, 1.60}, {1001, 'A', 23, 1.60}, {1002, 'C', 23, 1.60}};

	for(i=0;i<TAM;i++)
	{
		retorno = imprimirUnEmpleado(personal[i]);
	}

	return 0;
}

int imprimirUnEmpleado(eEmpleado unEmpleado)
{
	int ret = 0;
	printf("\n%d   %c   %d   %2.f", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.edad, unEmpleado.altura);
	return ret;
}
