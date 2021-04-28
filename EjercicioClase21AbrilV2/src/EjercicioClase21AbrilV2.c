/*
 ============================================================================
 Name        : EjercicioClase21AbrilV2.c
 Author      : Jorge Díaz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LARGO 3

void inicializarArrayInt(int array[], int tamano);
void inicializarArrayFloat(float array[], int tamano);
void inicializarArrayChar(char array[], int tamano);
void inicializarArrayString(char array[][20], int tamano);
void utn_getArrayInt(int numero[], char *mensaje, char *mensajeError, int minimo, int maximo, int intentos);
void utn_getArrayChar(char character[], char* mensaje, char*mensajeError);
void utn_getString(char arrayString[][20], char* mensaje);
void calcularPromedio(float prom, int nota1, int nota2);


int main(void) {
	setbuf(stdout, NULL);

	int legajo[LARGO];
	char sexo[LARGO];
	int edad[LARGO];
	int nota1[LARGO];
	int nota2[LARGO];
	float promedio[LARGO];
	char apellido[LARGO][20];
	//char auxApellido[LARGO];

	//Inicializar array

	inicializarArrayChar(sexo, LARGO);
	inicializarArrayInt(edad, LARGO);
	inicializarArrayInt(nota1, LARGO);
	inicializarArrayInt(nota2, LARGO);
	inicializarArrayFloat(promedio, LARGO);
	inicializarArrayString(apellido, LARGO);

	for(int i = 0; i < LARGO ; i++){
		utn_getArrayInt(&legajo[i], "Ingrese un legajo:", "Error, intente nuevamente\n", 1 , 10000, 3);
		utn_getArrayInt(&edad[i], "Ingrese una edad:", "Error. Ingrese una edad correcta", 1, 120, 3);
		utn_getArrayInt(&nota1[i], "Ingrese una nota:", "Error. Ingrese una nota entre 1 y 10", 1, 10, 3);
		utn_getArrayInt(&nota2[i], "Ingrese una nota:", "Error. Ingrese una nota entre 1 y 10", 1, 10, 3);
		utn_getArrayChar(&sexo[i], "Ingrese sexo: f/m \n", "Error. Ingrese sexo correcto");
		utn_getString(&apellido[i], "Ingrese apellido: \n");
	}


	for(int i = 0; i < LARGO ; i++){

					printf("\n%d legajo: %d ",i , legajo[i]);
					printf("  sexo: %c " , sexo[i]);
					printf("  edad: %d " ,edad[i]);
					printf("  nota 1: %d " ,nota1[i]);
					printf("  nota 2: %d " ,nota2[i]);
					printf("  promedio: %.2f " ,promedio[i]);
					printf("  apellido: %s \n" ,apellido[i]);

				};

	return EXIT_SUCCESS;
}


void inicializarArrayInt( int array[], int tamano){
	for(int i = 0; i < tamano ; i++){
			array[i]= 0;
		};
}

void inicializarArrayFloat( float array[], int tamano){
	for(int i = 0; i < tamano; i++){
			array[i]= 0;
		};
}

void inicializarArrayChar(char array[], int tamano){
	for(int i = 0; i < tamano ; i++){
 		array[i] = 'a'; //comillas simples para caracteres
		};
}

void inicializarArrayString(char array[][20], int tamano){
	for(int i = 0; i < tamano ; i++){
 		strcpy(array[i], "a"); //comillas dobles para strings
		};
}


void utn_getArrayInt(int numero[], char *mensaje, char *mensajeError, int minimo, int maximo, int intentos){

	int bufferInt ; //variable auxiliar;

		if (numero != NULL  && mensaje != NULL && mensajeError != NULL && minimo <= maximo && intentos >=0 ){
				printf("%s \n", mensaje);
				scanf("%d", &bufferInt);
				if(bufferInt >= minimo && bufferInt <=maximo ){
					*numero = bufferInt;
				}else{
				printf("%s", mensajeError);
				intentos--;
			};
		}
};

void utn_getArrayChar(char character[], char* mensaje, char* mensajeError)
{
	printf(mensaje);
	fflush(stdin);
	scanf("%c", character);
}

void utn_getString(char arrayString[][20], char* mensaje)
{
	printf(mensaje);
	fflush(stdin);
	scanf("%s", arrayString);
}


void calcularPromedio(float prom, int nota1, int nota2)
{
	prom = (float)(nota1 + nota2) / 2;
}



