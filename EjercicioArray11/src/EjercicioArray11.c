/*
 ============================================================================
 Name        : EjercicioArray11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int cursoA[5];
	int cursoB[5];
	int i;
	int suma1=0;
	int suma2=0;
	int promedioA;
	int promedioB;

	printf("Carga de notas del curso A: \n");

	for(i=0;i<5;i++)
	{
		printf("Ingrese nota: \n");
		scanf("%d", &cursoA[i]);
	}

	printf("Carga de notas del curso B: \n");

		for(i=0;i<5;i++)
		{
			printf("Ingrese nota: \n");
			scanf("%d", &cursoB[i]);
		}

   //Suma
		for(i=0;i<5;i++)
		{
			suma1+=cursoA[i];
			suma2+=cursoB[i];
		}

	promedioA=suma1/5;
	promedioB=suma2/5;

	printf("Promedio del curso A: %d  \n", promedioA);
	printf("Promedio del curso B: %d", promedioB);

	return EXIT_SUCCESS;
}
