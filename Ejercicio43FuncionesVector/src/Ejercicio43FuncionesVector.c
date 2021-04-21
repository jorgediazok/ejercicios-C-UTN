/*
 ============================================================================
 Name        : Ejercicio43FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado
 de menor a mayor. Hacer las dos actividades en funciones distintas.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vec[10]);
void estaOrdenado(int vec[10]);


int main(void) {
	setbuf(stdout, NULL);

	int vector[10];
	cargar(vector);
	estaOrdenado(vector);

	return EXIT_SUCCESS;
}

void cargar(int vec[10])
{
	int i;

	for(i=0;i<10;i++)
	{
		printf("Ingrese el elemento: \n");
		scanf("%d", &vec[i]);
	}
}

void estaOrdenado(int vec[10])
{
	int ordenado=1;
	int i;

	for(i=0;i<10;i++)
	{
		if(vec[i+1] < vec[i])
		{
			ordenado=0;
			break;
		}
	}

	if(ordenado==1)
	{
		printf("Los elementos del vector están ordenados de menor a mayor");
	}
	else
	{
		printf("Los elementos del vector no están ordenados de menor a mayor");
	}
}
