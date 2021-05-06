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
int mostrarSiCargo(Estudiante *array, int len);
int buscarLegajo(Estudiante array[], int len, int legajo);
int buscarLibre(Estudiante array[], int len, int *posicion);
int altaEstudiante(Estudiante array[], int len);
int bajaEstudiante(Estudiante array[], int len);
void mostrarEstudiantes(Estudiante array[], int len);



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

				if(buscarLibre(array, TAM, &posicion) != 1)
				{
				  altaEstudiante(array, TAM);
				}
				break;
			case 2: //BAJA
				if(buscarLibre(array, TAM, &posicion) != -1)
				{
					bajaEstudiante(array, TAM);
				}
				break;
			case 3: //MODIFICAR
				break;
			case 4: //LISTAR
				mostrarEstudiantes(array, TAM);
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
	int i;
	int retorno = -1;

		if(array != NULL && len > 0)
		{
			for(i=0; i < len; i++)
			{
				array[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
			}

			retorno = 1;
		}

		return retorno;

}

//Mostrar si cargó
int mostrarSiCargo(Estudiante *array, int len)
{
	int i;

	printf("Datos cargados");

		for(i=0; i <len; i++)
		{
			printf("isEmpty .%d\n", array[i].isEmpty);
		}

	return 0;
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

int altaEstudiante(Estudiante array[], int len)
{
	int i;

	for(i=0; i<len; i++)
	{

			printf("\n Ingrese legajo: ");
			scanf("%d", &array[i].legajo);
			printf("\n Ingrese sexo m/f: ");
			fflush(stdin);
			scanf("%c", &array[i].sexo);
			printf("\n Ingrese su edad: ");
			scanf("%d", &array[i].edad);
			printf("\n Ingrese Nota 1: ");
			scanf("%d", &array[i].nota1);
			printf("\n Ingrese Nota 2: ");
			scanf("%d", &array[i].nota2);
			array[i].promedio = ((float) array[i].nota1 + array[i].nota2) / 2;
			printf("\n Ingrese su apellido: ");
			fflush(stdin);
			gets(array[i].apellido); //No lleva el &

			array[i].isEmpty = 0;

	}

	printf("\n Estudiante correctamente ingresado en el sistema. \n");


	return 0;
}

//Baja estudiante

int bajaEstudiante(Estudiante array[], int len)
{
	int legajo;
	char respuesta;
	int i;
	int retorno;
	printf("Ingrese legajo que desea dar de baja: ");
	scanf("%d", &legajo);
	fflush(stdin);

	for(i=0;i<len;i++)
	{
		if(legajo == array[i].legajo)
		{
			printf("\n El legajo del alumno es: %d\n", array[i].legajo);
			printf("\n El sexo del alumno es: %c\n", array[i].sexo);
			printf("\n La edad del alumno es: %d\n", array[i].edad);
			printf("\n La nota1 del alumno es: %d\n", array[i].nota1);
			printf("\n La nota2 del alumno es: %d\n", array[i].nota2);
	//		printf("\n El promedio del alumno es: %f\n", array[i].promedio);
			printf("\n El apellido del alumno es: %s\n", array[i].apellido);
			printf("\nEstos son los datos del alumno con el legajo %d. ¿Desea eliminarlo? s/n ", legajo);
			scanf("%c", &respuesta);
			if(respuesta == 's'){
				printf("El alumno con el legajo %d se eliminó correctamente\n", legajo);
				array[i].isEmpty = 1;
				retorno = 1;
			}
			else
			{
				if(respuesta == 'n')
				{
					printf("Eliminación cancelada. No se eliminó al alumno del legajo %d \n", legajo);
					retorno = -1;
				}
			}

		}
	}
	return retorno;

}

//Mostrar Estudiantes

void mostrarEstudiantes(Estudiante array[], int len)
{
	int i;

	printf("\n///LEGAJOS UTN///\n");

	for(i=0; i < len; i++)
	{
		if(array[i].isEmpty == 0)
		{
			printf("\nLegajo: %d", array[i].legajo);
			printf("\nEl sexo es: %c", array[i].sexo);
			printf("\nLa edad es: %d", array[i].edad);
			printf("\nLa nota 1 es: %d", array[i].nota1);
			printf("\nLa nota 2 es: %d", array[i].nota2);
			printf("\nEl apellido es: %s \n", array[i].apellido);
		}
		else
		{
			printf("No hay alumnos cargados.\n");

		}

	}
}


//Buscar legajo

int buscarLegajo(Estudiante array[], int len, int legajo)
{
	int retorno;
	int i;
	for(i=0; i<len; i++)
	{
		if(legajo == array[i].legajo)
		{
			printf("\n El legajo del alumno es: %d\n", array[i].legajo);
			printf("\n El sexo del alumno es: %c\n", array[i].sexo);
			printf("\n La edad del alumno es: %d\n", array[i].edad);
			printf("\n La nota1 del alumno es: %d\n", array[i].nota1);
			printf("\n La nota2 del alumno es: %d\n", array[i].nota2);
			//printf("\n El promedio del alumno es: %f\n", array[i].promedio);
			printf("\n El apellido del alumno es: %s\n", array[i].apellido);
			retorno=1; //Posición donde está el legajo
		}
		break;
	}

	return retorno;
}

void modificarLegajo(Estudiante array[], int len)
{
	int i;
	for(i=0; i<len;i++){
		printf("Ingrese nuevos datos para el usuario");
	}
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
	printf("6. SALIR\n");

	printf("\nSeleccione una opción del menu: ");
	scanf("%d", opcion);

}

