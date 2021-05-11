/*
 ============================================================================
 Name        : EjercicioABM2ArrayParalelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Realizar una agenda para guardar los datos de hasta 200 personas de las cuales se toman los siguientes datos:
 Nombre, apellido, legajo ( no se puede repetir). Usar una estructura para representar a la persona.
 a) Realizar un programa con un menu de opciones para hacer altas, bajas y modificaciones (ABM) de una agenda
 b) Mostrar un listado ordenado por apellido
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define QTY_CLIENTES 3

void inicializarArrayInt(int array[], int len, int valor);
int buscarPrimerOcurrencia(int array[], int len, int valor);

int main(void) {
	setbuf(stdout, NULL);

	//Arrays paralelos donde se guarda la información
	char arrayNombres[QTY_CLIENTES][50];
	char arrayApellidos[QTY_CLIENTES][50];
	int arrayLegajos[QTY_CLIENTES];

	char auxiliarNombreStr[50];
	char auxiliarApellidoStr[50];
	char auxiliarLegajoStr[50];
	int auxiliarLegajo;

	int indiceLugarLibre;
	int indiceResultadoBusqueda;
	int opcion=0;
	int respuesta;

	int i;
	int j;

	inicializarArrayInt(arrayLegajos, QTY_CLIENTES, -1); //Se indica con -1 que esa posición está vacía

	do
	{
	respuesta = utn_getNumero(&opcion, "\n\nMENU\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6 - SALIR\n\n\n", "Opción no válida", 1, 6, 2);

	if(respuesta==0)
	{
		switch(opcion)
		{
			case 1:
			indiceLugarLibre = buscarPrimerOcurrencia(arrayLegajos, QTY_CLIENTES, -1);

			if(indiceLugarLibre == -1)
			{
				printf("\n\nNO QUEDAN LUGARES LIBRES!");
				break;
			}

			printf("\nALTA\n");

			if(!getStringLetras("Ingrese el Nombre: ", auxiliarNombreStr))
			{
				printf("El nombre debe estar compuesto solo por letras.\n");
				break;
			}

			if(!getStringLetras("Ingrese el Apellido: ", auxiliarApellidoStr))
			{
				printf("El apellido debe estar compuesto solo por letras.\n");
				break;
			}

			if(!getStringNumeros("Ingrese el legajo: ", auxiliarLegajoStr))
			{
				printf("El legajo debe ser numérico. \n");
				break;
			}

			auxiliarLegajo = atoi(auxiliarLegajoStr);

			if(buscarPrimerOcurrencia(arrayLegajos, QTY_CLIENTES, auxiliarLegajo) != -1)
			{
				printf("\n\nEL LEGAJO YA EXISTE\n");
				break;
			}

			strcpy(arrayNombres[indiceLugarLibre],auxiliarNombreStr);
			strcpy(arrayApellidos[indiceLugarLibre], auxiliarApellidoStr);
			arrayLegajos[indiceLugarLibre] = auxiliarLegajo;

			break;

		}
	}

	}while(opcion != 6);


	return EXIT_SUCCESS;
}

//Inicializa todos los arrays con un -1 o sea les dice están disponibles para usar

void inicializarArrayInt(int array[], int len, int valor)
{
	int i;
	for(i=0;i<len;i++)
	{
		int i;
		for(i=0;i<len;i++)
		{
			array[i] = valor;
		}
	}
}


//Busca la primera ocurrencia de un valor en un array de enteros. EL parámetro array es el array en el cual buscar,
//el parametro len indica la longitud del array, el parametro valor es el valor que se busca, return si no hay
//ocurrencia (-1) y si la hay la posicion de la misma (1)

int buscarPrimerOcurrencia(int array[], int len, int valor)
{
	int i;
	for(i=0;i<len;i++)
	{
		if(array[i] == valor)
		{
			return 1;
		}
	}

	return -1;
}
