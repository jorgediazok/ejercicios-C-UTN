/*
 ============================================================================
 Name        : EjercicioDelParcial2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int* num2);


int main(void) {
	setbuf(stdout, NULL);

	int num1=2;
	int num2=4;
	int res;

	res = sumar(num1, &num2);

	return 0;
}

int sumar(int num1, int* num2)
{
	num1 = num1+*num2;
	*num2=num1;
	return 0;
}
