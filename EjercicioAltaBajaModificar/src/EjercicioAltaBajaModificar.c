/*
 ============================================================================
 Name        : EjercicioAltaBajaModificar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 1 Alta Alumno
 2 Baja Alumno
 3 Modificar Alumno
 4 Ordenar por nombre
 5 Imprimir
 6 Informe promedio alturas
 7 Informe alumno mas alto
 10 Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Alumno.h"

#define QTY_ALUMNOS 3

int main(void) {
	setbuf(stdout, NULL);

	//Alumno* arrayPunterosAlumno[QTY_ALUMNOS];
	int opcion;

	do
	{
		utn_getNumero(&opcion, "MENU\n\n1-Alta\n2-Baja\n3-Modificar\n4-Ordenar\n5-Imprimir\n6-Promedio de Alturas\n7-Alumno más Alto\n\n10-Salir", "\nOpción Inválida", 1, 10,2);

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
		break;

		case 6:
		break;

		case 7:
		break;

		case 10:
		break;
		}
	}while(opcion != 10);

	return EXIT_SUCCESS;
}
