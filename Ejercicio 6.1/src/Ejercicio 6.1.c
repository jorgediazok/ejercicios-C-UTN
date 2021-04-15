/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style


Ejercicio 6.1
Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int intercambiarValores(int* valorUno, int* valorDos);

int main(void) {
	setbuf(stdout, NULL);

	int num1 = 30;
	int num2 = 50;

	intercambiarValores(&num1, &num2);
	printf("El valor del número uno ahora es %d y el del número dos es %d", num1, num2);

	return 0;
}

int intercambiarValores(int* numeroUno, int* numeroDos)
{
	int aux;
	aux = *numeroUno;
	*numeroUno = *numeroDos;
	*numeroDos = aux;

	return 0;

}
