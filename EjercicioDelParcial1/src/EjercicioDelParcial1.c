/*
 ============================================================================
 Name        : EjercicioDelParcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

int func(char* array, int tam, char caracter);

int main() {
	setbuf(stdout, NULL);

	int i, cant;
	char array[TAM];

	for(i=0;i<TAM;i++) {
		array[i]='d';
	}

	cant= func(array,TAM,'d');

	return 0;
}


int func(char* array, int tam, char caracter)
{
	int i;
	int contador = 0;

	for(i=0;i<tam;i++)
	{
		if(array[i] == caracter){
			contador = contador+1;
		}
	}
	return contador;
}
