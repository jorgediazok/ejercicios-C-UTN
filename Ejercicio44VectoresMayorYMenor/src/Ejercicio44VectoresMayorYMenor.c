/*
 ============================================================================
 Name        : Ejercicio44VectoresMayorYMenor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar un programa que defina en el main un vector de 5 elementos de tipo entero.
 Cargar e imprimir el mayor elemento y su posición.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5]);
void mayor(int vector[5]);



int main(void) {
	setbuf(stdout, NULL);

	int vec[5];
	cargar(vec);
	mayor(vec);

	return EXIT_SUCCESS;
}

void cargar(int vector[5])
{

	int i;

	for(i=0; i<5; i++)
	{
		printf("Ingrese un número: \n");
		scanf("%d", &vector[i]);
	}
}

void mayor(int vector[5])
{
	int may=vector[0];
	int pos=0;
	int i;

	for(i=0; i<5; i++)
	{
		if(vector[i]>may)
		{
			may=vector[i];
			pos=i;
		}
	}
	printf("El mayor elemento del vector es %d\n", may);
	printf("La posición del elemento es %d, \n", pos);
}
