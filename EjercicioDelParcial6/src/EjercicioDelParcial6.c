/*
 ============================================================================
 Name        : EjercicioDelParcial6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct{
	int idDino;
	char nombre[20];
	int cantPatas;
	float altura;
}eDinosaurio;

int main(void) {
	setbuf(stdout, NULL);

	eDinosaurio jurasicos[TAM];

	printf("Ingrese nombre del Dino");
	fflush(stdin);
	scanf("%s", &jurasicos[3].nombre);

	return EXIT_SUCCESS;
}
