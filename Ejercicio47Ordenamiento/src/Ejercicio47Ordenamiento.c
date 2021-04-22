/*
 ============================================================================
 Name        : Ejercicio47Ordenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla,
 luego ordenar de menor a mayor e imprimir nuevamente.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5]);
void imprimir(int vector[5]);
void ordenarMenorMayor(int vector[5]);
void ordenarMayorMenor(int vector[5]);


		int main(void) {
		setbuf(stdout, NULL);

		int vector[5];
		cargar(vector);
		ordenarMenorMayor(vector);
		printf("Ordenado de menor a mayor\n");
		imprimir(vector);
		ordenarMayorMenor(vector);
		printf("Ordenado de mayor a menor\n");
		imprimir(vector);



		return EXIT_SUCCESS;
		}

void cargar(int vector[5])
{
	int i;

	for(i=0;i < 5;i++)
	{
		printf("Ingrese el elemento: \n");
		scanf("%d", &vector[i]);
	}
}

void ordenarMenorMayor(int vector[5])
{
	for(int i=0; i < 4 ;i++)
	{
		for(int j=0; j < 4-i; j++)
		{
			if(vector[j] > vector[j+1])
			{
				int aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}

void imprimir(int vector[5])
{
	int i;

	for(i=0; i < 5; i++)
	{
		printf("%d - ", vector[i]);
	}

	printf("\n");
}


void ordenarMayorMenor(int vector[5])
{
	for(int i=0; i < 4 ;i++)
		{
			for(int j=0; j < 4-i; j++)
			{
				if(vector[j] < vector[j+1])
				{
					int aux = vector[j];
					vector[j] = vector[j+1];
					vector[j+1] = aux;
				}
			}
		}
}
