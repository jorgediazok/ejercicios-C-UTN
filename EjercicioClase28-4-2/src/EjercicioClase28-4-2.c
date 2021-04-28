/*
 ============================================================================
 Name        : EjercicioClase28-4-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void func(int* a, int b);

int main(void) {
	setbuf(stdout, NULL);

	int num1 = 125;
	int num2 = 80;

	func(&num1, num2);

	printf("%d %d", num1, num2);

	return 0;

	return EXIT_SUCCESS;
}

void func(int * a, int b)
{
	*a += 23;
	b += 60;
	return;
}
