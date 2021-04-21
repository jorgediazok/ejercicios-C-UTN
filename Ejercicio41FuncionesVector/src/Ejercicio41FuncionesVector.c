/*
 ============================================================================
 Name        : Ejercicio41FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero. Se deben
 codificar las siguientes funciones:
 1-Carga del vector(int vector[8])
 2-Retornar el valor acumulado de todos los elementos del vector
 3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36
 4-Retornar la cantidad de componentes con valores mayores a 50
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[8]);
int sumar(int vector[8]);
int sumaMayores36(int vector[8]);
int cantidadMayores50(int vector[8]);


int main(void) {
	setbuf(stdout, NULL);

	int vector[8];

	cargar(vector);

	printf("Valor acumulado de todos los elementos: %d \n", sumar(vector));
	printf("Valor acumulado de los elementos del vector mayores a 36: %d \n", sumaMayores36(vector));
	printf("Cantidad de componentes con valores mayores a 50: %d", cantidadMayores50(vector));

	return EXIT_SUCCESS;
}

void cargar(int vector[8])
{
	int i;

	for(i=0; i<8; i++)
	{
		printf("Ingrese el elemento del vector: \n");
		scanf("%d", &vector[i]);
	}

}

int sumar(int vector[8])
{
	int i;
	int suma = 0;

	for(i=0; i<8; i++)
	{
		suma+=vector[i];
	}

	return suma;
}

int sumaMayores36(int vector[8])
{

	int i;
	int sumaMayoresDe36 = 0;

	for(i=0;i<8;i++)
	{
		if(vector[i]>36)
		{
			sumaMayoresDe36+=vector[i];
		}
	}

	return sumaMayoresDe36;
}


int cantidadMayores50(int vector[8])
{
	int i;
	int cantidadMayoresDe50 = 0;

	for(i=0;i<8;i++)
	{
		if(vector[i]>50)
		{
			cantidadMayoresDe50++;
		}
	}

	return cantidadMayoresDe50;
}
