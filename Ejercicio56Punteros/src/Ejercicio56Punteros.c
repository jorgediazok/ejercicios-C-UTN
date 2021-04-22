/*
 ============================================================================
 Name        : Ejercicio56Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor
 y el menor. Implementar 2 funciones:
 1) Carga del vector
 2) Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de
 dos parámetros de tipo puntero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANO 5

void cargar(int vec[TAMANO]);
void mayorMenor(int vec[TAMANO], int *pMayor, int *pMenor);


int main(void) {
	setbuf(stdout, NULL);

	int vec[TAMANO];
	cargar(vec);

	int may;
	int men;
	mayorMenor(vec, &may, &men);
	printf("Mayor elemento del vector: %d \n", may);
	printf("Menor elemento del vector: %d \n", men);



	return EXIT_SUCCESS;
}



void cargar(int vec[TAMANO])
{
	int i;

	for(i=0;i<TAMANO;i++)
	{
		printf("Ingrese elemento: \n");
		scanf("%d", &vec[i]);
	}
}

void mayorMenor(int vec[TAMANO], int *pMayor, int *pMenor)
{
	int i;
	*pMayor = vec[0]; //En principio el mayor está en el primer elemento creado
	*pMenor = vec[0]; //En principio el menor también está en el primer elemento del vector

	for(i=0; i<TAMANO; i++)
	{
		if(vec[i] > *pMayor)
		{
			*pMayor = vec[i];
		}
		else
		{
			if(vec[i] < *pMenor)
			{
				*pMenor = vec[i];
			}
		}
	}
}
