/*
 ============================================================================
 Name        : EjercicioArrays1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 EJERCICIO: Hacer una función que calcule el promedio de los valores del array
 que recibe y me devuelva el promedio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


#define EDADESSIZE 5

float promediarArrayInt(int arrayInt[], int len);


int main(void) {

		setbuf(stdout, NULL);
		int edades[EDADESSIZE];
		int edad;
		int i;
		float promedioEdad;

		//recorro para cargar en forma secuencial
		for(i =0; i<EDADESSIZE; i++)
		{
		if(utn_getNumero(&edad, "Ingrese edad:", "Edad no válida \n", 1,120,3)==0)
		{
			//en edades escribo edad en la posición i
			edades[i] = edad;
		}
		else
		{
			printf("Sonaste, no tenés idea lo que es una edad.\n");
		}

		}

		//recorro para imprimir
//		for(i =0; i<EDADESSIZE; i++)
//		{
//		printf("%d ", edades[i]);
//		}

		promedioEdad = promediarArrayInt(edades, EDADESSIZE);

		printf("promedio de edades: %f \n", promedioEdad);


		return EXIT_SUCCESS;
}

float promediarArrayInt(int arrayInt[], int len)
{
	int i;
	float resultado;
	int acc = 0;

	for(i=0; i<len; i++)
	{
		acc += arrayInt[i];
	}

	resultado = ((float)acc) / len;

	return resultado;
}


