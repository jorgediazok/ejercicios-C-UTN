/*
 ============================================================================
 Name        : Ejercicio42FuncionesVector.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B,
 cada curso cuenta con 5 alumnos.

 1)Realizar las cargas de las notas
 2)Mostrar el nombre del curso que obtuvo el mayor promedio general
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargar(int curso[5]);
int retornarPromedio(int curso[5]);


int main(void) {
	setbuf(stdout, NULL);

	int cursoA[5];
	int cursoB[5];

	printf("Carga de notas del curso A\n");
	cargar(cursoA);

	printf("Carga de notas del curso B\n");
	cargar(cursoB);

	if(retornarPromedio(cursoA)==retornarPromedio(cursoB))
	{
		printf("Los dos cursos tienen un promedio igual. \n");
	}
	else
	{
		if(retornarPromedio(cursoA) > retornarPromedio(cursoB))
		{
			printf("El curso A tiene mayor promedio que el curso B \n");
		}
		else
		{
			printf("El curso B tiene mayor promedio que el curso A. \n");
		}

	}



	return EXIT_SUCCESS;
}


void cargar(int curso[5])
{

	int i;

	for(i=0; i<5;i++)
	{
		printf("Ingrese nota: \n");
		scanf("%d", &curso[i]);
	}
}

int retornarPromedio(int curso[5])
{
	int i;
	int suma = 0;
	int promedio;

	for(i=0;i<5;i++)
	{
		suma+=curso[i];
	}

	promedio = suma / 5;

	return promedio;
}
