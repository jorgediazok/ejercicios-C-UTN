/*
 ============================================================================
 Name        : EjercicioArray12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargar un vector de 10 elementos y verificar si el mismo está ordenado de menor a mayor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int vec[10];
	int i;
	int orden;

	for(i=0; i<10; i++)
	{
		printf("Ingrese el elemento: ");
		scanf("%d", &vec[i]);
	}

	orden=1;

	for(i=0; i<9; i++)
	{
		if(vec[i+1] < vec[i])
		{
			 orden = 0;
			 break;
		}
	}
	if(orden==1)
	{
		printf("El vector está ordenado de menor a mayor");
	}else
	{
		printf("El vector no está ordenado de menor a mayor.");
	}

	return EXIT_SUCCESS;
}
