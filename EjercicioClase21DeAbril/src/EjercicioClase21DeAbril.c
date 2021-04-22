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

#define ALUMNOS_LEN 5


int main(void) {
	setbuf(stdout, NULL);

	int legajos[ALUMNOS_LEN];
	char sexo[ALUMNOS_LEN];
	int edades[ALUMNOS_LEN];
	int notaUno[ALUMNOS_LEN];
	int notaDos[ALUMNOS_LEN];
	float promediosNotas[ALUMNOS_LEN];
	char apellidos[ALUMNOS_LEN][20];

	//Inicializar arrays
	limpiarArrayEntero(legajos, ALUMNOS_LEN);
	limpiarArrayChar(sexo, ALUMNOS_LEN);
	limpiarArrayEntero(edades, ALUMNOS_LEN);
	limpiarArrayEntero(notaUno, ALUMNOS_LEN);
	limpiarArrayEntero(notaDos, ALUMNOS_LEN);
	limpiarArrayFloat(promediosNotas, ALUMNOS_LEN);
	limpiarArrayString(apellidos, ALUMNOS_LEN);

	//Carga de data
	cargaArrayEntero(legajos, ALUMNOS_LEN);
	cargaArrayChar(sexo, ALUMNOS_LEN);
	cargaArrayEntero(edades, ALUMNOS_LEN);
	cargaArrayEntero(notaUno, ALUMNOS_LEN);
	cargaArrayEntero(notaDos, ALUMNOS_LEN);
	cargaArrayString(apellidos, ALUMNOS_LEN);



	return EXIT_SUCCESS;
}


