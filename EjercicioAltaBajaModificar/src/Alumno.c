/*
 * Alumno.c
 *
 *  Created on: 9 may. 2021
 *      Author: Jorge
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Alumno.h"

Alumno* alumno_new(void)
{
	Alumno* auxiliarP = NULL;
	auxiliarP = (Alumno*) malloc(sizeof(Alumno));
	return auxiliarP;
}

Alumno* alumno_newParametros(char* nombre, float altura, int id)
{
	Alumno* punteroAlumno = NULL;
	punteroAlumno = alumno_new();
	if(punteroAlumno != NULL)
	{
		strncpy(punteroAlumno -> nombre, nombre, NOMBRE_LEN);
		punteroAlumno->altura = altura;
		punteroAlumno->id=id;
	}

	return punteroAlumno;
}



