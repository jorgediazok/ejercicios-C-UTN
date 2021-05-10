/*
 ============================================================================
 Name        : EjercicioABM1.c
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
#define QTY_PERSONAS 3

typedef struct
{
	char nombre[50];
	char apellido[50];
	int legajo;
}Persona;

void inicializarArrayPersonas(Persona arrayPersonas[], int cantidadDeElementos, int valor);
int buscarPrimerOcurrencia(Persona arrayPersonas[], int cantidadDeElementos, int valor);


int main(void) {
	setbuf(stdout, NULL);

	//Arrays de clientes

	Persona arrayPersonas[QTY_PERSONAS];

	Persona auxiliarCliente;

	char auxiliarNombreStr[50];
	char auxiliarApellidoStr[50];
	char auxiliarLegajoStr[50];
	int auxiliarLegajo;

	int indiceLugarLibre;
	int indiceResultadoBusqueda;
	int opcion = 0;

	int i;
	int j;

	inicializarArrayPersonas(arrayPersonas, QTY_PERSONAS, -1); //Se indica con -1 que esa posición está vacía

	while(opcion != 6)
	{
		opcion = utn_getNumero(&opcion, "\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6- SALIR\n\n\n", "Opción no válida", 1, 6, 2);

		switch(opcion)
		{

		case 1:
			indiceLugarLibre = buscarPrimerOcurrencia(arrayPersonas, QTY_PERSONAS, -1);

			if(indiceLugarLibre == -1)
			{
				printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
				break;
			}

			printf("\nALTA\n");

			if(!getStringLetras("Ingrese el nombre: ", auxiliarNombreStr))
			{
				printf("El nombre debe estar compuesto solo por letras.\n");
				break;
			}

			if(!getStringLetras("Ingrese el apellido: ", auxiliarApellidoStr))
			{
				printf("El apellido debe estar compuesto solo por letras.\n");
				break;
			}

			if(!getStringNumeros("Ingrese el legajo: ", auxiliarLegajoStr))
			{
				printf("El legajo debe ser numérico.\n");
				break;
			}

			auxiliarLegajo = atoi(auxiliarLegajoStr);

			if(buscarPrimerOcurrencia(arrayPersonas, QTY_PERSONAS, auxiliarLegajo) != -1)
			{
				printf("\n\nEL LEGAJO YA EXISTE!");
				break;
			}

			strcpy(arrayPersonas[indiceLugarLibre].nombre,auxiliarNombreStr);
			strcpy(arrayPersonas[indiceLugarLibre].apellido,auxiliarApellidoStr);
			arrayPersonas[indiceLugarLibre].legajo = auxiliarLegajo;

			break;

		case 2:
			if(!getStringNumeros("Ingrese el legajo a dar de baja: "), auxiliarLegajoStr)
			{
				printf("El legajo debe ser numérico.\n");
				break;
			}
			indiceResultadoBusqueda = buscarPrimerOcurrencia(arrayPersonas, QTY_PERSONAS, atoi(auxiliarLegajoStr));

			if(indiceResultadoBusqueda == -1)
			{
				printf("\n\nNO SE ENCUENTRA ESE LEGAJO.\n");
				break;
			}
			arrayPersonas[indiceResultadoBusqueda].legajo = -1;
			break;

		case 3:
			if(!getStringNumeros("Ingrese el legajo a modificar: ", auxiliarLegajoStr))
			{
				printf("El legajo debe ser numérico.\n");
				break;
			}

			indiceResultadoBusqueda = buscarPrimerOcurrencia(arrayPersonas, QTY_PERSONAS, atoi(auxiliarLegajoStr));

			if(indiceResultadoBusqueda == -1)
			{
				printf("\n\nNO SE ENCUENTRA ESE LEGAJO.\n");
				break;
			}

			if(!getStringLetras("Ingrese el nombre: ", auxiliarNombreStr))
			{
				printf("El nombre debe estar compuesto solo por letras.\n");
				break;
			}

			if(!getStringLetras("Ingrese el apellido: ", auxiliarApellidoStr))
			{
				printf("El apellido debe estar compuesto solo por letras.\n");
				break;
			}

			strcpy(arrayPersonas[indiceResultadoBusqueda].nombre, auxiliarNombreStr);
			strcpy(arrayPersonas[indiceResultadoBusqueda].apellido, auxiliarApellidoStr);

			break;

		case 4:
			printf("\nLISTAR\n");
			for(i=0; i<QTY_PERSONAS; i++)
			{
				if(arrayPersonas[i].legajo != -1)
				{
					printf("\n%s - %s - %d", arrayPersonas[i].nombre, arrayPersonas[i].apellido, arrayPersonas[i].legajo);
				}
			}
			break;

		case 5:
			printf("\nORDENADO\n");
			for(i=0; i < QTY_PERSONAS - 1; i++)
			{
				if(arrayPersonas[i].legajo == -1)
				{
					continue;
				}

				for(j=i+1; j<QTY_PERSONAS; j++)
				{
					if(arrayPersonas[j].legajo == -1)
					{
						continue;
					}

					if(strcmp(arrayPersonas[i].apellido, arrayPersonas[j].apellido)>0)
					{
					auxiliarCliente = arrayPersonas[j];
					arrayPersonas[j] = arrayPersonas[i];
					arrayPersonas[i] = auxiliarCliente;
					}
				}
			}
			break;
		}
	}

	return EXIT_SUCCESS;
}

void inicializarArrayPersonas(Persona arrayPersonas[], int cantidadDeElementos, int valor)
{
	int i;
	for(i=0; i<cantidadDeElementos;i++)
	{
		arrayPersonas[i].legajo = valor;
	}
}

int buscarPrimerOcurrencia(Persona arrayPersonas[], int cantidadDeElementos, int valor)
{
	int i;
	for(i=0; i<cantidadDeElementos; i++)
	{
		if(arrayPersonas[i].legajo == valor)
		{
			return i;
		}
	}

	return -1; //No hubo ninguna ocurrencia, no existe legajo en nuestro array
}


