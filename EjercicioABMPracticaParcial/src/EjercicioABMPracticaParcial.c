/*
 ============================================================================
 Name        : EjercicioABMPracticaParcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define QTY_EMPLOYEES 1000



typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

int initEmployees(Employee list[], int len); //Inicializar Arrays


int main(void) {
	setbuf(stdout, NULL);

	Employee arrayEmployees[QTY_EMPLOYEES];

	char auxName[50];
	char auxLastName[50];
	float auxSalary;
	int auxSector;
	int auxIsEmpty;

	int indiceLugarLibre;
	int indiceResultadoBusqueda;
	int opcion = 0;
	int respuesta;

	initEmployees(arrayEmployees, QTY_EMPLOYEES);

	do
	{
	respuesta = utn_getNumero(&opcion, "\n\nMENU EMPLOYEES\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJAR\n4 - INFORMAR\n5 - SALIR\n\n\n", "Opción no válida", 1, 5, 2);

	if(respuesta == 0)
	{
		switch(opcion)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			printf("Saliste del sistema.");
			//Agregar desea salir del sistema?
			exit(0);
			break;
		}
	}

	}while(opcion != 5);


	return EXIT_SUCCESS;
}

int initEmployees(Employee list[], int len)
{
	int i;
	int retorno = -1;

		if(list != NULL && len > 0)
			{
				for(i=0; i < len; i++)
				{
					list[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
				}

				retorno = 1;
			}

		return retorno;
}
