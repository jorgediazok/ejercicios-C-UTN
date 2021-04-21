/*
 ============================================================================
 Name        : Ejercicio37FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Definir 3 vectores de tipo entero. Realizar la carga de los dos primeros por teclado. Definir
 una única función que realice la carga de un vector y llamar a dicha función dos veces pasando
 el primer y segundo vector definido. Plantear otra función que reciba tres vectores y proceda
 a sumar el elemento a elementos los dos primeros vectores y se carguen en el tercer vector. Imprimir
 los tres vectores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int vec[5]);
void generarVector(int vector1[5], int vector2[5], int vectorSuma[5]);
void imprimir(int vec[5]);



int main(void) {
	setbuf(stdout, NULL);

	int vector1[5];
	int vector2[5];
	int vectorSuma[5];
	cargar(vector1);
	cargar(vector2);

	generarVector(vector1, vector2, vectorSuma);

	imprimir(vector1);
	imprimir(vector2);
	imprimir(vectorSuma);

	return EXIT_SUCCESS;
}

void cargar(int vec[5])
{
	printf("Carga de un vector: \n \n");
	for(int i=0; i<5; i++)
	{
		printf("Cargar elemento: \n");
		scanf("%d", &vec[i]);
	}
}

void generarVector(int vector1[5], int vector2[5], int vectorSuma[5])
{
	for(int i=0; i<5; i++)
	{
		vectorSuma[i] = vector1[i] + vector2[i];
	}
}


void imprimir(int vec[5])
{
	printf("Impresión del vector: \n");

	for(int i=0; i<5; i++)
	{
		printf("%d - ", vec[i]);
	}
	printf("\n");
}
