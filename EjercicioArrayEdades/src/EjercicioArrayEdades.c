/*
 ============================================================================
 Name        : EjercicioArrayEdades.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

void imprimirArrayPorReferencia(int listaDeEdades[], int len);
float promediarArrayInt(int array[], int len);



int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int edades[EDADESSIZE];
	float resultado;
	int i;

	//Recorro para cargar en forma secuencial

	for(i=0; i<EDADESSIZE; i++)
	{
		if(utn_getNumero(&edad, "Ingrese Edad: \n", "Esta edad no va.\n", 1, 120, 3) == 0)
		{
		edades[i] = edad;
		}
		else
		{
		printf("Sonaste, no tenés idea lo que es una edad.\n");
		system("pause");
		}
	}


	imprimirArrayPorReferencia(edades, EDADESSIZE);
	resultado = promediarArrayInt(edades, EDADESSIZE);

	printf("El promedio de las edades es: %.2f", resultado);


	return EXIT_SUCCESS;
}

//EL NOMBRE DEL ARRAY ES LA DIRECCIÖN DE MEMORIA DONDE COMIENZA EL ARRAY (CLAVE)

//Recibir array por referencia: No se hace una copia, es el mismo. Es como el de punteros, pero como ponés corchetes funciona.

void imprimirArrayPorReferencia(int listaDeEdades[], int len)
{
	int i;
	for(i=0; i<len; i++)
		{
			printf("%d \n", listaDeEdades[i]);
		}
}

//Pasaje por referencia: Cuando llama la funcion le tenes que poner el & (&edad)

/*
void imprimirArray(int* e)
{
	*e = 9;   //Leo o escribo el valor
}

//Pasaje por valor:  Cuando llaman a la funcion no le pones el & (edad)

void imprimirArrayPorValor(int e)
{
	int j;
	//No puedo escribir la variable de afuera
	j = e + 7; //Leo el valor
}
*/


float promediarArrayInt(int array[], int len)
{
	int i;
	float resultado;
	int acumulador = 0;

	for(i=0; i<len; i++)
	{
		acumulador += array[i];
	}

	resultado = ((float)acumulador) / len;

	return resultado;

}
