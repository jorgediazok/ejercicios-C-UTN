/*
 ============================================================================
 Name        : Burbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTY_EMPLEADOS 9

/*
 1) Brief imprimie a modo DEBUG la información de un array de enteros
 2) param pArray es el puntero al array a ser ordenado
 3) param size es la longitud del array
 4) return 0 si OK o -1 para indicar un error
*/

int printArrayInt(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);
int ordenarArrayIntMal(int* pArray, int limite);



int main(void) {
	setbuf(stdout, NULL);

	int arrayEdades[QTY_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};
	int respuesta;

	printArrayInt(arrayEdades, QTY_EMPLEADOS); //Array desordenado

	respuesta = ordenarArrayInt(arrayEdades, QTY_EMPLEADOS);

	if(respuesta > 0)
	{
		printf("\n\n Iteraciones: %d\n\n", respuesta);
	}

	printArrayInt(arrayEdades, QTY_EMPLEADOS); //Array ordenado

	return EXIT_SUCCESS;
}

int printArrayInt(int* pArray, int limite)
{
	int retorno = -1;
	int i;

	if(pArray != NULL && limite >= 0)
	{
		for(i=0;i<limite;i++)
		{
			printf("\nDEBUG    Indice %d  -  Valor: %d",i, pArray[i]);

		}

		retorno = 0;
	}

	return retorno;
}

/*
 1) Ordena un array de enteros de manera Descendente
 2) param pArray es el puntero al array a ser ordenado
 3) param size es la longitud del array
 4) return cantidad de iteraciones necesarias para ordenar si OK o -1 para indicar un error
*/

int ordenarArrayInt(int* pArray, int limite)
{
	int flagSwap; //Indica si hice o no un swap, el valor inicial por defecto es 1. Todo lo que no es 0 es verdadero.
	int i;
	int contador= 0;
	int retorno = -1;
	int aux;
	int nuevoLimite;

	if(pArray != NULL && limite >= 0)
	{
		nuevoLimite = limite - 1;

		do
		{
			flagSwap = 0;

			for(i=0; i<nuevoLimite - 1; i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1; //Forza una nueva vuelta del while
					aux = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = aux;
				}
				contador ++;
			}

		}while(flagSwap);

		retorno = contador;
	}



	return retorno;
}


///Esta es la mala forma de hacerlo, o sea con dos for

int ordenarArrayIntMal(int* pArray, int limite)
{
	int i;
	int j;
	int contador= 0;
	int retorno = -1;
	int aux;

	if(pArray != NULL && limite >= 0)
	{
		for(i=0;i<limite;i++)
		{
			for(j=1+1; j<limite; j++)
			{
				contador ++;

				if(pArray[i] < pArray[j])
				{
				aux = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = aux;
				}
			}
		}

		retorno = contador;
	}
	return retorno;
}

