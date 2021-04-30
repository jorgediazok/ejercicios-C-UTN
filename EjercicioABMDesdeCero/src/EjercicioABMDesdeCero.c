/*
 ============================================================================
 Name        : EjercicioABMDesdeCero.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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

#define TAM 5

void menuInicio(int* opcion);
int inicializarEstudiantes(Estudiante array[], int len);

int main(void) {
		setbuf(stdout, NULL);

		Estudiante array[TAM];
		inicializarEstudiantes(array, TAM);

		int opcion;
		char salir = 'n';

		while(salir != 's')
		{
			menuInicio(&opcion);

			switch(opcion)
			{
			case 1: //ALTA
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
				break;
			}
		}

	return EXIT_SUCCESS;
}

int inicializarEstudiantes(Estudiante array[], int len)
{
	int error = -1;

		if(array != NULL && len > 0)
		{
			for(int i=0; i < len; i++)
			{
				array[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
			}

			error = 0;
		}

		return error;

}


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

