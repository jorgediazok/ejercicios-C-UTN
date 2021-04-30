/*
 ============================================================================
 Name        : EjercicioClase28-4-3-AltaBaja.c
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
}DatosAlumnos;

int inicializarAlumnos(DatosAlumnos* alumnos, int tamano);
void menuInicio(int* select);
void altaAlumnos(DatosAlumnos array[], int posicion);
int buscarLegajo(DatosAlumnos arrayAlumnos[], int tamanio, int legajo);


#define TOTAL_ALUMNOS 5


int main(void) {
	setbuf(stdout, NULL);

	DatosAlumnos arrayAlumnos[TOTAL_ALUMNOS];
	inicializarAlumnos(arrayAlumnos, TOTAL_ALUMNOS);

	int posicion;
	int opcion;
	char salir = 'n';

	while(salir != 's')
	{
		menuInicio(&opcion);

		switch(opcion)
		{
		case 1:
			altaAlumnos(arrayAlumnos, posicion);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			printf("Seguro desea salir? s/n \n");
			system("pause");
			break;
		}
	}

	return EXIT_SUCCESS;
}


int inicializarAlumnos(DatosAlumnos* alumnos, int tamano)
{
	int error = -1;

	if(alumnos != NULL && tamano > 0)
	{
		for(int i=0; i<tamano; i++)
		{
			alumnos[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
		}

		error = 0;
	}

	return error;

}

void menuInicio(int* select)
{
	system("cls");

	printf("\n");
	printf("MENU\n");
	printf("\n");
	printf("1. ALTA\n");
	printf("2. BAJA\n");
	printf("3. MODIFICACION\n");
	printf("4. SALIR\n");

	printf("\nSeleccione una opción del menu: ");
	scanf("%d", select);

}


void altaAlumnos(DatosAlumnos array[], int posicion)

{
	if(array[posicion].isEmpty == 0)

	{
	printf("\nIngrese legajo");
	scanf("%d", &array[posicion].legajo);

	printf("\nIngrese su sexo");
	fflush(stdin);
	scanf("%c", &array[posicion].sexo);

	printf("\nIngrese su edad");
	scanf("%d", &array[posicion].edad);

	printf("\nIngrese nota 1");
	scanf("%d", &array[posicion].nota1);

	printf("\nIngrese nota 2");
	scanf("%d", &array[posicion].nota2);

	printf("\nIngrese su apellido");
	gets(array[posicion].apellido);
	}

}

int buscarLegajo(DatosAlumnos arrayAlumnos[], int tamanio, int legajo)
{
	int ret = -1;

	for(int i = 0; i < tamanio; i++)
	{
		if(arrayAlumnos[i].isEmpty == 0 && arrayAlumnos[i].legajo == legajo)
		{
			ret = 1;
			break;
		}
	}

	return ret;
}


