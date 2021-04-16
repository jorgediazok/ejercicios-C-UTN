/*
 ============================================================================
 Name        : EjercicioArray13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad.
 Los nombers de las personas no superan los 20 caracteres.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre1[21];
	char nombre2[21];
	int edad1;
	int edad2;

	printf("Ingrese el nombre de la primera persona: \n");
	gets(nombre1);
	printf("Ingrese la edad de la primera persona: \n");
	scanf("%d", &edad1);

	fflush(stdin); //libera el buffer del teclado

	printf("Ingrese el nombre de la segunda persona: \n");
	gets(nombre2);
	printf("Ingrese la edad de la segunda persona: \n");
	scanf("%d", &edad2);

	if(edad1 > edad2)
	{
		printf("La persona con más edad es %s", nombre1);
	}else{
		printf("La persona con más edad es %s", nombre2);
	}

	return EXIT_SUCCESS;
}
