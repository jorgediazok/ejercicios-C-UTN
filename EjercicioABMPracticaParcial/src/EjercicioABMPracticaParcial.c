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
#define QTY_EMPLOYEES 3



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
int buscarLibre(Employee array[], int len, int* posicion); //Buscar array libre
int addEmployee(Employee list[], int len, int id, char name[],char lastName[],float salary,int sector); //Agregar empleado
int findEmployeeById(Employee* list, int len,int id); //Encontrar Empleado
int removeEmployee(Employee* list, int len, int id); //Eliminar Empleado





int main(void) {
	setbuf(stdout, NULL);

	Employee arrayEmployees[QTY_EMPLOYEES];

	int opcion = 0;
	int respuesta;
	int posicion;

	int auxId = 0;
	char auxName[51];
	char auxLastName[51];
	float auxSalary = 0;
	int auxSector = 0;

	initEmployees(arrayEmployees, QTY_EMPLOYEES);

	do
	{
	respuesta = utn_getNumero(&opcion, "\n\nMENU EMPLOYEES\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJAR\n4 - INFORMAR\n5 - SALIR\n\n\n", "Opción no válida", 1, 5, 2);

	if(respuesta == 0)
	{
		switch(opcion)
		{
		case 1:
			if(buscarLibre(arrayEmployees, QTY_EMPLOYEES, &posicion) != 1)
				{
				 addEmployee(arrayEmployees, QTY_EMPLOYEES, auxId, auxName, auxLastName, auxSalary, auxSector);
				 break;
				}
			break;
		case 2:
			findEmployeeById(arrayEmployees, QTY_EMPLOYEES, auxId);
			break;
		case 3:
			removeEmployee(arrayEmployees, QTY_EMPLOYEES, auxId);
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
	int retorno = 0;

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

//Buscar Libre

int buscarLibre(Employee array[], int len, int* posicion)
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

//Add employees
int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
		printf(" ADD EMPLOYEE\n\n");
		printf("\n Enter ID Number: ");
		scanf("%d", &list->id);
		printf("\n Enter Name: ");
		scanf("%s", list->name);
		fflush(stdin);
		printf("\n Enter Last Name: ");
		scanf("%s", list->lastName);
		fflush(stdin);
		printf("\n Enter Salary: ");
		scanf("%f", &list->salary);
		printf("\n Enter Sector: ");
		scanf("%d", &list->sector);
		fflush(stdin);

		list->isEmpty = 0;

		printf("\nEmployee added to DataBase");

		return -1;

}

//Find Employee By Id

int findEmployeeById(Employee* list, int len,int id)
{
	int i;
	int identification;
	int retorno;

	for(i=0;i<len;i++)
	{
		printf("\nEnter the ID of the Employee to modify: ");
		scanf("%d", &identification);

		if(identification == list[i].id)
		{

			printf("The employee ID is %d, ", list[i].id);
			printf("his name is %s, ", list[i].name);
			printf("and his last name is %s. ", list[i].lastName);
			printf("His salary is $ %.2f ", list[i].salary);
			printf("and he works in the sector %d.", list[i].sector);
			retorno = 1;
			break;
		}
		else
		{
			printf("ID not found, please do another search.");
			break;
		}
	}

	return retorno;
}

//Remove Employee
int removeEmployee(Employee* list, int len, int id)
{
	int i;
	int identification;
	char answer = 'y';
	int retorno = -1;

	printf("Enter ID of Employee to be removed: ");
	scanf("%d", &identification);
	fflush(stdin);

	for(i=0;i<len;i++)
		{
			if(identification == list[i].id)
			{
				printf("\nThe Employee with the ID %d will be removed. Are you sure? y/n \n", list[i].id);
				scanf("%c", &answer);

				if(answer == 'y' || answer == 'Y'){
					printf("The Employee with the ID %d was removed from the database. \n", list[i].id);
					list[i].isEmpty = 1;
					retorno = 1;
					break;
				}


		    	if(answer == 'n' || answer == 'N')
					{
						printf("Operation canceled.\n");
						retorno = -1;
						break;
					}
				}
			if(identification != list[i].id)
			{
			printf("User not found");
			retorno = -1;
			break;
			}
		}

		return retorno;
}


