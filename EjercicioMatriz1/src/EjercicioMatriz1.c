/*
 ============================================================================
 Name        : EjercicioMatriz1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void cargar(int mat[3][5]);
void imprimir(int mat[3][5]);


int main(void) {
	setbuf(stdout, NULL);

	int mat[3][5];
	cargar(mat);
	imprimir(mat);

	return EXIT_SUCCESS;
}


void cargar(int mat[3][5])
{
	int i, j;

	for(i=0;i < 3; i++)
	{
		for (j=0; j < 5; j++)
		{
			printf("Ingrese componente: ");
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimir(int mat[3][5])
{
	int i, j;

	for(i=0; i< 3; i++)
	{
		for(j=0; j < 5; j++)
		{
			printf("%d", mat[i][j]);
		}

		printf("\n");
	}
}
