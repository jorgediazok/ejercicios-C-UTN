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

	Alumno* arrayPunterosAlumno[QTY_ALUMNOS];
	int opcion;
	int proximoId=0;
	float bufferAltura;
	char bufferNombre[NOMBRE_LEN];

	if(!alumno_initArray(arrayPunterosAlumno, QTY_ALUMNOS))
	{
		printf("INIT OK!");

		do
			{
				utn_getNumero(&opcion, "MENU\n\n1-Alta\n2-Baja\n3-Modificar\n4-Ordenar\n5-Imprimir\n6-Promedio de Alturas\n7-Alumno más Alto\n\n10-Salir", "\nOpción Inválida", 1, 10,2);

				switch(opcion)
				{
				case 1:
					if(!utn_getNombre(bufferNombre, NOMBRE_LEN, "\nNombre?", "\nNombre Inválido",2) &&
					   !utn_getNumeroFlotante(&bufferAltura, "\nAltura?", "\nAltura Incorrecta.", 0.10,4,2) &&
					    alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, bufferNombre, bufferAltura, proximoId) >= 0)
							{
								printf("\nALTA OK");
								proximoId++;
							}
				break;

				case 2:
				break;

				case 3:
				break;

				case 4:
				break;

				case 5:
					alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
				break;

				case 6:
				break;

				case 7:
				break;

				case 10:
				break;
				}
			}while(opcion != 10);
	}

	/*if(!alumno_initArray(arrayPunterosAlumno, QTY_ALUMNOS))
	{
		printf("INIT OK");

		if(alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "A BORRAR", 1.85,111) >= 0)
		{
			printf("ALTA OK");
		}

		if(alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "ANA", 1.65,112) >= 0)
		{
			printf("ALTA OK");
		}

		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);

		if(!alumno_borrarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, 111))
		{
			printf("\nBORRADO OK");
		}

		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
	}*/

	return EXIT_SUCCESS;
}
