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


int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int edades[EDADESSIZE];
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
		printf("Sonaste, no ten�s idea lo que es una edad.\n");
		system("pause");
		}
	}


	imprimirArrayPorReferencia(edades, EDADESSIZE);

	return EXIT_SUCCESS;
}

//EL NOMBRE DEL ARRAY ES LA DIRECCI�N DE MEMORIA DONDE COMIENZA EL ARRAY (CLAVE)

//Recibir array por referencia: No se hace una copia, es el mismo. Es como el de punteros, pero como pon�s corchetes funciona.

void imprimirArrayPorReferencia(int listaDeEdades[], int len)
{
	int i;
	for(i=0; i<len; i++)
		{
			printf("%d ", listaDeEdades[i]);
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
