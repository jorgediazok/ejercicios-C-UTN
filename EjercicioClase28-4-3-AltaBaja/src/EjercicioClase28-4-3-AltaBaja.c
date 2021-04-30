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

#define TOTAL_ALUMNOS 5

int inicializarAlumnos(DatosAlumnos* alumnos, int tamanio);  //Inicializar Arrays
int buscarEmpty(DatosAlumnos array[], int tamanio, int* posicion); //Buscar array empty para llenar con datos
void menuInicio(int* select);
void altaAlumnos(DatosAlumnos array[], int tamanio);
void imprimirEstudiantes(DatosAlumnos array[], int tamanio);  //OK
int mostrarEstudiante(DatosAlumnos alumno); //OK
int buscarLegajo(DatosAlumnos array[], int tamanio, int legajo);




int main(void) {
	setbuf(stdout, NULL);

	DatosAlumnos array[TOTAL_ALUMNOS];
	inicializarAlumnos(array, TOTAL_ALUMNOS);

	int opcion;
	char salir = 's';

	while(salir != 's')
	{
		menuInicio(&opcion);

		switch(opcion)
		{
		case 1: //ALTA
			altaAlumnos(array, TOTAL_ALUMNOS);
			break;
		case 2: //BAJA
			break;
		case 3: //MODIFICAR
			break;
		case 4: //LISTAR
			break;
		case 5: //ORDENAR
			break;
		case 6: //SALIR
			printf("Seguro desea salir? s/n \n");
			system("pause");
			break;
		}
	}

	return EXIT_SUCCESS;
}


int inicializarAlumnos(DatosAlumnos* alumnos, int tamanio)
{
	int error = -1;

	if(alumnos != NULL && tamanio > 0)
	{
		for(int i=0; i < tamanio; i++)
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

int buscarEmpty(DatosAlumnos array[], int tamanio, int* posicion)
{
	int i;
	int retorno = -1;

	if(array !=  NULL && posicion != NULL && tamanio > 0)
	{
		for(i=0; i < tamanio; i++)
		{
			if(array[i].isEmpty == 1)
			{
				retorno = 0;
				*posicion = i;
				break;
			}
		}
	}

	return retorno;
}


void altaAlumnos(DatosAlumnos array[], int tamanio)

{
	int i;

	for(i=0; i<tamanio; i++)
	{
		if(array[i].isEmpty == 0)
		{
			printf("\nIngrese legajo");
			scanf("%d", &array[i].legajo);

			printf("\nIngrese su sexo");
			fflush(stdin);
			scanf("%c", &array[i].sexo);

			printf("\nIngrese su edad");
			scanf("%d", &array[i].edad);

			printf("\nIngrese nota 1");
			scanf("%d", &array[i].nota1);

			printf("\nIngrese nota 2");
			scanf("%d", &array[i].nota2);

			printf("\nIngrese su apellido");
			gets(array[i].apellido);
			}

	}
}


int bajaAlumnos(DatosAlumnos array[], int tamanio)
{
	int legajo;
	char respuesta;
	int posicion;
	int validacion;
	printf("Qué legajo desea dar de baja?: \n");
	scanf("%d", &legajo);
	fflush(stdin);

	posicion = buscarLegajo(array, tamanio, legajo);

	if(posicion != -1)
	{
		while(respuesta != 's' && respuesta != 'n')
		{
			printf("Desea eliminar esto?: \n");
			mostrarEstudiante(array[posicion]);
			fflush(stdin);
			validacion = scanf("%c", &respuesta);
		}
	}

	if(respuesta == 's')
	{
		array[posicion].isEmpty = 1;
	}

  return 0;
}


int buscarLegajo(DatosAlumnos array[], int tamanio, int legajo)
{
	int ret = -1;

	for(int i = 0; i < tamanio; i++)
	{
		if(array[i].isEmpty == 0 && array[i].legajo == legajo)
		{
			ret = 1;
			break;
		}
	}

	return ret;
}


void imprimirEstudiantes(DatosAlumnos array[], int tamanio)
{
	printf("\n Legajo    Sexo    Nota1    Nota2     Estudiante");

	for(int i = 0; i<tamanio; i++)
	{
		if(array[i].isEmpty == 0)
		{
			mostrarEstudiante(array[i]);
		}
	}
}


int mostrarEstudiante(DatosAlumnos alumno)
{
	printf("\ %-5d    %-5c     %-5d     %-5d     %5s", alumno.legajo, alumno.sexo, alumno.nota1, alumno.nota2, alumno.apellido);

	return 0;
}
