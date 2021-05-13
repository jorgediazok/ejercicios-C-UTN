/*
 ============================================================================
 Name        : EjercicioDelParcial8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

typedef struct{
	int legajo;
	char nombre;
	int edad;
	float altura;
}eEmpleado;

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int j;

	eEmpleado personal[TAM], aux;

	for(i=0;i<TAM - 1;i++)
	{
		//Hasta aca todo igual
		for(j = i+1; j<TAM;j++)
		{
			if(strcpy(personal[i].nombre, personal[j].nombre)>0)
			{
				aux = personal[i];
				personal[i] = personal[j];
				personal[j] = aux;
			}
		}
	}



	return EXIT_SUCCESS;
}
