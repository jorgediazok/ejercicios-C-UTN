/*
 ============================================================================
 Name        : Ejercicio27FuncionesParametros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado.
 La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
 En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20, de uno en uno.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void calcularSuperficie(int lado);
void calcularPerimetro(int lado);


int main(void) {
	setbuf(stdout, NULL);

	int i;
	for(i=10;i<20;i++)
	{
		calcularSuperficie(i);
	}

	for(i=10;i<20;i++)
		{
			calcularPerimetro(i);
		}




	return EXIT_SUCCESS;
}

void calcularSuperficie(int lado)
{
	int superficie = lado*lado;
	printf("La superficie de un cuadrado de %d lados es %d \n", lado, superficie);
}

void calcularPerimetro(int lado)
{
	int perimetro = lado * 4;
	printf("El perímetro de un cuadrado %d lados es %d \n", lado, perimetro);
}
