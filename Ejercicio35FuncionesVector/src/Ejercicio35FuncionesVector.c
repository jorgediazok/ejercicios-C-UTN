/*
 ============================================================================
 Name        : Ejercicio35FuncionesRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar un programa que defina dos funciones, una que permita cargar un vector
 de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
 En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vec[5]);
void imprimir(int vec[5]);


int main(void) {
	setbuf(stdout, NULL);
	int vector[5];
	cargar(vector);
	imprimir(vector);

	return EXIT_SUCCESS;
}

void cargar(int vec[5])
{
	for(int i=0; i<5;i++)
	{
		printf("Ingrese un elemento: \n");
		scanf("%d", &vec[i] );
	}
}

void imprimir(int vec[5])
{
	printf("Contenido completo del vector: \n");

	for(int i=0; i<5; i++)
	{
		printf("%d ", vec[i]);
	}
}
