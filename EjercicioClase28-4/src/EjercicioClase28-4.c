/*
 ============================================================================
 Name        : EjercicioClase28-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void ordenarSueldos(int edades[], float sueldos[], int tamanio);

int main(void) {
	setbuf(stdout, NULL);


	return EXIT_SUCCESS;
}

void ordenarSueldos(int edades[], float sueldos[], int tamanio)
{
	int i;
	int j;
	int auxSueldo = 0;
	int auxEdades = 0;


	for(i=0; i<tamanio; i++)
	{
		for(j=i+1; j<tamanio -1; j++)
		{
			if(sueldos[i] > sueldos[j])
			{
				auxSueldo = sueldos[i];
				sueldos[i] = sueldos[j];
				sueldos[j] = auxSueldo;

			}else
			{
				if(sueldos[i] == sueldos[j] && edades[i] > edades[j])
				{
					auxEdades = edades[i];
					edades[i] = edades[j];
					edades[j] = auxEdades;
				}
			}
		}
	}
}
