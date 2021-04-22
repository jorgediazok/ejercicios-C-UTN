/*
 ============================================================================
 Name        : Ejercicio46Ordenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de menor a mayor.
 BURBUJEO
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SUELDOS_LEN 5

void cargar(int sueldos[SUELDOS_LEN]);
void ordenar(int sueldos[SUELDOS_LEN]);
void imprimir(int sueldos[SUELDOS_LEN]);

int main(void) {
	setbuf(stdout, NULL);

	int sueldos[SUELDOS_LEN];

	cargar(sueldos);
	ordenar(sueldos);
	imprimir(sueldos);

	return EXIT_SUCCESS;
}

void cargar(int sueldos[SUELDOS_LEN])
{
	int i;

	for(i=0; i<SUELDOS_LEN; i++)
	{
		printf("Ingrese el sueldo: \n");
		scanf("%d", &sueldos[i]);
	}
}


void ordenar(int sueldos[SUELDOS_LEN])
{

	for(int i=0;i<SUELDOS_LEN - 1;i++)    //LEN -1
	{
		for(int j=0;j<4 - i;j++)    //LEN - 1 es válido pero es más eficiente el 4 - i
		{
			if(sueldos[j] > sueldos[j+1])
			{
				 int aux = sueldos[j];
				 sueldos[j] = sueldos[j+1];
				 sueldos[j+1] = aux;
			}
		}
	}
}


void imprimir(int sueldos[SUELDOS_LEN])
{
	int i;

	for(i=0;i<SUELDOS_LEN;i++)
	{
		printf("\n%d", sueldos[i]);
	}
}
