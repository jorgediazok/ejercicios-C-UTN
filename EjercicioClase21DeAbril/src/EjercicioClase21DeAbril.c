/*
 ============================================================================
 Name        : EjercicioClase21DeAbril.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desarrollar un programa que permita guardar los datos de 5 alumnos.
 Los datos a guardar para cada alumno: legajo, sexo, edad, nota1, nota2, promedio, apellido.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define TAM 5


int main(void) {

	setbuf(stdout, NULL);

	int legajos[TAM];
	int edades[TAM];
	int notaUno[TAM];
	int notaDos[TAM];
	float promediosNotas[TAM];
	char sexo[TAM];
	char apellidos[TAM][20];
	char auxApellido[20];
	int i;

	//Inicializar arrays
	limpiarArrayEntero(legajos, TAM);
	limpiarArrayChar(sexo, TAM);
	limpiarArrayEntero(edades, TAM);
	limpiarArrayEntero(notaUno, TAM);
	limpiarArrayEntero(notaDos, TAM);
	limpiarArrayFloat(promediosNotas, TAM);
	limpiarArrayString(apellidos, TAM);

	//Carga de data

	int i;

	for(i=0;i<TAM;i++)
	{
		cargaArrayEntero(legajos, TAM);
		cargaArrayChar(sexo, TAM);
		cargaArrayEntero(edades, TAM);
		cargaArrayEntero(notaUno, TAM);
		cargaArrayEntero(notaDos, TAM);
		cargaArrayString(apellidos, TAM);
	}



	return EXIT_SUCCESS;
}


