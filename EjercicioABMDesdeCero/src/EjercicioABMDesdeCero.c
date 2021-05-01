/*
 ============================================================================
 Name        : EjercicioABMDesdeCero.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar un programa que permita guardar los datos de 5 alumnos.
 Los datos a guardar para cada alumno: legajo, sexo, edad, nota1, nota2, promedio, apellido.
 Se debe utilizar estructuras, permitiendo al usuario trabajar con los datos a través de un ABM.
 1-Menú e Inicialización
 2-Alta
 3-Listar
 4-Baja
 5-Modificar
 6-Ordenar

 //Menu: Alta, baja, modificación, listar, ordenar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	int legajo;
	char sexo;
	int edad;
	int nota1;
	int nota2;
	float promedio;
	char apellido[20];
	int isEmpty;
}Estudiante;

#define TAM 2

void menuInicio(int* opcion);
int inicializarEstudiantes(Estudiante array[], int len);
int buscarLegajo(Estudiante array[], int len, int legajo);
int buscarLibre(Estudiante array[], int len, int *posicion);
int altaEstudiante(Estudiante array[], int len, int posicion);
void imprimirLegajos(Estudiante array[], int len);


int main(void) {
		setbuf(stdout, NULL);

		Estudiante array[TAM]; //Declaro mi array de estudiantes

		inicializarEstudiantes(array, TAM); //Inicializo los arrays en 1 (o sea disponibles para usar)

		int opcion;
		int posicion;
		char salir = 'n';

		while(salir != 's')
		{
			menuInicio(&opcion);

			switch(opcion)
			{
			case 1: //ALTA
				buscarLibre(array, TAM, &posicion);
				altaEstudiante(array, TAM, posicion);
				break;
			case 2: //BAJA
				break;
			case 3: //MODIFICAR
				break;
			case 4: //LISTAR
				imprimirLegajos(array, TAM);
				break;
			case 5: //ORDENAR
				break;
			case 6: //SALIR
				break;
			default:
				printf("No elegiste ninguna opción.");
			}
		}

	return EXIT_SUCCESS;
}



//Inicializar Array vacío
int inicializarEstudiantes(Estudiante array[], int len)
{
	int retorno = -1;

		if(array != NULL && len > 0)
		{
			for(int i=0; i < len; i++)
			{
				array[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
			}

			retorno = 1;
		}

		return retorno;

}

//Buscar Libre

int buscarLibre(Estudiante array[], int len, int *posicion)
{
	int retorno;

	if(array != NULL && len > 0 && posicion != NULL)
	{
		int i;
		for(i=0; i < len; i++)
		{
			if(array[i].isEmpty == 1)
			{
				*posicion = 1;
				retorno = -1;
				break;
			}else
			{
				retorno = 0;
			}
		}
	}

	return retorno;
}

//Alta de alumnos

int altaEstudiante(Estudiante array[], int len, int posicion)
{
	int i;

	for(i=0; i<len; i++)
	{
		if(buscarLibre(array, len, &posicion) != 1)
		{
			printf("\n Ingrese legajo: ");
			scanf("%d", &array[posicion].legajo);
			printf("\n Ingrese sexo m/f: ");
			fflush(stdin);
			scanf("%c", &array[posicion].sexo);
			printf("\n Ingrese su edad: ");
			scanf("%d", &array[posicion].edad);
			printf("\n Ingrese Nota 1: ");
			scanf("%d", &array[posicion].nota1);
			printf("\n Ingrese Nota 2: ");
			scanf("%d", &array[posicion].nota2);
			array[i].promedio = ((float) array[i].nota1 + array[i].nota2) / 2;
			printf("\n Ingrese su apellido: ");
			fflush(stdin);
			gets(array[posicion].apellido); //No lleva el &

			array[posicion].isEmpty = 0;

		}else{
			printf("No hay lugar, por favor de de baja otro usuario.");
		}
	}

	return 0;
}

//Imprimir Legajos

void imprimirLegajos(Estudiante array[], int len)
{
	int i;

	for(i=0; i < len; i++)
	{
		if(array[i].isEmpty == 0)
		{
			printf("\nEl número de legajo es: %d", array[i].legajo);
			printf("\nEl sexo es: %c", array[i].sexo);
			printf("\nLa edad es: %d", array[i].edad);
			printf("\nLa nota 1 es: %d", array[i].nota1);
			printf("\nLa nota 2 es: %d", array[i].nota2);
			printf("\nEl apellido es: %s", array[i].apellido);
		}
	}
}


//Buscar legajo

int buscarLegajo(Estudiante array[], int len, int legajo)
{
	int ret = -1;
	int i;

	for(i = 0; i < len; i++)
	{
		if(array[i].isEmpty == 0 && array[i].legajo == legajo)
		{
			ret = 1;
			break;
		}
	}

	return ret;
}


//Menú

void menuInicio(int* opcion)
{
	system("cls");

	printf("\n");
	printf("MENU\n");
	printf("\n");
	printf("1. ALTA\n");
	printf("2. BAJA\n");
	printf("3. MODIFICAR\n");
	printf("4. LISTAR\n");
	printf("5. ORDENAR\n");
	printf("6. SALIR");

	printf("\nSeleccione una opción del menu: ");
	scanf("%d", opcion);

}

